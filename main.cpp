#include <iostream>
#include <math.h>
#include "binario.h"

using namespace std;
void ver(int a[],int tam){
    for(int i = 0; i < tam; i++){
        cout << a[i];
    }
    cout << endl;
}
int main(){
    int a , b , c , d ,e ;
    cout << "Ingrese el tamañno del bit: "; cin >> a;
    cout<< "Numero Binario 1: "; cin >> b >> d;
    cout<< "Numero Binario 1: "; cin >> c >> e;
    binario M(a);
    //M.addBin(b,c);
    cout << M.binToDec(b)<<endl;
    cout << M.binToDec(c)<<endl;
    M.decToBin(d);
    cout << endl;
    M.decToBin(e);
    //ver(M.changeSing(M.bitwise(M.decToBin(b))),a);
    return 0;
}
