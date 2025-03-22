//https://leetcode.com/problems/count-the-number-of-complete-components/?envType=daily-question&envId=2025-03-22

class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        // Initialize Union Find and edge counter
        UnionFind dsu(n);
        unordered_map<int, int> edgeCount;

        // Connect components using edges
        for (const auto& edge : edges) {
            dsu.unionSets(edge[0], edge[1]);
        }

        // Count edges in each component
        for (const auto& edge : edges) {
            int root = dsu.find(edge[0]);
            edgeCount[root]++;
        }

        // Check if each component is complete
        int completeCount = 0;
        for (int vertex = 0; vertex < n; vertex++) {
            if (dsu.find(vertex) == vertex) {  // If vertex is root
                int nodeCount = dsu.rank[vertex];
                int expectedEdges = (nodeCount * (nodeCount - 1)) / 2;
                if (edgeCount[vertex] == expectedEdges) {
                    completeCount++;
                }
            }
        }
        return completeCount;
    }

private:
    class UnionFind {
    public:
        vector<int> parent;
        vector<int> rank;  // Tracks rank of each component

        // Constructor with Initializer List
        UnionFind(int n) : parent(n, -1), rank(n, 1) {}

        // Find root of component with path compression
        int find(int node) {
            if (parent[node] == -1) {
                return node;
            }
            return parent[node] = find(parent[node]);
        }

        // Union by size
        void unionSets(int node1, int node2) {
            int root1 = find(node1);
            int root2 = find(node2);

            if (root1 == root2) {
                return;
            }

            // Merge smaller component into larger one
            if (rank[root1] > rank[root2]) {
                parent[root2] = root1;
                rank[root1] += rank[root2];
            } else {
                parent[root1] = root2;
                rank[root2] += rank[root1];
            }
        }
    };
};
