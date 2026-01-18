#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop.h"
#include "Vtop___024root.h"

// 终止时间
#define MAX_SIM_TIME 30
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
    // 新建需要仿真的对象
    Vtop *dut = new Vtop;

    // 生成仿真波形, "vcd" 文件
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->clk = 0;
    dut->rst_n = 0;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    while (sim_time < MAX_SIM_TIME) {
        if (sim_time == 3) {
            dut->rst_n = 1;   // 释放复位
        }
        // 翻转时钟
        dut->clk ^= 1;
        // 仿真 ALU 模型中的所有信号
        dut->eval();
        // 将所有被追踪的信号写入波形中
        m_trace->dump(sim_time);
        // 增加时间
        sim_time++;
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}