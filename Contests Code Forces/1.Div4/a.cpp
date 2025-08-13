#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
#define a.all() a.begin(),a.end()

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x; cin>>x;
    string s;
    f(i,0,x){
        int contA= 0,contB=0;
        cin>>s;
        for(const char m:s){
            if(m=='A'){
                contA++;
            }else{
                contB++;
            }
        }
        if(contA>contB){
            cout<<'A'<<endl;
        }else{
            cout<<'B'<<endl;
        }
    }
    

    return 0 ;
}