//https://leetcode.com/problems/average-of-levels-in-binary-tree/
//DFS
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<pair<long,int>> levelData(10005, make_pair(0,0));
        computeLevelSum(root, 0, levelData);
        vector<double> averages;
        for(int i=0; i<levelData.size();i++){
            // cout<<levelData[i].first<<" "<<levelData[i].second<<endl;
            if(levelData[i].second == 0)break;
            averages.push_back((double)levelData[i].first/levelData[i].second);
        }
        return averages;
    }
    
    void computeLevelSum(TreeNode* node, int level, vector<pair<long,int>>& levelData){
        if(node == NULL){
            return;
        }
        
        levelData[level].first += node->val;
        levelData[level].second++;
        computeLevelSum(node->left, level+1, levelData);
        computeLevelSum(node->right, level+1, levelData);
    }
};


//BFS
vector<double> averageOfLevels(TreeNode* root) {
	queue<TreeNode*> q;
	q.push(root);
	vector<double> averages;
	while(!q.empty()){
		double levelSum = 0;
		int count = q.size();
		for(int i=0;i<count;i++){
			TreeNode* front = q.front();
			q.pop();
			levelSum += front->val;
			if(front->left != NULL)q.push(front->left);
			if(front->right != NULL)q.push(front->right);
		}
		averages.push_back(levelSum/count);
	}
	return averages;
}