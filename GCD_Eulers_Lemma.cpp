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

// Time Complexity O(log(min(a,b)))


int GCD(int a,int b){
    if(b==0){return a;}
    return GCD(b,a%b);
}

int main(){
    //////////////
    #ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.in","w",stdout);
    #endif
    /////////////
    int a,b;
    cin>>a>>b;
    int gcd=GCD(max(a,b),min(a,b));
    int lcm=(a*b)/gcd;
    return 0;
}