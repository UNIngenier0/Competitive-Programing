/*
 * Problem: New Year and Hurry
 * 
 * Given n problems and k minutes before New Year, calculate how many
 * problems can be solved. Each problem i takes i*5 minutes.
 * 
 * Solution: Iterate through problems 1 to n, subtracting time for each
 * problem from the available time (240-k minutes). Stop when time runs out.
 */

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

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,prob=0; cin>>n>>k;
    int mins=240-k;
    f(i,1,n+1){
         mins-=(i*5);
         if(mins>=0){
              prob++;
         }else{
              break;
         }
    }
    cout<<prob<<endl;
    
    
    return 0 ;
}