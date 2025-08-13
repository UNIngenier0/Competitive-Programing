//LINK: https://codeforces.com/contest/2037/problem/B

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


    int t; cin >> t;
	while(t--){
		int k;
		cin >> k;
		map<int, int> mapa;
		f(i,0,k){
			int c; cin >> c;
			mapa[c]++;
		}
 
		for(auto &p: mapa) {
			int val = p.first;
            if((k-2)%val!=0) continue;
            
			int z = (k-2)/val;
			if(z == val && p.second >= 2) {
				cout << z << " " << val << "\n";
				break;
			}
			if(mapa[z] > 0 && mapa[val]>0){
				cout << z << " " << val << "\n";
				break;
			}
		}
	}
    
    return 0 ;
}