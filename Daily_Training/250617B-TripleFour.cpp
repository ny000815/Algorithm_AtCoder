#include <iostream>
using namespace std;

int main(){
  int N;
  int A[109];
  cin >> N;
  for(int i = 1; i <= N; i++) cin >> A[i];
  
  bool Answer = false;
  for(int i = 1; i <= N - 2; i++){
    if(A[i] == A[i + 1] && A[i + 1] == A[i + 2]) Answer = true;
  }
  if(Answer) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
