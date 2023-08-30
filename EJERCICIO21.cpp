#include <iostream>
#include <string>

using namespace std;
 int main()
 {
    int num=0;
    string x="";
    cout << "BIENVENIDO A MI PROGRAMA SOBRE LOS DIAS DE LA SEMANA" << endl ;
    cout << "POR FAVOR DIGITA  UN NUMERO DE UN DIA DE LA SEMANA" << endl ;
    cin >> num;
    switch (num)
    {
    case 1:
         x="LUNES";
        cout << "EL DIA ES:" << x << endl ;
        break;
     case 2:
         x="MARTES";
        cout << "EL DIA ES:" << x << endl ;
        break;
         case 3:
         x="MIERCOLES";
        cout << "EL DIA ES:" << x << endl ;
        break;
     case 4:
         x="JUEVES";
        cout << "EL DIA ES:" << x << endl ;
        break;
         case 5:
         x="VIERNES";
        cout << "EL DIA ES:" << x << endl ;
        break;
     case 6:
         x="SABADO";
        cout << "EL DIA ES:" << x << endl ;
        break;
         case 7:
         x="DOMINGO";
        cout << "EL DIA ES:" << x << endl ;
        break;
    default:
       cout << "EL NUMERO QUE INGRESASTE NO CORRESPONDE A UN DIA DE LA SEMANA :(";
        break;
    }
   
 }