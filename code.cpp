#include <bits/stdc++.h>
using namespace std;

#define MAX 200001
int cw[52];
int d[5001];

void process(int N, int K, int cw[])
{
        for (int i = 0; i <= K; i++) {
                d[i] = 0;
        }
        d[0] = 1;
        for (int i = 0; i < N; i++) {
                for (int j = K; j >= cw[i]; j--) {
                        if (d[j - cw[i]]) {
                                d[j] = 1;
                        }
                }
        }
        cout << endl;
}

int main()
{
        int T;
        cin >> T;
        for (int t = 0; t < T; t++) {
                int N, K;
                cin >> N >> K;
                for (int i = 0; i < N; i++) {
                        cin >> cw[i];
                }

                process(N, K, cw);
        }

        return 0;
}