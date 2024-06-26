class Solution {
public:
    int numTrees(int n) {
        int dp[20]={1,1,2,5,0};
        // for(int i=0;i<20;i++)cout<<dp[i]<<" ";

        for(int i=4;i<=n;i++){
            //make root from i to 1
            //left subtree can have nodes [1 to root-1] 
            //right subtree can have nodes [root+1, i]
            int trees=0;
            for(int root=i;root>=1;root--){
                trees += dp[root-1] * dp[i-root];
            }
            dp[i]=trees;
        }

        return dp[n];
    }
};

/*
from discussion section- 

This is just a helpful hint to think about the problem, it does not give away the solution, but might help guide someone who is looking for it in the right direction.

Suppose I want to know how many distinct BST there are with n nodes from 0 to n-1.

If my BST has n-1 at the head, how many nodes will be on the left side? How many nodes will be on the right side?

If my BST has n-2 at the head, how many nodes will be on the left side? How many nodes will be on the right side?
*/