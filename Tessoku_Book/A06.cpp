#include <iostream>
using namespace std;

int main(){
	int N, Q;
	int A[100009];
	int L[100009];
	int R[100009];

	cin >> N >> Q;
	for (int i = 1; i <= N; i++) cin >> A[i];
	for (int i = 1; i <= Q; i++){
	cin >> L[i];
	cin >> R[i];
	}

	int cumulativeTotal[10009];
    cumulativeTotal[0] = 0;
	for (int i = 1; i <= N; i++){
		cumulativeTotal[i] = A[i] + cumulativeTotal[i - 1];
	}
	for (int i = 1; i <= Q; i++){
		cout << cumulativeTotal[R[i]] - cumulativeTotal[L[i]-1]  << endl;
	}
	return 0;
}

