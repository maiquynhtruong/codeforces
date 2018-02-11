#include <bits/stdc++.h> 
using namespace std;

int main() {
    ifstream cin("nested_dolls.inp");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
    	cin >> u >> v;
    	rEdges[v].push_back(u);
    	outDegree[u]++;
    }
    int label = N;
    queue<int> q;
    for (int i = N; i >= 1; i--) 
    	if (outDegree[i] == 0) {
    		q.push(i);
    		break;
    	}

    while (!q.empty()) {
    	int v = q.front();
    	labels[v] = label;
    	label--;
    	q.pop();
    	for (int i = 0; i < rEdges[v].size(); i++) {
    		int u = rEdges[v][i];
    		if (!visited[u]) {
    			outDegree[u]--;
    			if (outDegree[u] == 0) {
    				visited[u] = true;
    				q.push(u);
    			}
    		}
    	}	
    }
    for (int i = 1; i <= N; i++) {
    	cout << labels[i] << " ";
    }
    cout << "\n";
    return 0;
} 
