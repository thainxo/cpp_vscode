/* rand example: guess the number */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    /* initialize random seed: */
    srand (time(NULL));
    ofstream myfile;
    myfile.open ("auto.txt");
    myfile << 1 << endl;
    // long long a = llabs((long long)rand() *(long long)rand()) % ((long long)1e9) + 1;
    // long long b = llabs((long long)rand() *(long long)rand()) % ((long long)1e9) + 1;
    // long long k = llabs((long long)rand() *(long long)rand()) % ((long long)2e9) + 1;

    long long a = llabs((long long)rand()) % ((long long)512) + 1;
    long long b = llabs((long long)rand()) % ((long long)512) + 1;
    long long k = llabs((long long)rand()) % ((long long)1024) + 1;
    
    myfile << a << " " << b << " " << k << endl;
    myfile << endl;
    myfile.close();
    return 0;
}