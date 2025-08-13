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
    f(i,0,t){
        int n; cin>>n;
        if(n==1){
            int s;cin>>s;
            cout<<1<<endl;
        }else{
            vi vei;
            f(j,0,n){
                int a;cin>>a;
                vei.pb(a);
            }
            map <int,int> dif;
            f(j,0,n-1){
                int h=j+1;
                dif[ vei[h]-vei[j] ]++;
            }
            int k=1 , rep=1 , m=20000;
            for(auto x:dif){
                if(x.second>rep){
                    k=x.first;
                }
            }
            if(k==1){
                    auto it = dif.begin();
                    k=it->first;
            }
            cout<<k<<endl;
        }
    }
     

    return 0 ;
}