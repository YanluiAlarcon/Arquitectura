#include "binario.h"
#include <iostream>
#include <math.h>

using namespace std;

binario::binario(const binario&){

}

binario::binario(int a){
    tam = a;
    listBin1[a]={};
    for(int i = 0 ; i < a ; ++i)
        listBin1[i]= 0;
}

int* binario::decToBin(int dec){
    if (dec < 1){
        dec = (-1)*dec;
        listBin1[0] = 1;
    }
    int i = 1;
    while(dec > 1){
        listBin1[tam-i] = dec % 2;
        dec /= 2 ;
        ++i;
    }
    listBin1[tam-i] = dec;
    for(int i = 0; i < tam ; i++)
        cout << listBin1[i];
    return listBin1;
}

int binario::binToDec(int bin){
    int count = 0 , i = 0;
    if (pow(10,tam-1) > bin){
        while(bin >= 1){
            if( (bin % 10) == 1)
                count += pow(2,i);
            bin /= 10 ;
            ++i;
        }
        if (bin == 1)
            count += (-1)*(pow(2,i));
    }
    else{
        while(bin > 1){
            if( (bin % 10) == 1)
                count += pow(2,i);
            bin /= 10 ;
            ++i;
        }
        if (bin == 1)
            count += (-1)*(pow(2,i));
    }
    return count;
}

int* binario::bitwise(int bin[]){
    for(int i = 0 ; i < tam ; i++){
        if (bin[i] == 0)
            bin[i] = 1;
        else
            bin[i] = 0;
    }
    return bin;
}

int* binario::changeSing(int listBin[]){
    int carry = 1;
    listBin1[tam]={};
    for(int i = tam-1; i >= 0 ; i--){
        if((listBin[i] + carry) == 0){
            listBin1[i] = 0;
            carry = 0;
        }
        else if((listBin[i] + carry) == 1){
            listBin1[i] = 1;
            carry = 0;
        }
        else if((listBin[i] + carry) == 2){
            listBin1[i] = 0;
            carry = 1;
        }
    }
    return listBin1;
}

int* binario::addBin(int a, int b){
    int *listBin1 = decToBin(binToDec(a));
    int *listBin2 = decToBin(binToDec(b));
    int listBinRes[tam];
    int carry = 1;
/*
    for(int i = tam-1 ; i <= 0; i--)
    {
        if(listBin1[i] + listBin2[i] + carry == 0)
        {
            listBinRes[i] = 0;
            carry = 0;
        }

        if(listBin1[i] + listBin2[i] + carry == 1)
        {
            listBinRes[i] = 0;
            carry = 0;
        }

        if(listBin1[i] + listBin2[i] + carry == 2)
        {
            listBinRes[i] = 0;
            carry = 1;
        }

        if(listBin1[i] + listBin2[i] + carry > 2)
        {
            listBinRes[i] = 1;
            carry = 1;
        }
    }
    for(int i = 0; i < tam; i++){
        cout << listBinRes[i];
    }
    cout << endl;*/
    return listBinRes;
}

int* binario::subtractBin(int , int ){

}

int* binario::multiply(int , int){

}
