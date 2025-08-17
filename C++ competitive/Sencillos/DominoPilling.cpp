/*
 * Problem: Domino Piling
 * 
 * Given an m x n grid, calculate how many 2x1 dominoes can fit.
 * Each domino covers exactly 2 squares.
 * 
 * Solution: Total dominoes = (m*n)/2, handling odd cases
 * For odd total squares, we can fit (m*n-1)/2 dominoes
 */

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