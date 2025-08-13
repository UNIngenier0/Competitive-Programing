#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;

//{}  []
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    
    f(i,0,t){
        map<char, int> p;
        int cont=0;
        int n;cin >>n;
        string problemas; cin>>problemas;
        for(char c:problemas){
            p[c]++;
        }
        for(auto l:p){
            if(l.second > (l.first-'A')){        
                cont++;
                
            }
        }
        cout<<"---"<<cont<<endl;
    }

    return 0;
}