#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	int Q;
	cin >> Q;
    map<string, int> scoreList;
    string name;
    int queryType;
	for(int i = 1; i <= Q; i++){
		cin >> queryType;
		cin >> name;
		if(queryType == 1) {
			int score;
			cin >> score;
			scoreList[name] = score;
		} 
		if(queryType == 2) {
			cout << scoreList[name] << endl;
		}
	}
	return 0;
}