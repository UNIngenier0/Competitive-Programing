#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
int main(){   
    int a,matrix [3][3]={{1,1,1},{1,1,1},{1,1,1}},swit[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a;
            swit[i][j]=a;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if((swit[i][j]%2)!=0){
                f(k,-1,2){
                    if(0<=i+k and i+k<3){if(matrix[i+k][j]==1){matrix[i+k][j]=0;}else{matrix[i+k][j]=1;};}
                    if(0<=j+k and j+k<3 and k!=0){if(matrix[i][j+k]==1){matrix[i][j+k]=0;}else{matrix[i][j+k]=1;};}
                }
            }
            
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    return 0;
}