#include <bits/stdc++.h>
using namespace std;
int main (){
    int m, n, r;
    cin>>m>>n;
    r=m*n;
    if(r%2==0){
        cout<<r/2<<endl;    
    }else{
        cout<<(r-1)/2<<endl;
    }
    return 0;
}