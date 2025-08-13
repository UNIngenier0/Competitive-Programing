#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef map <int,int> mii;

//#define a.all() a.begin(),a.end()

void addsolution(vector<vector<int>> &ans , vector<vector<int>>&board ,int n){
    
    vector<int> temp;
    for(int i =0; i<n;i++){
        for(int j=0;j<n;j++){
            temp.pb(board[i][j]);
        }
    }
    ans.pb(temp);
}

bool isSafe(int row, int col, vector<vector<int>> &board , int n){
    int x=row;
    int y = col;
    
    //check for same row
    while(y>=0){
        if(board[x][y]==1){
            return false;
        }
        y--;
    }
    
    x=row;
    y=col;
    //Check for diagonals
    
    while(x>=0 && y>=0){
        if(board[x][y]==1)return false;
        y--;
        x--;
    }
    
    x=row;
    y=col;
    //Check for diagonals
    
    while(x<n &&  y>=0){
        if(board[x][y]==1)return false;
        y--;
        x++;
    }
    return true;
}

void solve(int col, vector<vector<int>> &ans , vector<vector<int>>&board , int n){
    //base case
    if(col==n){
        addsolution(ans,board,n);
        return;
    }
    
    //Solve 1 case and rest Recursion will take care
    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            //if placing queen is safe
            board[row][col]=1;
            solve(col+1,ans,board,n);
            //backtrack
            board[row][col]=0;
        }
    }
}

vector<vector<int>> nQueens(int n){
    vector<vector<int>> board (n, vector<int>(n,0));
    vector<vector<int>> ans;
    solve(0,ans,board,n);
    return ans; 
}

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n=4;
    for(auto x:nQueens(n)){
        int c=0;
        for(auto a:x){
            cout<<a;
            c++;
            if(c%n==0)cout<<endl;
        }
        cout<<endl;
    }

    return 0 ;
}