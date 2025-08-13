#include <bits/stdc++.h>
using namespace std;
int main(){
    string palabra; 
    cout<<"Ponga la palabra papito"<<endl; cin>>palabra;
    int a = palabra.length()-1 , i, indice = palabra.length();
    if ((indice)%2!=0){
        indice=(indice/2)+1;
    }else{
        indice=indice/2;
    }
    bool palindroma;
    for (i=0;i<indice;i++){
        if(palabra[i]==palabra[a-i]){
            palindroma=true;
        }else{
            palindroma=false;
            break;
        }
    }
    if (palindroma==true) cout<<"SI"; else cout<<"NO";
    
}