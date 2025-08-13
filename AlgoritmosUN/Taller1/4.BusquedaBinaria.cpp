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

int binarySearch(vi &v, int a, int &n){
    if(a<v[0] || v[n-1]<a)return -1;
    int l=0 , r=n-1;
    if(v[l]==a)return l;
    if(v[r]==a)return r;
    while(l<=r){
        int mid=(r+l)/2;
        if(v[mid]==a)return mid;
        (v[mid]>a)? r=mid-1 : l=mid+1;
        if(v[l]==a)return l;
        if(v[r]==a)return r;
        
    }
    return -1;
}

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q,ans; cin>>n>>q;
    vi v;
    f(i,0,n){
        int a;cin>>a;
        v.pb(a);
    }
    while (q--){
        int a ; cin>>a;
        ans =binarySearch(v,a,n);
        while(v[ans]==v[ans-1])ans--;
        cout<<ans<<endl;
    }
    return 0 ;
}