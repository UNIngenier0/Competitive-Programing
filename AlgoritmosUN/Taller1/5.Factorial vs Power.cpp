/*
 * Problem: Factorial vs Power
 * 
 * Given a number a, find the smallest n where n! > a^n.
 * 
 * Solution: Use logarithmic approach to avoid overflow:
 * log(n!) = log(1) + log(2) + ... + log(n)
 * log(a^n) = n * log(a)
 * 
 * Precompute log factorials and find the smallest n where log(n!) > n*log(a)
 * 
 * Note: The commented code shows different approaches tried during development.
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
    
    double e = 2.7182818284590;
    long double sum[3000000];
    ll j;
    sum[1]=0;
    f(i,2,3000000){
        sum[i]=sum[i-1]+logl(i);
    }
    int t;cin>>t;
    while(t--){
        int a;cin>>a;
        j=pow(e,(logl(a)+1));
        double ss = sum[j]/log(a);
        while(ss>j){
            j--;
            ss = sum[j]/log(a);
        }
        cout<<j+1<<endl;
    }
    return 0;
}