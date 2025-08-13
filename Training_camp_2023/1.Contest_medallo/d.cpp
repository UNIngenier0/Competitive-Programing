#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i =a; i<b; i++)
#define pb push_back

int main(){
    int tests;
    cin>>tests;
    f(i,0,tests){
        int books=0,bought=0,ceros=0;
        vector<int> v;
        cin>>books>>bought;
        f(j,0,books){
            int b;
            cin>>b;
            v.push_back(b);
            if(b==0) ceros++;
        }
        if(books==bought) cout<<"Richman"<<endl;
        else if(ceros>bought) cout<<"Impossible"<<endl;
        else{
            long long sm=0;
            int boughta =bought;
            bought-=ceros;
            for(int i=0;(bought+1)>0;i++){
                if(v[i]==0) continue;
                sm+=v[i];
                bought--;
            }
            if(boughta==0){
                int menor=1e5;
                f(i,0,books){
                    if(v[i]<menor){
                        menor=v[i];
                    }
                }
                cout<<menor-1<<endl;
            }else{
                cout<<sm-1<<endl;
            }
        }
        
    }
    return 0 ;
}