#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  string S;
  vector<char> Answer;
  cin >> S;
  //cout << S;
  bool inside = 0;
  for(auto i = 0; i < S.size(); i++){
    if(S[i] == '|' && inside == 1) inside = 0;
    else if(S[i] == '|' && inside == 0) inside = 1;
    if(!inside && S[i] != '|') Answer.push_back(S[i]);
  }
  if(Answer.size() > 0){
    for(auto i = 0; i < Answer.size(); i++) cout << Answer[i];
    cout << endl;
  }
  return 0;
}
