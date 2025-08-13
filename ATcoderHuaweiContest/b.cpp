#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back
#define all(x) v.begin(), v.end()
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vc vector<char>
#define vvc vector<vector<char>>

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

    vi v;
    int n,a;
    f(i,0,n){
        cin>>a;
        v.pb(a);
        cout<<a<<"...."<<endl;
    }
    int q; cin>>q;
    f(i,0,q){
        int a,b; cin>>a>>b;
        for(auto x:v){
            if(x==a){
                cout<<a<<endl;
                break;
            }
            if(x==b){
                cout<<b<<endl;
                break;
            }
        }
    }


    return 0 ;
}