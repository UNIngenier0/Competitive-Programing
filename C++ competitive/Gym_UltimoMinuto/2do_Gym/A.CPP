#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n ; cin>>n;
    vector<long long> num;
    vector<int> v;
    f(i,0,n){
        long long a; cin>>a;
        num.push_back(a);
    }
    
    long long rt=1e18;
    f(i,0,7){
        f(j,i+1,6){
            rt=min(num[i]+num[j],rt);
            cout<<v[i]<<" "<<v[j]<<endl;
            
        }
    }
    cout<<rt<<endl;

    return 0;
}