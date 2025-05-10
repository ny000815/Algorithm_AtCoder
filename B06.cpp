#include <iostream>
using namespace std;

int main(){
    int N, Q;
    int A[100009],L[100009],R[100009],cumulative[100009];

    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];
    cin >> Q;
    for (int i = 1; i <= Q; i++) cin >> L[i] >> R[i];

    cumulative[0] = 0;
    for (int i = 1; i <= N; i++) {
        if (A[i] == 1) cumulative[i] = cumulative[i-1] + 1;
        else cumulative[i] = cumulative[i-1] - 1;
    }

    for (int i = 1; i <= Q; i++) {
        if (cumulative[R[i]] - cumulative[L[i]-1] == 0) cout << "draw" << endl;
        else if (cumulative[R[i]] - cumulative[L[i]-1] < 0) cout << "lose" << endl;
        else cout << "win" << endl;
    }

    
    return 0;
}
