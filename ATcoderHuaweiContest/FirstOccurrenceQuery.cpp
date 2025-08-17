/*
 * Problem B: Find First Occurrence of A or B
 * 
 * Given a vector of integers and queries (a,b), find the first occurrence
 * of either value a or b in the vector and output it.
 * 
 * Solution: Preprocess vector with hash map for O(1) lookups, then
 * handle queries efficiently by finding the minimum position.
 * 
 * Optimized: Uses hash map instead of linear search for each query.
 */

#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back
#define all(x) v.begin(), v.end()
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vc vector<char>
#define vvc vector<vector<char>>

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef map <int,int> mii;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    vi v;
    int n, a;
    cin >> n; // Fixed: Initialize n before using it
    
    f(i,0,n){
        cin>>a;
        v.pb(a);
    }
    
    // Preprocess: Create hash map for O(1) lookups
    map<int, int> firstOccurrence;
    f(i,0,n){
        if(firstOccurrence.find(v[i]) == firstOccurrence.end()){
            firstOccurrence[v[i]] = i;
        }
    }
    
    int q; cin>>q;
    f(i,0,q){
        int a,b; cin>>a>>b;
        
        // Find first occurrence of either a or b
        int posA = (firstOccurrence.find(a) != firstOccurrence.end()) ? firstOccurrence[a] : INT_MAX;
        int posB = (firstOccurrence.find(b) != firstOccurrence.end()) ? firstOccurrence[b] : INT_MAX;
        
        if(posA < posB){
            cout << a << endl;
        } else if(posB < INT_MAX){
            cout << b << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}