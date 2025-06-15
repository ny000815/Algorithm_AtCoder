#include <iostream>
#include <string>
using namespace std;
bool dp[100009];

int main(){
	int N, A, B;
	cin >> N >> A >> B;
	for(int i = 1; i <= N; i++){
		if(i >= A && dp[i - A] == false) dp[i] = true;
		else if(i >= B && dp[i - B] == false) dp[i] = true;
		else dp[i] = false;
	}
	string answer;
	if(dp[N]) answer = "First";
	else answer = "Second";
	cout << answer << endl;
	return 0;
}
