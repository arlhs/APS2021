#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    
    int i=0;
    int nth = 1;
    int y,z,x;
    bool flag;
    while(i<n){
        flag = true;
        x = nth;
        
        if(x<10)
        {
            flag = true;
        }
        else{
        while(x>10){
            
        y = x%10;
        x = x/10;
        z = x%10;
        if((y-z)!=1 && (y-z)!=-1 && (y-z)!=0) {
            flag = false;
        }   
    }
        }
        if(flag)
            i++;
        
     nth++;   
    }
    
    cout<<nth-1;
    return 0;
}
