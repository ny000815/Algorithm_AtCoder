#include <iostream>
using namespace std;

bool isPrime[100009];
int main(){
 int N;
 cin >> N;

for(int i = 2; i <= N; i++) isPrime[i] = true;

 for(int i = 2; i * i <= N; i++){
  if(isPrime[i]){
   for(int j = i * i; j <= N; j+=i){
    isPrime[j] = false;
   }
  }
 }

 for(int i = 2; i<= N; i++){
  if(isPrime[i]) cout << i << endl;
 }

return 0;
}