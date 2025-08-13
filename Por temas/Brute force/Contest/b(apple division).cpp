#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

//{}  []
// PRBLEMA NP NO POLINOMIAL

/*
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    vi vec;
    int sum=0;
    f(i,0,n){
        int m; cin>>m;
        vec.pb(m);
        sum+=m;
    }
    sum=sum/2;
    sort(vec.begin() , vec.end());

    //1 2 3 4 7
    int gra=0;
    int grb=0;
    for ( int i = n-1;i>=0 ;i--){
        if(vec[i]<=sum){
            sum-=vec[i];
            gra+=vec[i];
        }else{
            grb+=vec[i];
        }
    }
    cout<<abs(gra-grb)<<endl;

    return 0;
}
*/

//SOLUCION SEGUN DANIEL Y OSCAR


vi A;
vector<bool> included;

int subset(int k){
    if(k==included.size()){
        f(i,0,n){
            if(included[i]==1){
                cout<<A[i]<<endl;
            }
        }
    }else{
        included[k]=1;
        subset(k+1);
        included[k]=0;
        subset(k+1);
    }
}

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n; cin>>n;
    f(i,0,n){
        cin>>A[i];
        included[i]=0;
    }

    return 0;
}