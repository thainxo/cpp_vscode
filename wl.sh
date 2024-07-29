reset

g++ gen_input.cpp  -o build/wl_gen
g++ code.cpp  -o build/wl

while [ "1" = "1" ];
do
    fn="input_wl.txt"
    filename="./build/$fn"
    ./build/cmp_gen > $filename
    a=$(cat $filename | ./build/wl)
    t1=$(date +%s000)
    is_ok=0
    a=$(cat $filename | ./build/wl) || is_ok=1
    t2=$(date +%s000)
    t3=$(($t2 - $t1))
    echo $is_ok $t2 $t1 $t3
    if [ $is_ok = 1 ]; then
        echo "fail when run"
        cp $filename ${fn}_fail
        exit 0
    fi

    if [ $t3 -gt 1000 ]; then
        echo "over time when run"
        cp $filename ${fn}_time
        exit 0
    fi
done
