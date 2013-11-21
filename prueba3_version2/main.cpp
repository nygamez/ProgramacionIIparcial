#include <iostream>

using namespace std;
int vNumero;
int Cifras;


int Ingresar ()
{
    int Numero;
    do
    {
        cout<<"Ingrese un Numero...:";
        cin>>Numero;
    }while ((Numero%2)or (Numero%5));
    return Numero;
}

int calcular (int Numero)
{
    int Cifras;
    while (Numero>0)
    {
        Cifras= Numero%10;
        Numero=Numero/10;
        Cifras++;
    }
    return Cifras;
}


int main()
{
    for (int i=0;i<5;i++)
    { vNumero=Ingresar();
    ncifras= calcular(vNumero);
  cout<<"numero de cifras..."<< Cifras <<"\n";
    }
    return 0;
}
