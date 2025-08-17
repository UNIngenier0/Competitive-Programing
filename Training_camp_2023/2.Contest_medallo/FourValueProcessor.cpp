/*
 * Problem F: Four Value Processor
 * 
 * Process four input values and perform calculations
 * based on the given parameters.
 * 
 * Solution: Read four values and calculate result
 */

#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    // Process the four values and output result
    int result = a + b - c * d;
    cout << result << endl;
    
    return 0;
}
