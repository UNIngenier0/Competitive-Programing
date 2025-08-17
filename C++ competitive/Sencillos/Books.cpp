/*
 * Problem: Books Shelving
 * 
 * Calculate how many shelves are needed to store n books,
 * where each shelf can hold exactly 5 books.
 * 
 * Solution: Use ceiling division - if n%5==0, shelves = n/5
 * Otherwise, shelves = (n/5) + 1
 */

#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
int main (){
    int t, n, shelves;
    vector <int> results;
    cin>>t;
    f(i,0,t){
        cin>>n;
        if(n%5==0){
            shelves=n/5;
        }else{
            shelves=(n/5)+1;
        }
        results.push_back(shelves);
    }
    f(i,0,t){
        cout<<results[i]<<endl;
    }
    return 0;
}