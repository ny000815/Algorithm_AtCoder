#include  <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, H[100009], dp[100009];

int main(){
	cin >> N;
	for(int i = 1; i <= N; i++) cin >> H[i];

	dp[1] = 0;
	dp[2] = abs(H[1] - H[2]);
	for(int i = 3; i <= N; i++) {
		dp[i] = min(dp[i - 1] + abs(H[i] - H[i - 1]), dp[i -2] + abs(H[i] - H[i - 2]));
	}

	vector <int> T;
	int place;
	place = N;
	while (true){
		T.push_back(place);
		if (place == 1) break;
		if (dp[place -1] + abs(H[place - 1] - H[place]) == dp[place]) place -= 1;
		else place -= 2;
	}
	
	reverse(T.begin(), T.end());

	cout << T.size() << endl;
	for (int i = 0; i < T.size(); i++) {
	if (i != 0) cout << " ";
		cout << T[i];
	}
	cout << endl;
  	return 0;
}
