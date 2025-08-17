/*
 * Problem: Watermelon Division
 * 
 * Given a watermelon of weight w, determine if it can be divided
 * into two parts, each having an even number of kilos.
 * 
 * Solution: Check if w is even and greater than 2
 * (since 2 cannot be divided into two even parts > 0)
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin>>w;
    if(w%2==
    0 && w>2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
