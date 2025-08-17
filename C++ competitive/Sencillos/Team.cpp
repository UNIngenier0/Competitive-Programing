/*
 * Problem: Team Problem Solving
 * 
 * Given n teams of 3 people, count how many teams have
 * at least 2 members who can solve a problem.
 * 
 * Solution: For each team, sum the three values and check if sum > 1
 * (meaning at least 2 people can solve the problem)
 */

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