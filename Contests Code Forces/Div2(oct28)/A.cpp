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
        int x,y,k; cin>>x>>y>>k;
        if(k<=x && k<=y){
            if(y>x){
                y=x;
            }else{
                x=y;
            }
            cout<<0<<" "<<0<<" "<<x<<" "<<0<<endl;
            cout<<0<<" "<<0<<" "<<0<<" "<<y<<endl;
        }else{
            if(y>x){
                y=x;
            }else{
                x=y;
            }
            cout<<0<<" "<<0<<" "<<x<<" "<<y<<endl;
            cout<<0<<" "<<y<<" "<<x<<" "<<0<<endl;
        }
    }
    cout<<"aaaaaaaaaaaaaaaaaaa"<<endl;
     

    return 0 ;
}