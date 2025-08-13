#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i=a;i<b;i++)
//{}  []
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ; cin>>t;
    f(i,0,t){
        int a ,b ,l;cin>>a>>b>>l;
        int lima=log(l)/log(a);
        int limb=log(l)/log(b);
        int cont=0;
        f(k,1,l+1){
            f(x,0,lima+1){
                f(y,0,limb+1){
                    cout<<"k: "<<k<<" x:"<<x<<" y:"<<y<<endl;
                    int r=(k*(pow(a,x))*(pow(b,y)));
                    if(r==l){
                        cout<<"ENtro"<<endl;
                        cont++;
                    }
                }
                
            }
        }
        cout<<"----"<<cont<<endl;
    }

    return 0;
}