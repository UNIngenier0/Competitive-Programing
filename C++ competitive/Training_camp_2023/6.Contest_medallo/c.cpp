#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
typedef long long T;

struct pt{
    T x,y;
    pt operator - (const pt &o) const { return {x - o.x, y - o.y}; }

    bool operator == (pt b) { return x == b.x && y == b.y; }
    bool operator != (pt b) { return !(*this == b); }
    bool operator < (const pt &o) const{ return x < o.x || (x == o.x && y < o.y); }
    bool operator > (const pt &o) const { return y > o.y || (y == o.y && x > o.x); }
};

T cross(pt a, pt b){
    return a.x*b.y - a.y*b.x;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,y;
    map<int, pair<int,int>> eymor;
    f(i,0,3){
        cin>>x>>y;
        eymor[i+1].first=x;
        eymor[i+1].second=x;
    }
    cross(eymor[2],eymor[3]);
    
    double cross(vec a, vec b) { return a.x * b.y - a.y * b.x;}
    return 0 ;
}