#include <iostream>
using namespace std;
int N, X, M;
int A[100009];

int bisearch(int X){
  int L = 1, R = N;
  while (L<=R){
    M = (L + R) / 2;
    if (A[M] == X) return M;
    if (A[M] > X) R = M - 1;
    if (A[M] < X) L = M + 1;
  }
  return -1;
}

int main(){
	cin >> N >> X;
	for (int i = 1; i <= N; i++) cin >> A[i];

	cout << bisearch(X) << endl;

	return 0;
}
