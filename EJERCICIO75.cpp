#include <iostream>
using namespace std;
int main(){
    int base=0, potencia=0, resultado=1;
    cout << "BIENVENIDOS A MI PROGRAMA (:" << endl;
    cout << "POR FAVOR DIGITA LA BASE DE LA POTENCIA" << endl;
    cin >> base;
    cout << "POR FAVOR DIGITA LA POTENCIA" << endl;
    cin >> potencia;
    if (potencia==0 && base != 0)
    {
        cout << "EL RESULTADO ES: 1";
    }
    else  if (base ==0 && potencia ==0)
        {
            cout << "EL RESULTADO ES INDEFINIDO";
        }
    else if (base ==0)
    {
        cout << "EL RESULTADO ES: 0";
    }
    
    else
    {
     for (int i = 0; i < potencia; i++)
     {
        resultado *= base;  
     }
      cout << "EL RESULTADO DE " << base << " ELEVADO A LA POTENCIA "<< potencia << " ES IGUAL A " << resultado;
    }
   return 0;


}