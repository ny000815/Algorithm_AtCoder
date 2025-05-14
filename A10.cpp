#include <iostream>
using namespace std;
int N, D;
int A[100009], L[100009], R[100009], P[100009], Q[100009];

int main(){
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> A[i];
	cin >> D;
	for (int i = 1; i <= D; i++) cin >> L[i] >> R[i];

	for (int i = 1; i <= N; i++) P[i] = max(P[i - 1], A[i]);
	for (int i = 0; i < N; i++) Q[N - i] = max(Q[N - i + 1], A[N - i]);
  
	for (int i = 1; i <= D; i++) cout << max(P[L[i]-1],Q[R[i]+1]) << endl;
	return 0;
}
