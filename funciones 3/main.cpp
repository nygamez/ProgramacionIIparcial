#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*
Ingresar la base y el exponente usando un procedimiento.
luego calcular la base y el exponente usando una funcion.
luego presuntar si desea continuar usando una funcion para devolveer
una respuesta s o n validada.
*/

char respuesta()
{
    char resp;
    do
    {
        cout<<"Desea Continuar...:";
        cin.get(resp);
    }while((resp!='s')and (resp!='n'));
    return resp;
}

void ingreso(int &base,int &expo)
{
    cout<<"Ingrese la base...";
    cin>>base;
    cout<<"Ingrese el exponente...";
    cin>>expo;
}

int potencia (int base, int expo)
{
    int pot=1;
    for(int i=0;i<expo;i++)
    {
        pot*=base;
    }
    return pot;
}



int main()
{ char resp;
int base, expo,poten;
_flushall();
do
{
    ingreso (base,expo);
    poten= potencia(base,expo);
    _flushall();
    cout<<"potencia es:"<<poten<<"\n";
    resp=respuesta();
}while (resp!='n');

    return 0;
}
