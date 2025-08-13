#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
#define a.all() a.begin(),a.end()

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int times;
    char matrix[8][8];
    cin>>times;
    f(i,0,times){
        f(j,0,8){
            f(u,0,8){
                char m;cin>>m;
                matrix[j][u]=m;
            }
        }
        bool s=true;
        char ans;
        f(rows,0,8){
            char base=matrix[rows][0];
            if(base =='B'){
                f(columns,0,8){
                    char comp=matrix[rows][columns]; 
                    cout<<rows<<" "<<columns;
                    cout<<base<<" "<<comp<<endl;

                    if(base==comp){
                        s=true;
                    }else{
                        s=false;
                        cout<<"ERROR"<<endl;
                        break;
                    }
                } 
                if(s==true){ans=base;}
            }
        }
        if(s==false){
            f(columns,0,8){
                char base=matrix[0][columns];
                if(base=='R'){
                    f(rows,0,8){
                        char comp=matrix[rows][columns];
                        if(base==comp){s=true;}else{s=false;break;}
                    }
                    if(s==true){
                        ans=base;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
