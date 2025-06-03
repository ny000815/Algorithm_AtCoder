#include <iostream>
using namespace std;

int GCD(int A, int B){
  if (A > B){
    int temp = A;
    A = B;
    B = temp;
  }
  if (B % A == 0) return A;
  B %= A;
  return GCD(B, A);
}

int main(){
  int A, B;
  cin >> A >> B;
  cout << GCD(A, B);
  return 0;
}
