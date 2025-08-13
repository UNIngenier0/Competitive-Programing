#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0);

    int np,ns,pile,se,lim=0;
    cin>>np;
    vector<int>piles;
    vector<int>search;
    
    f(i,0,np){
        cin>>pile;
        f(j,0,pile){
            piles.push_back(i+1);
        }
    }
    cin>>ns;
    f(i,0,ns){
        cin>>se;
        cout<<piles[se-1]<<endl;
    }    
    
    return 0;
}
