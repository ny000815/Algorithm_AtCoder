#include <iostream>
#include <vector>
using namespace std;
int A[100009], B[100009];
bool visited[100009];
vector<int> V[100009];
vector<int> Path, Answer;
int N, M;



void DFS(int pos){
	if(pos == N){
	  Answer = Path;
	  return;
	}

	visited[pos] = true;
	for(int i = 0; i < V[pos].size(); i++){
		int next = V[pos][i];
		if(visited[next] == false) {
		Path.push_back(next);
		DFS(next);
		Path.pop_back();
		}
	}
	return;
}

int main(){
	cin >> N >> M;
	for (int i = 1; i <= M; i++){
		cin >> A[i] >> B[i];
		V[A[i]].push_back(B[i]);
		V[B[i]].push_back(A[i]);
	}

  for (int i = 1; i <= N; i++) visited[i] = false;
	Path.push_back(1);
	DFS(1);
	for(int i = 0; i <= Answer.size() -1; i++){
		if(i >= 1) cout << " ";
		cout << Answer[i];
		}
		cout << endl;
	return 0;
}
