#include <iostream>
#include <stack>
#include <string>
using namespace std;

int q, Q[100009]; 
string S[100009];

int main(){
	cin >> q;
	for(int i = 1; i <= q; i++) {
		cin >> Q[i];
		if(Q[i] == 1) cin >> S[i];
	}

	stack <string> st;
	for(int i = 1; i <= q; i++){
		if(Q[i] == 1) st.push(S[i]);
		if(Q[i] == 2) cout << st.top() << endl;
		if(Q[i] == 3) st.pop();
	}
	return 0;
}
