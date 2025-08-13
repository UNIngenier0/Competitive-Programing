#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

//{}  []
// TIENE COMPLEJIDAD O( fibonacci(n) )
int fib(int n ){
    if( n==0)return 0;
    if(n==1)return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    cout<<fib(n)<<endl;
    
    return 0;
}