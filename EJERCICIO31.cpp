#include <iostream>
using namespace std;
int main()
{
    int num1=0, num2=0, num3=0, num4=0;
    cout << "BIENVENIDO A MI PROGRAMA DE LAS TABLAS DE MULTIPLICAR" << endl ;
    cout << "POR FAVOR DIGITA  EL NUMERO DE LA TABLA DE MULTIPLICAR: " ;
    cin >> num1;
    cout << "AHORA DIGITA EL NUMERO DONDE QUIERES QUE INICIE LA TABLA: " ;
    cin >> num2;
    cout << "AHORA DIGITA EL NUMERO DONDE QUIERES QUE FINALICE LA TABLA: " ;
    cin >> num3;
    cout << "EL RESULTADO ES: " << endl;
    if (num2 < num3)
    {
         for (float i = num2; i <= num3; i++)
    {
        num4= num1* i;
        cout << num1 <<" x " << i<<" = " << num4 << endl;
    }
    }

     else if (num3 < num2)
    {
         for (float i = num2; i >= num3; i--)
    {  
        num4= num1*i;
        cout << num1 <<" x " << i <<" = " << num4 << endl;
    }
    }
    else 
    {
        num4= num1*num2;
        cout << num1 <<" x " << num2 <<" = " << num4 << endl;
    
    }
    
    
    

    return 0;
}