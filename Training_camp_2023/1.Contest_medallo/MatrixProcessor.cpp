/*
 * Problem E: Matrix Processing
 * 
 * Process a matrix of size m x m for each test case.
 * Calculate and output results based on matrix operations.
 * 
 * Solution: Read matrix elements and perform required calculations
 */

#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for (int i =a; i<b; i++)
#define pb push_back

using pii=pair<int,int>;
using vi=vector<int>;

int main (){
    
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n; cin>>n;
    f(i,0,n){
        int m; cin>>m;
        vector<vector<int>> matrix(m, vector<int>(m));
        
        // Read matrix elements
        f(j,0,m){
            f(k,0,m){
                cin >> matrix[j][k];
            }
        }
        
        // Process matrix and output result
        int sum = 0;
        f(j,0,m){
            sum += matrix[j][j]; // Sum diagonal elements
        }
        cout << sum << endl;
    }
    
    return 0;
}