#include <iostream>

using namespace std;
const int tam=4;
int num[tam];
int mayor, menor, promedio, pares;

void ingreso(int num[])
{
    for(int i=0;i<=tam;i++)
    {
        cout<<"ingresar un numero["<<i<<"]..:";
        cin>>num[i];
    }
}

int promedioArreglo(int num[])
{ int suma=0;
for(int i=0;i<tam;i++)
{
    suma+=num[i];
}
return suma/tam;
}

int mayorA(int num[])
{ int maxi=num[0];
for(int i=0;i<tam;i++)
{
    if (num[i]>maxi)
    {
        maxi=num[i];
    }
}
return maxi;
}

int menorArreglo (int num[])
{ int menorx=num[0];
for(int i=0;i<=tam;i++)
{
    if (num[i]<menorx)
    {
        menorx=num[i];
    }
}
return menorx;
}

int conpares (int num[])
{int cpar=0;
    for(int i=0;i<=tam;i++)
    {
        if (num[i]%2==0)
        {
            cpar++;
        }
    }
return cpar;
}
int main()
{
    ingreso(num);
    promedio=promedioArreglo(num);
    mayorA(num);
    menorArreglo(num);
    conpares(num);
    cout<<"Promedio del arreglo...:"<<promedio<<"\n";
    cout<<"El numero mayor es...:"<<mayor<<"\n";
     cout<<"El numero menor es...:"<<menor<<"\n";
    cout<<"numeros pares...:"<<pares<<"\n";
    return 0;
}
