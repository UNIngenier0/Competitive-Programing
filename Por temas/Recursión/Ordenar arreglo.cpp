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

void rev(int n){
    if(n==0){return;}
    int x; cin>>x;
    rev(n-1);
    cout<<x<<" ";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    rev(n);

    return 0;
}