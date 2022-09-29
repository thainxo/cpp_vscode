reset

g++ gen_input.cpp  -o build/cmp_gen 
g++ base.cpp  -o build/cmp1
g++ code.cpp  -o build/cmp2

while [ "1" = "1" ];
do
    fn="input_cmp.txt"
    filename="./build/$fn"
    ./build/cmp_gen > $filename
    a=$(cat $filename | ./build/cmp1)
    b=$(cat $filename | ./build/cmp2)
    if [ ! "$a" = "$b" ]; then 
        cp $filename ${fn}_fail
        exit 0
    fi
done
