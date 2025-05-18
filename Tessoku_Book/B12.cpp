#include <iostream>
using namespace std;

	double func(double x){
		return x * x * x + x;
	}

int main(){
	int N;
	cin >> N;

	double L = 1, R = 100, M;
	for (int i = 1; i <= 20; i++){
		M = (L + R) / 2;
		double value = func(M);
		if (value > N) R = M;
		if (value <+ N) L = M;
	}	

	printf("%.12lf\n", L);
    return 0;
}

