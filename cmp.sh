#!/bin/sh

data()
{
    echo "1";
    n=50000
    echo $n;
    i=0;
    while [ "$i" -lt $n ];
    do
        echo 10;
    done
}

gettime() {
    t1=$(date +%s%N)
    data | ./a.out 
    t2=$(date +%s%N)
    tt=$(($t2 - $t1))
    echo time: "$tt"
}

build() {
    g++  -o gen gen.cpp
    g++  -o co co.cpp
    g++  -o c c.cpp
}
cmp() {
    ./gen
    a=$(cat auto.txt | ./co)
    b=$(cat auto.txt | ./c)
    echo "$([ "$a" = "$b" ] && echo 1 || echo 0)"
}
reset 
# build
# r=1
# while [ "$r" = "1" ];
# do
#     r=$(cmp)
# done

g++ co.cpp;
gettime
g++ c.cpp;
gettime

