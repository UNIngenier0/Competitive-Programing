/*
 * Problem: Next Round Qualification
 * 
 * Given n participants and their scores, count how many advance
 * to the next round. A participant advances if their score is
 * >= the score of the k-th place participant.
 * 
 * Solution: Count all participants with score >= a[k-1]
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int participants, place, i, a[1000], counter=0;
    cin>>participants>>place;
    for(i=0;i<participants;i++){
        cin>>a[i];
    }
    for(i=0;i<participants;i++){
        if(a[i]>=a[place-1]){
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}