reset

g++ gen.cpp  -o gen 
g++ a.cpp  -o a
g++ a_ok.cpp  -o a_ok
while [ "1" = "1" ];
do
    ./gen
    a=$(cat auto.txt | ./a)
    b=$(cat auto.txt | ./a_ok)
    if [ ! $a = $b ]; then 
        exit 0
    fi
done

# g++ gen.cpp  -o gen 
# g++ a.cpp  -o a
# while [ "1" = "1" ];
# do
#     ./gen
#     t1=$(date +%s000)
#     a=$(cat auto.txt | ./a)
#     t2=$(date +%s000)
#     t3=$(($t2 - $t1))
#     echo $t2 $t1 $t3
#     if [ $t3 -gt 1000 ]; then
#         exit 0
#     fi
# done

# g++ gen.cpp  -o gen 
# g++ a.cpp  -o a
# while [ "1" = "1" ];
# do
#     ./gen
#     t1=$(date +%s000)
#     is_ok=0
#     a=$(cat auto.txt | ./a) || is_ok=1
#     t2=$(date +%s000)
#     t3=$(($t2 - $t1))
#     echo $is_ok
#     if [ $is_ok = 1 ]; then
#         exit 0
#     fi
# done