#include <iostream>
#include <vector>

using namespace std;

// 그래프를 표현하기 위한 인접 리스트
vector<int> adj[101];
// 방문 여부를 체크하기 위한 배열
bool visited[101];

// DFS 탐색 함수
void dfs(int node) {
    visited[node] = true; // 현재 노드를 방문 처리

    // 현재 노드와 연결된 모든 노드를 탐색
    for (int i = 0; i < adj[node].size(); i++) {
        int next = adj[node][i];
        if (!visited[next]) {
            dfs(next); // 방문하지 않은 노드가 있으면 DFS 재귀 호출
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    // 네트워크 상에서 직접 연결되어 있는 컴퓨터 쌍 입력
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // 1번 컴퓨터부터 DFS 탐색 시작
    dfs(1);

    // 1번 컴퓨터를 통해 웜 바이러스에 걸리게 되는 컴퓨터의 수 계산
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (visited[i]) {
            count++;
        }
    }

    // 결과 출력
    cout << count << endl;

    return 0;
}