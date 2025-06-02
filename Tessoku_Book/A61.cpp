#include <iostream>
#include <vector>
using namespace std;

int A[1000009], B[1000009];
int main(){
	int N, M;
	cin >> N >> M;
	vector<int> V[100009];
	for (int i = 1; i <= M; i++){
    cin >> A[i] >> B[i];
		V[A[i]].push_back(B[i]);
		V[B[i]].push_back(A[i]);
	}
	for (int i = 1; i <= N; i++){
		cout << i << " : {";
		for (size_t j = 0; j < (V[i].size()); j++){
			if (j != 0) cout << ", ";
			cout << V[i][j];
		}
		cout << "}" << endl;
	}
}