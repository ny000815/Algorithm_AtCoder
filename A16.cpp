#include <iostream>
using namespace std;

int N, A[100009], B[100009], dp[100009]; 

int main(){
	cin >> N;
	for (int i = 2; i <= N; i++) cin >> A[i];
	for (int i = 3; i <= N; i++) cin >> B[i];

	dp[1] = 0;
	dp[2] = A[2];
	int answer = 0;
	for (int i = 3; i <= N; i++){
		dp[i] = min(A[i] + dp[i - 1], B[i] + dp[i -2]);
	}
	cout << dp[N] << endl;

	return 0;
}
