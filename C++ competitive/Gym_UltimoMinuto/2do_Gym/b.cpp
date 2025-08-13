#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)

int main (){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i: a) cin >> i;
    sort(a.begin(),a.end());
    reverse(a.begin(), a.end());
    ll sum = a[0]+1;
    ll p = a[0];
    for(int i = 1; i < n; i ++){
        p = p*a[i];
        sum += p;
    }
    cout << sum;
    return 0;
}