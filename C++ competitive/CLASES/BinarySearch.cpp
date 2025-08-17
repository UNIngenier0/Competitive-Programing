/*
 * Clase 1: Binary Search Implementation
 * 
 * This program demonstrates binary search algorithm on a sorted vector
 * of prime numbers. It finds the position of a given value in the vector.
 * 
 * Algorithm: Binary search with O(log n) time complexity
 * Data Structure: Sorted vector of prime numbers
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    //I0;

    vector<int> v = {1,3,5,7,9,11,13,17,19,23,29,31,37,41,43,47,53,59};
    int value; cin>>value;
    int pos=1;
    int low = 0, high = v.size()-1;
    
    while(high >= low){
        int mid = (high + low)/2;
        if (v[mid] == value){
            pos = mid;
            break;
        } else if(v[mid] < value) {
            low = mid + 1;
        } else if(v[mid] > value){
            high = mid - 1; 
        }
    }
    
    cout << pos << endl;
    return 0;
}