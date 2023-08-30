#include <iostream>
#include <cmath>
using namespace std;
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);
int potencia(int a, int b);
int main(){
int a,b;
cout << "DIGITA DOS NUMEROS"<< endl;
cin >> a;
cout << endl;
cin >> b;
cout << "SUMA :" << suma(a,b)<< endl;
cout << "RESTA :" << resta(a, b)<< endl;
cout << "MULTIPLICACION :" << multiplicacion(a, b)<< endl;
if (b !=0)
{
   cout << "DIVISION :" << division(a, b)<< endl;
}
else {
    cout << "NO SE PUEDE DIVIDIR ENTRE 0" << endl;
}
cout << "POTENCIA :" << potencia(a, b)<< endl;
return 0;
}
int suma(int a, int b){
    return a+b;
}
int resta(int a, int b){
    return a-b;
}
int multiplicacion(int a, int b){ 
    return a*b;
}
int division(int a, int b){
    return a/b;
}
int potencia(int a, int b){
    return pow(a,b);
}