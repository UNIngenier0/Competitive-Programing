#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
int main (){
    int t,w,h;
    cin>>t;
    vector <string> ans;
    f(i,0,t){
        cin>>w>>h;
        if(w==h){
            ans.push_back("Square");
        }else{
            ans.push_back("Rectangle");
        }
    }
    f(i,0,t){
        cout<<ans[i]<<endl;
    }
    return 0 ;
}