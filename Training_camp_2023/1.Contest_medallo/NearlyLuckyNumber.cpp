/*
 * Problem G: Nearly Lucky Number
 * 
 * Check if a number is nearly lucky by counting how many
 * of its digits are lucky digits (4 or 7).
 * 
 * Solution: Count lucky digits, check if count equals a lucky digit
 */

#include <iostream>
using namespace std;

bool isNearlyLucky(long long n) {
    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            count++;
        }
        n /= 10;
    }
    
    int luckyDigits[] = {4, 7};
    int luckyCount = sizeof(luckyDigits) / sizeof(luckyDigits[0]);
    
    for (int i = 0; i < luckyCount; i++) {
        if (count == luckyDigits[i]) {
            return true;
        }
    }
    
    return false;
}

int main() {
    long long n;
    cin >> n;
    
    if (isNearlyLucky(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}