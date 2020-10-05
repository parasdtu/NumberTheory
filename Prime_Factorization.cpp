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

int n=10000000;
// Useful only in case of multiple queries
void PrimeFactorization(int a){
    // Creating the Sieve
    vector<int> seive(n+1,-1);
    seive[0]=seive[1]=1;
    for(int i=2;i<=n;i++){
        if(seive[i]==-1){
            seive[i]=i;
            for(int j=i;j<=n;j+=i){
                if(seive[j]==-1)seive[j]=i;
            }
        }
    }
    // making queries in  O(log(n))
    vector<int> primes;
    while(a!=1){
        primes.pb(seive[a]);
        a/=seive[a];
    }
    for(int i=0;i<primes.size();i++){
        cout<<primes[i]<<" ";
    }
    return;
}

int main(){
    //////////////
    #ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.in","w",stdout);
    #endif
    /////////////
    int x;
    cin>>x;
    PrimeFactorization(x);
    return 0;
}