#include <iostream>
#include <iomanip>

using namespace  std;


void imprimir(int  pM[][6], int filas, int col);
int hallaMayor(int matricita[][6], int filas, int col);


int main()
{  int  mat[8][6];

 //--- llenamos la matriz con valores al azar 1 al 100
    srand(time(nullptr));
    for(int f=0; f<8; f++)
        for(int c=0; c<6;c++)
            mat[f][c]= rand() % 100 + 1;
    imprimir(mat, 8, 6);
    int elMayor = hallaMayor(mat,8,6);
    cout<< "\n\nEl mayor elemento de toda la matriz es : " << elMayor;

    return 0;
}

int hallaMayor(int matricita[][6], int filas, int col)
{
    int miMayor=matricita[0][0];
    for(int f=0; f<filas; f++)
        for(int c=0; c<col; c++)
            if(matricita[f][c]>miMayor)
                miMayor = matricita[f][c];
    return miMayor;
}


void imprimir(int  pM[][6], int filas, int col)
{
    cout << "\n";
    for(int f=0; f<filas; f++) {
        for (int c = 0; c < col; c++)
            cout << setw(6) << pM[f][c];
        cout << "\n";
    }
}