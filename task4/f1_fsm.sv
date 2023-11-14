module f1_fsm (
    input logic             clk, 
    input logic             en, 
    input logic             rst, 
    input logic             trigger, 
    output logic [7:0]      data_out, 
    output logic            cmd_seq, 
    output logic            cmd_delay
); 

    typedef enum {S0, S1, S2, S3, S4, S5, S6, S7, S8, S9} my_state; 
    my_state current_state, next_state;

    always_ff @(posedge clk, posedge rst) begin //state transition
        if (rst) current_state <= S0; 
        else current_state <= next_state;
    end

    always_comb // next state logic
        case (current_state)
            S0: if (trigger) next_state = S1; 
                else next_state = S0;
            S1: if (en) next_state = S2; 
                else next_state = S1;
            S2: if (en) next_state = S3; 
                else next_state = S2;
            S3: if (en) next_state = S4; 
                else next_state = S3;
            S4: if (en) next_state = S5; 
                else next_state = S4;
            S5: if (en) next_state = S6; 
                else next_state = S5;
            S6: if (en) next_state = S7; 
                else next_state = S6;
            S7: if (en) next_state = S8; 
                else next_state = S7;
            S8: next_state = S9; 
            S9: if (en) next_state = S0; 
                else next_state = S9;
        endcase

    always_comb // output logic for data_out
        case (current_state) 
            S0: data_out = 8'b0; 
            S1: data_out = 8'b1;
            S2: data_out = 8'b11;
            S3: data_out = 8'b111;
            S4: data_out = 8'b1111;
            S5: data_out = 8'b11111;
            S6: data_out = 8'b111111;
            S7: data_out = 8'b1111111;
            S8: data_out = 8'b11111111;
            S9: data_out = 8'b11111111;
        endcase

    always_comb // output logic for cmd_seq
        case (current_state)
            default: cmd_seq = 1'b1;
            S0: cmd_seq = 1'b0;
            S8: cmd_seq = 1'b0;
            S9: cmd_seq = 1'b0;
        endcase
    
    always_comb //output logic for cmd_delay
        case (current_state)
            default: cmd_delay = 1'b0;
            S8: cmd_delay = 1'b1;
        endcase

endmodule
