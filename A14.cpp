#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int A[1009], B[1009], C[1009], D[1009];
int P[1000009], Q[1000009];

int main(){
    cin >> N >> K;
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i <= N; i++) cin >> B[i];
    for (int i = 1; i <= N; i++) cin >> C[i];
    for (int i = 1; i <= N; i++) cin >> D[i];

    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++) P[(i - 1) * N + j] = A[i] + B[j];
    }

    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++) Q[(i - 1) * N + j] = C[i] + D[j];
    }

    sort(Q+1, Q+N*N+1);

    int pos;
    for (int i = 1; i <= N * N; i++){
        pos = lower_bound(Q+1, Q+N*N+1, K-P[i]) - Q;
        if (pos <= N*N && K == P[i] + Q[pos]){
                cout << "Yes" << endl;
                return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
