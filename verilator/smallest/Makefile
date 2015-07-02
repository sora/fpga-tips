TARGET = testbench
TARGET_CPP = sim_main.cpp

CMD_OPTS += -Wall
CMD_OPTS += --top-module testbench
CMD_OPTS += --cc $(TARGET).sv
CMD_OPTS += --exe 

all: verilator
	cd obj_dir; make -j -f V$(TARGET).mk V$(TARGET)

verilator: 
	verilator $(CMD_OPTS) $(TARGET_CPP)

run: all
	obj_dir/V$(TARGET)
