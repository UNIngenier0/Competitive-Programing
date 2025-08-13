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
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin>>n;
    vi v(n);
    f(i,0,n){
        int m;cin>>m;
        v[i]=m;
    }
    sort(v.begin(),v.end());
    int cont =0; 
    for(int i:v){
        cont+=abs(v[v.size()/2]-i);
    }
    cout<<cont<<endl;

    return 0;
}