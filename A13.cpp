#include <iostream>
using namespace std;

int N, K, A[100009], X[100009];

int main(){
	cin >> N >> K;
	for (int i = 1; i <= N; i++) cin >> A[i];

	for (int i = 1; i <= N; i++){
		if (i == 1) X[1] = 1;
		if (i != 1) X[i] = X[i - 1];
		while(A[X[i] + 1] - A[i] <= K && X[i] < N)
			X[i]++;
	}
	long long count = 0;
	for (int i = 1; i < N; i++) {
		count += X[i] - i;
	}
	cout << count << endl;
	
	return 0;
}
