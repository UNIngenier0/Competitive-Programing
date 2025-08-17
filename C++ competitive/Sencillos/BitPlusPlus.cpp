/*
 * Problem: Bit++ Operations Counter
 * 
 * Count the final value after performing a series of
 * increment (++) or decrement (--) operations.
 * 
 * Solution: Parse each operation string and update counter
 * Operations: "++X", "X++", "--X", "X--"
 */

#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i=a;i<b;i++)

int main(){
    int lines;
    cin >> lines; // Initialize lines variable
    
    int x = 0; // Initialize counter
    string operation;
    
    f(i,0,lines){
        cin >> operation;
        if(operation == "++X" || operation == "X++"){
            x++;
        } else if(operation == "--X" || operation == "X--"){
            x--;
        }
    }
    
    cout << x << endl;
    return 0;
}