#include <iostream>
#include <algorithm>
using namespace std;

class SegmentTree{
public:
  int size = 1, data[300000];
	void init(int N){
		while (N > size) size *= 2;
		for (int i = 1; i <= size * 2; i++) data[i] = 0;
	}
	void update(int pos, int x){
		int k = pos + size - 1;
		data[k] = x;
		while (k >= 2){
			k /= 2;
			data[k] = max(data[k*2], data[k*2+1]);
		}
	}
	int check(int l, int r, int a, int b, int u){
		if(b <= l || r <= a) return -1000000000;
		if(l <= a && b <= r) return data[u];
		int m = (a + b) / 2;
		int left = check(l, r, a, m, u * 2);
		int right = check(l, r, m, b, u * 2 + 1);
		return max(left, right);
	}
};

int N, Q;
int queryType[100009], pos[100009], x[100009], l[100009], r[100009];

int main(){
	cin >> N >> Q;
	for(int i = 1; i <= Q; i++){
		cin >> queryType[i];
		if(queryType[i] == 1) cin >> pos[i] >> x[i];
		if(queryType[i] == 2) cin >> l[i] >> r[i];
	}
	SegmentTree Z;
	Z.init(N);

	for(int i = 1; i <= Q; i++){
		if (queryType[i] == 1) Z.update(pos[i], x[i]);
		if (queryType[i] == 2) cout << Z.check(l[i], r[i], 1, Z.size + 1, 1) << endl;
	}
	return 0;
}

