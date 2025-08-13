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

void func ( int i){
    if(i==n+1)return;
    if(i==n){
        for(auto x:perm){
            cout<<x<<' ';
        }
        return;
    }
    f(j,1,n+1){
        if(!b[j]){
            b[j]=1;
            perm.pb(j);
            func(i+1);
            b[j];
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    f(i,0,n){
        cin>>a[i];
        b[i]=0;
    }
    func(0);
    cout<<mn<<endl;
    
}