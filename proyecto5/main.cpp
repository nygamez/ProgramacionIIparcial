#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;
int i,j,Lista[50],aux;

void Ingresar(int Lista[])
{
   for(i=1;i<=5;i++)
    {
        cout<<"Numero "<<i<<" :";
        cin>>Lista[i];
    }

}

void Ordenar(int &i, int &j, int Lista[], int &aux)
{
    for(i=1;i<=5-1;i++)
    {
        for(j=1;j<=5-1;j++)
        {
            if(Lista[j]>Lista[j+1])
            {
            aux=Lista[j];
            Lista[j]=Lista[j+1];
            Lista[j+1]=aux;
            }
        }
    }
}

void Presentar(int &i, int Lista[])
{
     cout << "Ascendente: ";
    for(i=1;i<=5;i++)
    {
    cout<<Lista[i]<<"\n";
    }
    cout << "Descendente: ";
    for(i=5;i>=1;i--)
    {
    cout<<Lista[i]<<"\n";
    }
    getch();
}

int main()
{

Ingresar(Lista);
Ordenar(i, j, Lista, aux);
Presentar(i, Lista);

return 0;
}
