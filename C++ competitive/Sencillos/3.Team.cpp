#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <typeinfo>
#include <string>
using namespace std;
int main(){
    int d1,d2,d3,size,i,ex=0;
    cin>>size;
    for ( i = 0; i < size; i++){
        cin>>d1>>d2>>d3;
        int res=d1+d2+d3;
        if(res>1){
            ex+=1;
        }
    }
    cout<<ex;
    return 0;
}