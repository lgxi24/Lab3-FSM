#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vauto_f1_fsm.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges
  int lights = 0; // state to toggle LED lights

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vauto_f1_fsm * top = new Vauto_f1_fsm;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("clktick.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L3T3 Challenge");
  vbdSetMode(1);        // Flag mode set to one-shot

  // initialize simulation inputs
  top->clk = 1;
  top->rst_tick = 0;
  top->rst_fsm = 0; 
  top->en_tick = 0;
  top->N = vbdValue(); 
  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    // Display toggle neopixel
    vbdBar(top->data_out & 0xFF);
    // set up input signals of testbench
    top->rst_tick = (simcyc < 2);    // assert reset for 1st cycle
    top->rst_fsm = (simcyc < 2);     // assert reset for 1st cycle
    top->en_tick = (simcyc > 2);
    top->N = vbdValue();
    vbdCycle(simcyc);

    if (Verilated::gotFinish() || (vbdGetkey() == 'q'))  exit(0);
  }

  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}
