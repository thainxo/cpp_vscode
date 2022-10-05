#include <bits/stdc++.h>
using namespace std;

int comparator(const void *p, const void *q) 
{
    int l = *((int *)p);
    int r = *((int *)q);
    return (l - r);
}

int main(int argc, char *argv[])
{       
    /* initialize random seed: */
    srand (time(NULL));

    // long long a = llabs((long long)rand() *(long long)rand()) % ((long long)1e9) + 1;
    // long long b = llabs((long long)rand() *(long long)rand()) % ((long long)1e9) + 1;
    // long long k = llabs((long long)rand() *(long long)rand()) % ((long long)2e9) + 1;

    long long N = llabs(rand() % 50) + 1;
    long long K = llabs(rand() % 5000) + 1;
    int cw[N];
    memset(cw, 0, sizeof(cw));
    int count = 0;
    while (count < N) {
        long long w = llabs(rand() % 5000) + 1;
        int exist = 0;
        for (int i = 0; i < N; i++) {
            if (cw[i] == w) {
                exist = 1;
                break;
            }
        }
        if (exist == 0) {
            cw[count] = w;
            count++;
        }
    }

    cout << 1 << endl;
    cout << N << " " << K << endl;
    qsort(cw, N, sizeof(int), comparator);
    for (int i = 0; i < N; i++) {
        cout << cw[i] << " ";
    }
    return 0;
}
