#include "Vtestbench.h"
#include "verilated.h"

int main(int argc, char **argv)
{
	Verilated::commandArgs(argc, argv);
	Vtestbench* top = new Vtestbench;
	while(!Verilated::gotFinish()) {
		top->eval();
	}
	delete top;
	exit(0);
}

