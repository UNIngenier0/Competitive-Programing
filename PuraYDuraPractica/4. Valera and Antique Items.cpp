//https://codeforces.com/problemset/problem/441/A

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
    
    int n , v; cin>>n>>v;
    set<int> s;
    int cant=0;
	f(j,0,n){
	    int num;cin>>num;
	    int trat=0;
	    f(i,0,num){
	        int pre;cin>>pre;
	        if(pre<v){
	            trat++;
	            s.insert(j+1);
	        }
	    }
	    if(trat>0)cant++;
	}   
    cout<<cant<<endl;
	for(auto x:s){
	        cout<<x<<" ";
	}
	   
    return 0 ;
}