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

//https://vjudge.net/contest/614531#problem/A


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    vi x;
    vi y;
    f(i,0,n){
        int m; cin>>m;
        x.pb(m);
    }
    f(i,0,n){
        int m; cin>>m;
        y.pb(m);
    }
    int c=0;
    f(i,0,n){
        f(j,i+1,n){
            int hip=pow(abs(x[i]-x[j]),2) + pow(abs(y[i]-y[j]),2);
            c=max(c, hip);
        }
    }
    cout<<c<<endl;
    return 0;
}