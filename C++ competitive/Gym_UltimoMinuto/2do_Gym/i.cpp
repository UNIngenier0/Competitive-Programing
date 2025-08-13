#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)

bool palindrome(long long n){
    string a= to_string(n);
    stack<char> s;
    f(i,0,a.size()/2){
        s.push(a[i]); 
    }
    f(i,(a.size()+1)/2,a.size()){
        if(a[i]!=s.top()){
            return false;
        }
        s.pop();
    }
    if(a.size()>1){
        return true;
    }else{
        return false;
    }
}

bool lucky(long long n){
    string a= to_string(n);
    for(char e:a){
        if(e!='4' and e!='7') return false;
    }
    return true;
}

int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;cin>>n>>k;
    vector<long long>v;

    f(i,0,n){
        int num;cin>>num;
        v.push_back(num);
    }
    string ans="Yes";
    f(i,0,n){
        int friends=0;
        if(palindrome(v[i])){
            int qwe =0;
            f(j,i+1,k+i+1){
                qwe++;
                if(palindrome(v[j]) or palindrome(v[i-qwe])) {
                    friends=1;
                    break;
                }
            }
            if(friends==0) {
                ans="No";
                break;
            }
        }else{
            int qwe =0;
            f(j,i+1,k+i+1){
                qwe++;
                if(lucky(v[j]) or lucky(v[i-qwe])) {
                    friends=1;
                    break;
                }
            }
            if(friends==0) {
                ans="No";
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}