/*
 * Problem C: Number Processor
 * 
 * Read n numbers and process them according to specific rules.
 * Calculate and output results based on the input numbers.
 * 
 * Solution: Store numbers in vector and process them
 */

#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)

int main(){
    int n, num;
    cin >> n;
    vector<int> numeros;
    
    f(i,0,n){
        cin >> num;
        numeros.push_back(num);
    }
    
    // Process the numbers and output result
    int sum = 0;
    f(i,0,n){
        sum += numeros[i];
    }
    cout << sum << endl;
    
    return 0;
}