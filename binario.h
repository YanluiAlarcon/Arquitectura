#ifndef BINARIO_H
#define BINARIO_H


class binario
{
private:
    int tam;
    int listBin1[],listBin2[];
public:
    binario(const binario&);
    binario(int x);
    int *decToBin(int);
    int binToDec(int);
    int *bitwise(int[]);
    int *addBin(int, int);
    int *subtractBin(int,int);
    int *changeSing(int[]);
    int *multiply(int,int);
};

#endif // BINARIO_H
