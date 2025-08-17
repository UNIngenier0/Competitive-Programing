/*
 * Clase 2: Sieve of Eratosthenes (Criba) Implementation
 * 
 * This program implements the complete Sieve of Eratosthenes
 * algorithm to find prime numbers up to a given limit.
 * 
 * Algorithm: Sieve of Eratosthenes for prime number generation
 * Purpose: Educational implementation for learning prime number algorithms
 */

//CRIBA
#include <bits/stdc++.h>
#include <string>
#include <typeinfo>
using namespace std;

int main(){
    int i, a, n, cases;
    cin >> cases;
    
    for (i = 0; i < cases; i++){
        cin >> n; // Read the limit for prime generation
        
        // Create boolean array to mark prime numbers
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;
        
        // Sieve of Eratosthenes algorithm
        for(a = 2; a * a <= n; a++){
            if(isPrime[a]){
                // Mark all multiples of a as non-prime
                for(int j = a * a; j <= n; j += a){
                    isPrime[j] = false;
                }
            }
        }
        
        // Count and output prime numbers
        int primeCount = 0;
        for(a = 2; a <= n; a++){
            if(isPrime[a]){
                primeCount++;
            }
        }
        
        cout << "Prime numbers up to " << n << ": " << primeCount << endl;
    }

    return 0;
}