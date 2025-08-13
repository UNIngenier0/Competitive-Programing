#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
int main (){
    int t,count=0;
    string s;
    cin>>t;
    vector<int> ans;
    f(i,0,t){
        cin>>s;
        char c, m='_';
        for(char c : s){
            if(c==m and c=='_'){
                count ++;
            }
            m=c;
            if(s.size()==1 and s[0]=='^'){
                count=1;
            }
        }
        if(s[(s.size())-1]=='_'){
                count ++;
        }    
        ans.push_back(count);
        count=0;
    }
    f(i,0,t){
        cout<<ans[i]<<endl;
    }

    return 0;
}