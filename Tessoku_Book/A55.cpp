#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> s;
	int N;
	int queryType[100009], value[100009];	
	cin >> N;
	for (int i = 1; i <= N; i++){
		cin >> queryType[i] >> value[i];
	}
	for (int i = 1; i <= N; i++){
		if(queryType[i] == 1) s.insert(value[i]);
		if(queryType[i] == 2) s.erase(value[i]);
		if(queryType[i] == 3){
			auto answer = s.lower_bound(value[i]);
			if (answer != s.end()) cout << *answer << endl;
			else cout << -1 << endl;
		}
	}

	return 0;
}