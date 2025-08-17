/*
 * Problem: Long Words Abbreviation
 * 
 * Given n words, abbreviate words longer than 10 characters.
 * Abbreviation format: first_letter + (length-2) + last_letter
 * 
 * Example: "internationalization" -> "i18n"
 * Solution: Check length, if >10 create abbreviation, else keep original
 */

#include <bits/stdc++.h>
#include <string>
#include <typeinfo>
using namespace std;
int main (){

    int num_pal, i; cin>>num_pal;
    string palabra, solucion;
    string arreglo[num_pal];
    vector <string> rta;
    for(i=0;i<num_pal;i++){
        cin>>palabra;
        if(palabra.length()>10){
            string solucion = palabra[0]+ to_string(palabra.length()-2) + palabra[palabra.length()-1] ;
            arreglo[i]=solucion;
        }else{
            arreglo[i]=palabra;
            solucion=palabra;
            rta.push_back(solucion);
        }
    }
    for(i=0;i<num_pal;i++){
        cout<<arreglo[i]<<endl;
    }

    return 0;
}