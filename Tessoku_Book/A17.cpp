#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, A[100009], B[100009], dp[100009];

int main() {
	cin >> N;
	for (int i = 2; i <= N; i++) cin >> A[i];
	for (int i = 3; i <= N; i++) cin >> B[i];

	dp[1] = 0;
	dp[2] = A[2];

	for (int i = 3; i <= N; i++){
		dp[i] = min(A[i] + dp[i - 1], B[i] + dp[i - 2]);
	}

  
  int place = N;
  vector <int> T;
	while (true){
	  T.push_back(place);
	  if(place == 1) break;//
	  if(dp[place - 1] + A[place] == dp[place]) place -= 1;
	  else place -= 2;
	}
	reverse(T.begin(), T.end());
	
	cout << T.size() << endl;

	for (int i = 0; i < T.size(); i++){
	  if (i != 0) cout << " ";
	  cout << T[i];
	}
	cout << endl;
	return 0;
}
