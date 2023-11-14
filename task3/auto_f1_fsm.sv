module auto_f1_fsm #(
    parameter WIDTH = 16
)(
    input logic                 clk, 
    input logic                 rst_tick, 
    input logic                 rst_fsm, 
    input logic                 en_tick, 
    input logic [WIDTH-1:0]     N, 
    output logic [7:0]          data_out

); 

    logic en_fsm; 

    clktick clock_tick(
        .clk(clk), 
        .rst(rst_tick), 
        .en(en_tick), 
        .N(N), 
        .tick(en_fsm)
    );

    f1_fsm auto_f1(
        .clk(clk), 
        .rst(rst_fsm), 
        .en(en_fsm), 
        .data_out(data_out)
    );

endmodule
