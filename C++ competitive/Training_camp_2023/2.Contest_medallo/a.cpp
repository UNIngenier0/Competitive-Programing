#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)

int main()
{
    int houses,chores;
    cin >> houses>>chores;
    int cur_pos = 1,fut_pos = 1,time = 0;
    f(i,0,chores){
        cin >> fut_pos;
        time += ((fut_pos - cur_pos) + houses)%houses;
        cur_pos = fut_pos;
    }
    cout << time << endl;
    return 0;
}