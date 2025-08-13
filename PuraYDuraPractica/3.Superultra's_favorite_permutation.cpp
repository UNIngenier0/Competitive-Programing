// Link: https://codeforces.com/contest/2037/problem/C

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
    
    // 1,2,3,4,5,6
    //1,3,5,4,2,6
    
    int t; cin >> t;
	while(t--){
	    int n; cin>>n;
	    vi used(n,0);
	    if(n<5) cout<<-1<<endl;
	    else{
	        int mid;
	        f(i,1,n+1){
	            if(i%2==1 && i!=5){
	                cout<<i<<" ";
	                mid=i;
	            }
	        }
	        cout<<5<<" "<<4<<" ";
	        f(i,1,n+1){
	            if(i!=4 && i%2==0){
	                cout<<i<<" ";
	            }
	            
	        }
	    }
	}
    return 0 ;
}