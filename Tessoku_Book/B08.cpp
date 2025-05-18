#include <iostream>
using namespace std;
	int N, Q;
	int X[100009], Y[100009], A[100009], B[100009], C[100009], D[100009];
	int Z[1509][1509];
	int P[1509][1509];
int main(){
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> X[i] >> Y[i];
	cin >> Q;
	for (int i = 1; i <= Q; i++) cin >> A[i] >> B[i] >> C[i] >> D[i];

	for (int i = 1; i <= N; i++) Z[X[i]][Y[i]] += 1;

	for (int i = 1; i <= 1500; i++){
		for (int j = 1; j <= 1500; j++) P[i][j] = Z[i][j] + P[i][j-1];
	}
	for (int i = 1; i <= 1500; i++){
		for (int j = 1; j <= 1500; j++) P[i][j] = P[i][j] + P[i-1][j];
	}

	for (int i = 1; i <= Q; i++) cout << P[C[i]][D[i]] + P[A[i] - 1][B[i] - 1] - P[A[i] - 1][D[i]] - P[C[i]][B[i] - 1] << endl;

	return 0;
}
