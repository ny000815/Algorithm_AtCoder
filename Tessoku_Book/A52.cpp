#include <iostream>
#include <queue>
#include <string>
using namespace std;

int n, Q[100009]; 
string S[100009];

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> Q[i];
		if(Q[i] == 1) cin >> S[i];
	}

	queue <string> st;
	for(int i = 1; i <= n; i++){
		if(Q[i] == 1) st.push(S[i]);
		if(Q[i] == 2) cout << st.front() << endl;
		if(Q[i] == 3) st.pop();
	}
	return 0;
}