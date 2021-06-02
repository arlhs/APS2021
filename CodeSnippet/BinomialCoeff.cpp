int binomialCoeffDP(int n, int r)
    {
        if(r>n) return 0;
        if(r==0 or r==n) return 1;
        
        for(int i=0; i<=r; i++)
            dp[0][i] = 0;
            
        for(int i=0; i<=n; i++)
            dp[i][0] = 1;
            
        for(int i=1; i<=n; i++){
            for(int j=1; j<=r; j++){
                dp[i][j] = ( (dp[i-1][j]%mod) + (dp[i-1][j-1]%mod) ) %mod;
            }
        }
        
        return dp[n][r];
}
