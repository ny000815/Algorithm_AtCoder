#include <iostream>
using namespace std;

int N, K;
int A[1000009], C[100009], R[1000009];

int sum(int l, int r){
	return C[r] - C[l - 1];
}

int main (){
	cin >> N >> K;
	for (int i = 1; i <= N; i++) cin >> A[i];

	for (int i = 1; i <= N; i++) C[i] = C[i - 1] + A[i];

	for (int i = 1; i <= N; i++){
		if (i == 1) R[i] = 0;
		else R[i] = R[i - 1];

		while(R[i] < N && sum(i, R[i] + 1) <= K ){
			R[i]++;
		}
	}
	long long answer = 0;
	for (int i = 1; i <= N; i++){
		answer += R[i] - i +1;
	}
	cout << answer << endl;

	return 0;
}
