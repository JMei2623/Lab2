rm -rf obj_dir
rm -f singen.vcd

verilator -Wall --cc --trace singen.sv --exe singen_tb.cpp # build obj_dir

make -j -C obj_dir/ -f Vsingen.mk Vsingen # build c++ project

obj_dir/Vsingen # build vcd file

# source ./buildVcd.sh
