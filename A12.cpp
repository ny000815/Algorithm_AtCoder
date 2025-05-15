#include <iostream>
using namespace std;

int N, K;
int A[100009];

bool check(long long M){
	long long sum = 0;
	for (int i = 1; i <= N; i++)
	sum +=  M/A[i];
	if (sum >= K) return true;
	else return false;
}

int main(){
	cin >> N >> K;
	for (int i = 1; i <= N; i++) cin >> A[i];

	long long L = 1, R = 1000000009;
	while(L < R){
		long long M = (L + R) / 2;
		bool answer = check(M);
		if (answer == false) L = M + 1;
		else R = M; 
	}

	cout << L << endl;
	return 0;
}
