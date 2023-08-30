#include <iostream>
using namespace std;
int main ()
{
    double valor =0, valortotal=0, iva= 0;
    cout << "BIENVENIDO A MI PROGRAMA PARA CALCULAR EL IVA :)"<< endl;
    cout << "POR FAVOR DIGITA EL VALOR DEL ARTICULO SIN IVA ";
    cin >> valor; 
     iva = valor * .16 ;
    valortotal = valor + iva;
    cout << "EL VALOR DEL ARTICULO CON IVA ES DE: $" << valortotal ;
    return 0;
}