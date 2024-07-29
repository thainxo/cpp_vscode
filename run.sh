#!/usr/bin/env bash

help() {
    echo "1. compile and run with input from terminal"
    echo "2. compile and run with input from input.txt"
    echo "3. gen input and compare with base"
    echo "4. gen input and check timeout"
}

main() {
    local opt="$1"
    case "$opt" in
        "1")
            echo "1. compile and run with input from terminal"
            g++ code.cpp  -o build/run
            build/run
        ;;
        "2")
            echo "2. compile and run with input from input.txt"
            g++ code.cpp  -o build/run
            cat input.txt | build/run > output.txt
            diff output.txt origin.txt
        ;;
        "3")
            echo "3. gen input and compare with base"
            ./cmp.sh
        ;;
        "4")
            echo "3. gen input and compare with base"
            ./wl.sh
        ;;
        *)
            help
        ;;
    esac
}
main $@
