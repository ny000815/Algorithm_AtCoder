#include <iostream>
using namespace std;

int main(){
	long long a, b;
	long long answer = 1;
	cin >> a >> b;
	for(int i = 0; i < 60; i++){
		long long wari = (1LL << i);
		if((b / wari) %2 == 1){
		answer = answer * a % 1000000007;
		}
		a = a * a % 1000000007;
	}
	cout << answer << endl;
	return 0;
}