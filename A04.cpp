#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  
  for (int i = 1; i <= 10; i++){
    cout << N / (1 << (10 - i));
    N %= (1 << (10 - i));
  }

  return 0;
}
