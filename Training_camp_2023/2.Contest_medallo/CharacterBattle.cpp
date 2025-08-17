/*
 * Problem I: Character Battle
 * 
 * Determine the winner between two characters based on
 * mathematical comparison of their parameters.
 * 
 * Solution: Compare n-(m*k) with 0 to determine winner
 */

#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    if(n-(m*k)>=0){cout<<"Iron fist Ketil";}else{cout<<"King Canute";}
    return 0;}