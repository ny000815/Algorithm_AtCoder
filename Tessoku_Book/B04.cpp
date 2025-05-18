#include <iostream>
using namespace std;

int main(){
  int N;
  int Decimal = 0;
  cin >> N;
  for (int i = 0; i < 8; i++){
    Decimal += N % 2 * (1 << i);
    N /= 10;
  }
  cout << Decimal << endl;
  return 0;
}
