//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int> q;
		int visited[1000000] = {0}; // Initialize the visited array to 0
		q.push(0);
		visited[0] = 1;
		vector<int> ans;
		while (!q.empty()) {
			int node = q.front();
			q.pop();
			ans.push_back(node);
			for (auto subnode : adj[node]) { // Iterate over the neighbors of 'node'
				if (visited[subnode] != 1) {
					q.push(subnode);
					visited[subnode] = 1;
				}
			}
		}
		return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends