#include <iostream>
#include <queue>
#include <string>
using namespace std;

int n, Q[100009], N[100009];

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> Q[i];
		if(Q[i] == 1) cin >> N[i];
	}

	priority_queue <
	  int, 
	  vector <int>,
	  greater <int>
	  > que;
	for(int i = 1; i <= n; i++){
		if(Q[i] == 1) que.push(N[i]);
		if(Q[i] == 2) cout << que.top() << endl;
		if(Q[i] == 3) que.pop();
	}
	return 0;
}
