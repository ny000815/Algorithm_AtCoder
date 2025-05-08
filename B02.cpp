#include <iostream>
using namespace std;

int main(){
  int A,B;
  bool isDivisable = false;
  cin >> A >> B;
  for (int i = A; i <= B; i++){
    if (100 % i == 0) isDivisable = true;
  }
  if (isDivisable) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
