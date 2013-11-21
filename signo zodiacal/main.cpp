#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
int dia;
int mes;
int cAcuario, cPiscis, cAries, cTauro, cGeminis, cCancer,cLeo,cVirgo,cLibra,cEscorpion,
cSagitario,cCapricornio;

void Ingresar (int &dia, int &mes)
{
    cout<<"ingrese el dia de Nacimiento...:";
    cin>>dia;
    do
    {
    cout<<"Ingrese mes de Nacimiento...:";
    cin>>mes;
    }while ((mes<1)or (mes>12));
}

void Signo (int dia, int mes,int &cAcuario, int &cPiscis,int &cAries,int &cTauro,int &cGeminis,int &cCancer,int &cLeo,int &cVirgo,int &cLibra,int &cEscorpion,int &cSagitario,int &cCapricornio)
{

if ((dia<=20)and (mes==1))
{
    cout<<"Capricornio"<<"\n";
    cCapricornio++;
}
if ((dia>20)and (mes==1))
{
    cout<<"Acuario"<<"\n";
    cAcuario++;
}
if ((dia<=18)and(mes==2))
{
    cout<<"Acuario"<<"\n";
    cAcuario++;
}

if ((dia>18)and(mes==2))
{
    cout<<"Piscis"<<"\n";
    cPiscis++;
}
if ((dia<=20)and(mes==3))
{
    cout<<"Piscis"<<"\n";
    cPiscis++;
}
if ((dia>20)and(mes==3))
{
     cout<<"Aries"<<"\n";
     cAries++;
}
if ((dia<=20)and(mes==4))
{
     cout<<"Aries"<<"\n";
     cAries++;
}
if ((dia>20)and(mes==4))
{
     cout<<"Tauro"<<"\n";
     cTauro++;
}
if ((dia<=21)and(mes==5))
{
     cout<<"Tauro"<<"\n";
     cTauro++;
}
if ((dia>21)and(mes==5))
{
    cout<<"Géminis"<<"\n";
    cGeminis++;
}
if ((dia<=21)and(mes==6))
{
    cout<<"Géminis"<<"\n";
    cGeminis++;
}
if ((dia>21)and(mes==6))
{
    cout<<"Cancer"<<"\n";
    cCancer++;
}
if ((dia<=22)and(mes==7))
{
    cout<<"Cancer"<<"\n";
    cCancer++;
}
if ((dia>22)and(mes==7))
{
    cout<<"Leo"<<"\n";
    cLeo++;
}
if ((dia<=23)and(mes==8))
{
    cout<<"Leo"<<"\n";
    cLeo++;
}
if ((dia>23)and(mes==8))
{
    cout<<"Virgo"<<"\n";
    cVirgo++;
}
if ((dia<=23)and(mes==9))
{
    cout<<"Virgo"<<"\n";
    cVirgo++;
}
if ((dia>23)and(mes==9))
{
    cout<<"Libra"<<"\n";
    cLibra++;
}
if ((dia<=23)and(mes==10))
{
    cout<<"Libra"<<"\n";
    cLibra++;
}
if ((dia>23)and(mes==10))
{
    cout<<"Escorpion"<<"\n";
    cEscorpion++;
}
if ((dia<=22)and(mes==11))
{
    cout<<"Escorpion"<<"\n";
    cEscorpion++;
}
if ((dia>22)and(mes==11))
{
    cout<<"Sagitario"<<"\n";
    cSagitario++;
}
if ((dia<=21)and(mes==12))
{
    cout<<"Sagitario"<<"\n";
    cSagitario++;
}
if ((dia>21)and(mes==12))
{
    cout<<"Capricornio"<<"\n";
    cCapricornio++;
}
    }


void presentar (int cAcuario, int cPiscis,int cAries,int cTauro,int cGeminis,int cCancer,int cLeo,int cVirgo,int cLibra,int cEscorpion,int cSagitario,int cCapricornio)
{
    cout<<"Son " << cAcuario << " Acuarios"<<"\n";
    cout<<"Son " << cPiscis << " Piscis"<<"\n";
    cout<<"Son " << cAries << " Aries"<<"\n";
    cout<<"Son " << cTauro << " Tauro"<<"\n";
    cout<<"Son " << cGeminis << " Gemenis"<<"\n";
    cout<<"Son " << cCancer << " Cancer"<<"\n";
    cout<<"Son " << cLeo << " Leo"<<"\n";
    cout<<"Son " << cVirgo << " Virgo"<<"\n";
    cout<<"Son " << cLibra << " Libra"<<"\n";
    cout<<"Son " << cEscorpion << " Escorpion"<<"\n";
    cout<<"Son " << cSagitario << " Sagitario"<<"\n";
    cout<<"Son " << cCapricornio << " Capricornio"<<"\n";
}

int main()
{
    char resp;
  do
   {
       Ingresar (dia,mes);
    Signo(dia,mes,cAcuario, cPiscis, cAries, cTauro, cGeminis, cCancer,cLeo,cVirgo,cLibra,cEscorpion,cSagitario,cCapricornio);
    _flushall();
       do
       {
    cout<<"Desea Continuar...";
    cin.get(resp);

        }while((resp!='n')and (resp!='s'));
    }while(resp!='n');
    _flushall();
    presentar (cAcuario,cPiscis,cAries,cTauro,cGeminis,cCancer,cLeo,cVirgo,cLibra,cEscorpion,cSagitario,cCapricornio);

    return 0;
}
