rm -rf obj_dir
rm -f singenA.vcd

verilator -Wall --cc --trace singenA.sv --exe singenA_tb.cpp # build obj_dir

make -j -C obj_dir/ -f VsingenA.mk VsingenA # build c++ project

obj_dir/VsingenA # build vcd file

# cd Lab2/task2
# source ./buildVcd.sh
