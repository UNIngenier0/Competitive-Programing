#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)

int memo[1000];
int dp[1000];

int factorial(int x){
    if(memo[x]){
        return dp[x];
    } else {
        if(x==0){
            return 1;
        }else{
            dp[x] = (factorial(x-1)*x)%7901;
            memo[x] = 1;
            return dp[x];
        }
    }
}
int main (){
    int tests,arr,ar,cont=1;
    vector<int>bebesita;
    map<int,int> secreto;
    cin>>tests;

    f(i,0,tests){
        cin>>arr;
        f(j,0,arr){
            cin>>ar;
            bebesita.push_back(ar);
        }
        for(int a:bebesita){
            secreto[a]++;
        }
        for(const auto& par:secreto){
            if (par.second!=1){
                cont*=(factorial(par.second));
                cont=cont%7901;
            }
        }
        cout<<cont%7901<<endl;
        bebesita.clear();
        secreto.clear();
        cont=1;
    }
    return 0;
}