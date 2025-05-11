#include <iostream>
using namespace std;

int main(){
    int T, N;
    int L[100009], R[100009], plusMinus[100009], cumulative[100009];

    cin >> T >> N;
    for (int i = 1; i <= N; i++) cin >> L[i] >> R[i];

    for (int i = 0; i <= N; i++) plusMinus[i] = 0; 
    for (int i = 1; i <= N; i++) {
        plusMinus[L[i]] += 1;
        plusMinus[R[i]] -= 1;
    }
    cumulative[0] = 0;
    for (int i = 0; i < T; i++) {
        if (i == 0) cumulative[i] = plusMinus[i];
        else cumulative[i]  = cumulative[i - 1] + plusMinus[i];
        cout << cumulative[i] << endl;
    }

    return 0;
}
