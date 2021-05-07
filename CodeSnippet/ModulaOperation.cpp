#include <bits/stdc++.h>
using namespace std;


#define ll long long

// a**n
ll modIterative(ll a, ll n, ll m)
{
    ll ans = 1;
    while(n!=0){
        if(n%2!=0)
            ans = ((ans)%m * (a)%m)%m;
        
        a = ((a)%m * (a)%m)%m;
        n = n >> 1;
    }

    return ans;
}

// used for finding MMI
ll extendedEuclid(ll a, ll m, ll *x, ll*y)
{
    if(m==0){
        *x=1;
        *y=0;
        return a;
    }

    ll x1, y1;
    ll gcd = extendedEuclid(m, a%m, &x1, &y1);

    *x = y1;
    *y = x1 - (a/m)*y1;

    return gcd;
}
