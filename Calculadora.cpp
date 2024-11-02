#include <iostream>

using namespace std;

int main()
{
float num1,num2,op,sum,mul;

cout<<"Operación a realizar: 1)Sumar 2)Restar 3) Multiplicar: ";
cin>>op;
cout<<"Ingrese un número: ";
cin>>num1;
cout<<"Ingrese un segundo número: ";
cin>>num2;

switch(op){
    case 1:
        sum=num1+num2;
        cout<<"La suma es: "<<sum;
        break;
    case 2:
        sum=num1-num2;
        cout<<"La resta es: "<<sum;
        break;
    case 3:
        mul=num1*num2;
        cout<<"La multiplicación es: "<<mul;
        break;
    default:
        cout<<"Operación no reconocida";
        break;
}
return 0;
}