#include <iostream>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  
  int answer = 0;
  
  for (int i = 1; i <= N; i++){
    for (int j = 1; j <= N; j++){
      if (K -i -j > 0 && K - i -j <= N) answer++;
    }
  }
  cout << answer << endl;
  return 0;
}
