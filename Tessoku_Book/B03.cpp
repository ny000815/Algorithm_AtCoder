#include <iostream>
using namespace std;

int main(){
  int N;
  int A[1009];
  bool isThousand = false;
  
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[i];
  
  for (int i = 1; i <= N-2; i++){
    for (int j = i + 1; j <= N -1; j++){
      for (int k = j +1; k <= N; k++){
        if (A[i] + A[j] + A[k] == 1000) {
          isThousand = true;
          break;
        }
      }
    }
  }
  if (isThousand) cout << "Yes" <<endl;
  else cout << "No" << endl;
  return 0;
}

