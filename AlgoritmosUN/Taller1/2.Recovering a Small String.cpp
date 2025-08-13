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
    vector<char> alfabeto = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 
                                  'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 
                                  'u', 'v', 'w', 'x', 'y', 'z'};
    while(t--){
        int n; cin>>n;
        stack <char> s;
        int let=3;
        
        
        while(n){
            if(n>27){
                s.push('z');
                n-=26;
                let--;
            }else{
                s.push(alfabeto[n-let]);
                let--;
                n-=n-let;
            }
            
        }
        while(!s.empty()){
            cout<<s.top();
            s.pop();
        }
        cout<<endl;
    }

    
    return 0 ;
}