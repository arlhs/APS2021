#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, q;
    
    cin>>n>>q;
    
    ll ar[n];
    for(int i=0; i<n; i++)
        cin>>ar[i];

    sort(ar, ar+n);
    
    while(q--){
        ll l, r;
        cin>>l>>r;

        if(l>r)
        	swap(l,r);
        
        ll lIdx = lower_bound(ar, ar+n, l) - ar;
        ll rIdx = upper_bound(ar, ar+n, r) - ar;
        
        int value = (rIdx-lIdx);
        
        cout<<value<<"\n";
    }
    
}
