#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;

//{}  []
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    map<int ,int> m;
    f(i,0,t){
        int a,b;cin>>a>>b;
        m[a]+=b;
    }
    ll cont=0,tardanza=0;
    for ( auto t:m){
        tardanza+=t.first;
        cont+=t.second-tardanza; 
    }
    cout<<cont<<endl;
    return 0;
}