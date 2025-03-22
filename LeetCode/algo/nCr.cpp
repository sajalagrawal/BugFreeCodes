//nCr = n-1Cr-1 + n-1Cr


int dp[rows][cols];
memset(dp, 0, sizeof(dp));

for(int i=0;i<rows;i++){
    for(int j=0;j<=i;j++){
        if(j==0 || j==i)dp[i][j]=1;
        else dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
    }
}
