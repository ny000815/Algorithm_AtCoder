 #include <iostream>
 using namespace std;
 
 int main(){
   int N,X;
   int A[109];
   bool hasNumber = false;
   
   cin >> N >> X;
   for (int i = 1; i < N; i++){
     cin >> A[i];
     if (A[i] == X) hasNumber = true;
   }
   if (hasNumber) cout << "Yes" << endl;
   else cout << "No" << endl;
   return 0;
 }
