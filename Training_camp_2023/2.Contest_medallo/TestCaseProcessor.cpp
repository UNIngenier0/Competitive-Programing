/*
 * Problem J: Test Case Processor
 * 
 * Process multiple test cases and perform calculations
 * based on the input parameters.
 * 
 * Solution: Read test cases and process each one
 */

#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)

int main()
{
    int t;
    cin >> t;
    
    // Process each test case
    f(i,0,t){
        int n;
        cin >> n;
        cout << n * 2 << endl;
    }

    return 0;
}
