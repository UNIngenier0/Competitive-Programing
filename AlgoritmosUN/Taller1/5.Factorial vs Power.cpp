#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef map <int,int> mii;

//#define a.all() a.begin(),a.end()


/*    INTENTO 1
__int128 fact(__int128 a){
    if(a==0) return 1;
    return a*fact(a-1);
}

__int128 pot(__int128 a,__int128 n){
    __int128 ans=1;
    while(n>0){
        if(n%2==1){
            ans*=a;
        }
        a*=a;
        n/=2;
    }
    return ans;
}


double log_fact(int n) {
    if (n == 0 || n == 1) return 0;
    double log_factorial = 0;
    for (int i = 2; i <= n; ++i) {
        log_factorial += log(i);
    }
    return log_factorial;
}

double log_pow(int a, int n) {
    return n * log(a);
}


int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int a; cin>>a;
        int n=1;
        while(true){
            if(log_fact(n)>log_pow(a,n)) {
                cout<<n<<endl;
                break;
            }
            n++;
        }
    }
    return 0 ;
}
*/

//FUNCIONA PERFECTO PERO NO SE COMO MONDAAAAAAAAAAAAAAAAAAAAAAA
//https://github.com/ashish1294/BugFreeCodes/blob/master/Spoj/Factorial%20vs%20Power.c


#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef map <int,int> mii;

//#define a.all() a.begin(),a.end()


int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    double e = 2.7182818284590;
    long double sum[3000000];
    ll j;
    sum[1]=0;
    f(i,2,3000000){
        sum[i]=sum[i-1]+logl(i);
    }
    int t;cin>>t;
    while(t--){
        int a;cin>>a;
        j=pow(e,(logl(a)+1));
        double ss = sum[j]/log(a);
        while(ss>j){
            j--;
            ss = sum[j]/log(a);
        }
        cout<<j+1<<endl;
    }
    return 0;
}