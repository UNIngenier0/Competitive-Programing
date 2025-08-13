#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
#define a.all() a.begin(),a.end()

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int y,x,b,c,d;
    cin>>y;
    bool dj=true;
    while(dj==true){
        y++;
        int yy=y;
        x=yy%10;
        yy=yy/10;
        b=yy%10;
        yy=yy/10;
        c=yy%10;
        yy=yy/10;
        d=yy%10;
        cout<<y<<endl;
        if(x!=b and x!=c and x!=d and b!=c and b!=d and c!=d){
            cout<<y<<endl;
            dj=false;
        }
    }
    return 0 ;
}