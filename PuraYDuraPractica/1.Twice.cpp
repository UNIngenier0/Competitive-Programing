//Link del ejercicio: https://codeforces.com/contest/2037/problem/A

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

void alReves(string){
    
}
int a[]={5,8,17,2,20,11},n,i;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    f(i,0,t){
        int n; cin>>n;
        vi v;
        f(j,0,n){
            int a; cin>>a;
            v.pb(a);
        }
        if(n==1){
            cout<<0<<endl;
        }else{
            int ans=0;
            vi visited (n,0);
            f(q,0,n-1){
                f(w,q+1,n){
                    if(visited[q]==0 && visited[w]==0){
                        if(v[q]==v[w]){
                            ans++;
                            visited[q]=1;
                            visited[w]=1;
                        }
                    }
                }
            }
            cout<<ans<<endl;
        }
    }
    
    return 0 ;
}