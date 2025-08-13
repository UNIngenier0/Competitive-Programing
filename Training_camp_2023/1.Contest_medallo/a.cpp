#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main (){
    int t;cin>>t;
    f(i,0,t){
        int w, h; cin>>w>>h;
        w!=h ? cout<<"Rectangle"<<endl : cout<<"Square"<<endl;
    }
    return 0 ;
}