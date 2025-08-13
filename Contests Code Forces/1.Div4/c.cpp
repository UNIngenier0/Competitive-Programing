#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
#define a.all() a.begin(),a.end()

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;cin>>t;
    f(i,0,t){
        int nums;cin>>nums;
        int ans=0;
        for(int j=1 ; j<nums+1 ; j++){
            int num=j;
            if(j>=10){ 
                int suma=0;
                while(num>0){
                    suma=suma + (num%10);
                    num=num/10;
                }
                ans+=suma;
            }else{
                ans+=j;
            }
        }
        
        cout<<ans<<endl;
    }

    return 0 ;
}