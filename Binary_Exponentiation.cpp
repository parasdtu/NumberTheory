#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define ull unsigned long long int
#define inf INT_MAX
#define SINF 1e18
#define pb push_back
#define mp make_pair
#define mod 1000000007  
#define PI 3.1415926535897932384626433832795

ll BinaryExponentiation(ll a,ll n){
    ll res=1;
    while(n>0){
        if(n%2!=0){
            res*=a;n-=1;
        }
        else{
            a*=a;n/=2;
        }
    }
    return res;
}

int main(){
    //////////////
    #ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.in","w",stdout);
    #endif
    /////////////
    ll a,n;
    cin>>a>>n;
    cout<<BinaryExponentiation(a,n);
    return 0;
}