#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef map <int,int> mii;

//#define a.all() a.begin(),a.end()

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vi v;
        f(i,0,2*n){
            int x;cin>>x;
            v.pb(x);
        }
        int ans=0;
        sort(v.begin(), v.end());
        for(int i=0 ; i<2*n ; i+=2){
            ans+=min(v[i],v[i+1]);
        }
        cout<<ans<<endl;
    }

    
    return 0 ;
}