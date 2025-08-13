#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
#define a.all() a.begin(),a.end()

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    f(i,0,t){
        int n; cin>>n;
        string s;
        int past=0,act=0;
        string ans="TRIANGLE";
        f(i,0,n){
            cin>>s;
            for(char c:s){
                if(c=='1'){
                   act++;
                }
            }
            if(past==act && act>0){
                ans="SQUARE";
            }
            past=act;
            act=0;
        }
        cout<<ans<<endl;
        
    }

    return 0 ;
}