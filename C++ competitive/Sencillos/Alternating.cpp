/*
 * Problem: Alternating Pattern
 * 
 * Generate an alternating pattern of length n with k different elements.
 * Pattern alternates between two values in sequence.
 * 
 * Solution: Create alternating sequence using modulo operation
 * Output: Alternating pattern of 0s and 1s
 */

#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)

int main(){
    int t, n, k;
    cin >> t;
    
    f(i,0,t){
        cin >> n >> k;
        
        // Generate alternating pattern
        for(int j = 0; j < n; j++){
            cout << (j % k) << " ";
        }
        cout << endl;
    }
    
    return 0;
}