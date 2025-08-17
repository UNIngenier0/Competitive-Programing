    #include <bits/stdc++.h>
    using namespace std;
    #define f(i,a,b) for (int i =a; i<b; i++)
    int main(){
        int n,m,d,num,ans=0;
        cin>>n>>m>>d;
        vector <int> numeros;
        f(i,0,n){
            f(j,0,m){
                cin>>num;
                numeros.push_back(num);
            }
        }
        sort(numeros.begin(),numeros.end());
        for(int num : numeros){
            if(((numeros[numeros.size()/2] - num) % d)!=0){
                ans=-1;
                break;
            }
        }
        if(ans==-1){
            cout<<ans;
        }else{
            for(int num : numeros){
                if(numeros[numeros.size()/2]>=num){
                    ans+=((numeros[numeros.size()/2]-num)/d);
                }else{
                    ans+=((num-(numeros[numeros.size()/2]))/d);
                    
                }
            }
            cout<<ans;
        }
        return 0;
    }
