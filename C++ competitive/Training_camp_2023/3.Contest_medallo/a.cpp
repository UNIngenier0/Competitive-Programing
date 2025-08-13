#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)

bool comp_b(vector<int> arr1, vector<int> arr2){
    if (arr1[0]==arr2[0]){
        return arr1[1] < arr2[1];
    } else {
        return arr1[0] > arr2[0];
    }
}

int main(){
    int teams, place;cin>>teams>>place;
    vector <vector <int>> prob;
    f(i,0,teams){
        int problems,penalty;cin>>problems>>penalty;
        vector<int> cur_score = {problems,penalty};

        prob.push_back(cur_score);
        sort(prob.begin(), prob.end(), comp_b);
    }
    int contador=0;
    f(i,0,teams){
        vector <int> valor={prob[place-1][0],prob[place-1][1]};
        if(valor==prob[i]){
            contador++;
        }
    }
    cout<<contador;
    return 0;
}