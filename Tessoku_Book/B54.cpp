#include <iostream>
#include <map>
using namespace std;

int N;
int A[100009];
map<int, int> Map;

int main(){
	cin >> N;
	for(int i = 1; i <= N; i++) cin >> A[i];
	long long answer = 0;
	for(int i = 1; i <= N; i++){
		answer += Map[A[i]];
		Map[A[i]]++;
	}
	cout << answer;
	return 0;
}