#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
#define a.all() a.begin(),a.end()

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,a1,a2,a3,a4,a5,a1_a2,a2_a3,a1_a3;
    fflush(stdout);

    cout<<"? "<<1<<" "<<2<<endl;
    cin>>a1_a2;
    fflush(stdout);
    cout<<"? "<<1<<" "<<3<<endl;
    cin>>a1_a3;
    fflush(stdout);
    cout<<"? "<<2<<" "<<3<<endl;
    cin>>a2_a3;
    
    a3=( a2_a3 - a1_a2 + a1_a3)/2;
    a2=a2_a3-a3;
    a1=a1_a2-a2;

    
    return 0;
}