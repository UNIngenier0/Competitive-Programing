#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for (int i =a; i<b; i++)
#define pb push_back

using pii=pair<int,int>;
using vi=vector<int>;

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

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
        f (i,0,days){
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