/*
 * Problem I: Number Processing
 * 
 * Process a number n and perform mathematical operations.
 * Calculate and output the result based on the input.
 * 
 * Solution: Read number and perform required calculations
 */

#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)

int main (){
    int n; cin >> n; // Fixed: added missing '>>' operator
    
    // Process the number and output result
    if(n % 2 == 0){
        cout << n/2 << endl;
    } else {
        cout << n*2 << endl;
    }
    
    return 0;
}