<include<bits/stdc++.h>
using namsespace std;

class Solution {
  public:
  
    long long dyck(int n){
        long long res = 1;
        
        for(int i=0; i<n; i++){
            res = res*(2*n - i);
            res = res/(i + 1);
        }
        
        return res/(n + 1);
    }
    
    long long dyckPaths(int N) {
        long long res=1;
        
        res = dyck(N);
        
        return res;
    }
}
