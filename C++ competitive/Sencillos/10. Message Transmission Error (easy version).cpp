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
    
    string s;cin>>s;
	int i=0,j=1;
	while(j<s.length()){
		if(s[i]==s[j]){i++,j++;}
		else {j-=i-1;i=0;}
	}
	if(i>j-i){
		cout<<"YES"<<endl;
		cout<<s.substr(0,i)<<endl;
	}
	else cout<<"NO"<<endl;

    return 0 ;
}