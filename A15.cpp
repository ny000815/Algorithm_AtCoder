#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int N, A[100009], B[100009];
	vector<int> T;
	cin >> N;
	for (int i = 1; i <= N; i++){
		cin >> A[i];
		T.push_back(A[i]);
	}
	sort(T.begin(), T.end());
	T.erase(unique(T.begin(), T.end()), T.end());

	for (int i = 1; i <= N; i++){
		B[i]= lower_bound(T.begin(), T.end(), A[i]) -T.begin() + 1;
	}

	for (int i = 1; i <= N; i++){
		if (i >= 2) cout << " ";
		cout << B[i];
	}
	
	return 0;
}
