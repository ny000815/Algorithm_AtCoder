#include <iostream>
#include <vector>
using namespace std;
int A[100009], B[100009];
bool visited[100009];
vector<int> V[100009];


void DFS(int x){
	visited[x] = true;
	for(size_t i = 0; i < V[x].size(); i++){
		int next = V[x][i];
		if(visited[next] == false) DFS(next);
	}
	return;
}

int main(){
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= M; i++){
		cin >> A[i] >> B[i];
		V[A[i]].push_back(B[i]);
		V[B[i]].push_back(A[i]);
	}

  for (int i = 1; i <= N; i++) visited[i] = false;
	DFS(1);
	bool isConnected = true;
	for(int i = 1; i <= N; i++){
		if(visited[i] == false) isConnected = false;
	}
	if (isConnected) cout << "The graph is connected." << endl;
	else cout << "The graph is not connected." << endl;
	return 0;
}

