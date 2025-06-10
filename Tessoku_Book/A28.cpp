#include <iostream>
using namespace std;

long long N, A[100009]; 
char T[100009];
int main(){
	cin >> N;
	for(int i = 1; i <= N; i++) cin >> T[i] >> A[i];
	long long answer = 0;
	for(int i = 1; i <= N; i++){
		if(T[i] == '+') answer += A[i];
		if(T[i] == '-') answer -= A[i];
		if(T[i] == '*') answer *= A[i];
		if (answer < 0) answer += 10000;
		answer %= 10000;
		cout << answer % 10000 << endl;
	}
	return 0;
}
