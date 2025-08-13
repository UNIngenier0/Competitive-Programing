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

    string s; cin>>s;
    map<char,int>m;
    for(auto c:s){
        m[c]+=1;
    }
    char l;
    for(auto x:m){
        if(x.second==1){
            l=x.first;
        }
    }
    f(i,0,s.length() ){
        if(s[i]==l){
            cout<<i+1<<endl;
        }
    }

    return 0 ;
}