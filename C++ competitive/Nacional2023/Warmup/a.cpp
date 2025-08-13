#include <bits/stdc++.h>
using namespace std;

typedef vector <int> vi;

#define f(i,a,b) for (int i =a; i<b; i++)
#define PB push_back


int main (){
    /*#ifdef LOCAL
        freopen ("input.txt","r",stdin);
    #endif LOCAL*/

    int n; 
    while(cin>>n){
        int cont = 0;
        if(!n) break;
        vi inicial (n),algo(n);
        vi per (n);
        f(i,0,n){
            inicial[i]=i;
            algo[i]=i;
        }
        for(auto &a:per) cin>>a;
        while (true){
            int coig=0;
            vi nuevo (n);
            f(i,0,n){
                nuevo[per[i]-1]=inicial[i];
            }
            /*for(auto a:nuevo ){
                cout<<a;
            }
            cout<<endl;*/
            
            f(i,0,n){
                if(algo[i]!=nuevo[i]){
                    coig=0;
                    break;
                }else{
                    coig++;
                }
            }
            f(i,0,n){
                inicial[i]=nuevo[i];
            }
            cont++;
            if(coig==n && cont>1){
                cout<<cont<<endl;
                break;
            }else if(coig==n && cont==1){
                cout<<0<<endl;
                break;
            }
        }
    }
    return 0;
}
