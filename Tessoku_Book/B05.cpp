#include <iostream>
using namespace std;

int main(){
	int N, Q;
	int A[10009];
	int L[10009];
	int R[10009];

	cin >> N >> Q;
	for (int i = 1; i <= N; i++) cin >> A[i];
	for (int i = 1; i <= Q; i++){
	cin >> L[i];
	cin >> R[i];
	}

	int cumulativeTotal[N];
	for (int i = 1; i <= N; i++){
		cumulativeTotal[i] += A[i];
	}
	for (int i = 1; i <= Q; i++){
		cout << cumulativeTotal[R[i]] - cumulativeTotal[L[i]-1]  << endl;
	}
	return 0;
}

