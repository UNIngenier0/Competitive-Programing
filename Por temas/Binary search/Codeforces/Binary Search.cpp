#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

//{}  []

void bs(ll i, vi v, int t){
    
    int r = t-1 , l = 0;
    string ans = "NO";
    while(r-l>1){
        cout<<"a"<<endl;
        int m=(l+r)/2;
        if(i==v[m] or i==v[r] or i==v[l]){
            ans="YES";
        }else if(i<v[m]){
            r=m;
        }else{
            l=m;
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k; cin>>n>>k;
    vi v; 
    f(i,0,n){
        int m; cin>>m;
        v.pb(m);
    }
    f(i,0,k){
        ll m;cin>>m;
        cout<<"ENtroo: "<<m<<endl;
        bs(m,v,n);
    }
    return 0;
}