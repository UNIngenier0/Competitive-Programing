#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
int main(){
    int t, n, i, j, s=0, p, winner_points=0, winner_penalty=1501;
    string name, winner;
    vector<string> winners;
    cout<<"Test cases: " <<endl;
    cin>>t;
    f(i,0,t){
        cin>>n;
        f(j,0,n){
            cin>>name>>s>>p;
            if(s>winner_points){
                winner=name;
                winner_points=s;
                winner_penalty=p;
            }else if (s==winner_points){
                if (p<winner_penalty){
                    winner=name;
                    winner_points=s;
                    winner_penalty=p;
                }
            }
        }
        winners.push_back(winner);
        winner_points=0;
        winner_penalty=1501;
    }
    f(i,0,n){
        cout<<winners[i]<<endl;
    }
    return 0;
}