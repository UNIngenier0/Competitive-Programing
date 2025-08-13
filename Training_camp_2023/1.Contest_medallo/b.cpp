#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

//funcion que da un numero mayor 
int my_max(int a, int b){
    if (a>b){
        return a;
    } else {
        return b;
    }
}
int main()
{
    int cases;cin >> cases;
    f(i,0,cases){
        int days, ans = 0, unkw = 0,knw = 0;
        cin >> days;
        f (j,0,days){
            int cur_action;
            cin >> cur_action;
            if (cur_action==1){
                unkw += 1;
            } else {
                knw += unkw;
                unkw = 0;
            }
            ans = (knw!=0) ? my_max(ans, (unkw + (knw/2)+1)) : my_max(ans, unkw);
        }
        cout << ans << endl;
    }
    return 0;
}