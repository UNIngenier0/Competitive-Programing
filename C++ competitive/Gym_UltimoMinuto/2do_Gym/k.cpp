#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)

class Nodo {
public:
    int valor;
    Nodo* izquierda;
    Nodo* derecha;

    Nodo(int val) {
        valor = val;
        izquierda = nullptr;
        derecha = nullptr;
    }
};

int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    f(i,0,n-1){
        int parent;cin>>parent;
        int son;cin>>son;
        
    }

    return 0;
}