/*
 * Problem 0: Palindrome Checker
 * 
 * This program checks if a given string is a palindrome.
 * A palindrome reads the same forwards and backwards.
 * 
 * Algorithm: Compare characters from both ends moving towards center
 * Time Complexity: O(n/2) where n is string length
 * Space Complexity: O(1) - no extra space needed
 * 
 * Example: "racecar" -> YES, "hello" -> NO
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    string palabra; 
    cout<<"Ponga la palabra papito"<<endl; cin>>palabra;
    int a = palabra.length()-1 , i, indice = palabra.length();
    
    if ((indice)%2!=0){
        indice=(indice/2)+1;
    }else{
        indice=indice/2;
    }
    
    bool palindroma;
    for (i=0;i<indice;i++){
        if(palabra[i]==palabra[a-i]){
            palindroma=true;
        }else{
            palindroma=false;
            break;
        }
    }
    
    if (palindroma==true) cout<<"SI"; else cout<<"NO";
    return 0;
}