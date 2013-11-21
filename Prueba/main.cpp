#include <iostream>

using namespace std;

char p1,p2,p3,p4,p5,p6,p7,p8,p9;
int posicion;
char valor;
void IngresePosicion (int &posicion)
{
        do
        {
            cout <<"ingrese la pocicion 1-9...:";
            cin>>posicion;
        } while ((posicion<1) or (posicion>9));
}
void Posiciones(int &posicion,char p1,char p2,char p3, char p4,char p5,char p6,char p7,char p8, char p9)
{
   switch(posicion)
   {
    case 1:
       posicion=p1;
       break;
    case 2:
        posicion = p2;
        break;
    case 3:
        posicion = p3;
        break;
    case 4:
        posicion = p4;
        break;
    case 5:
        posicion = p5;
        break;
    case 6:
        posicion = p6;
        break;
    case 7:
        posicion = p7;
        break;
    case 8:
        posicion = p8;
        break;
    default:
        posicion = p9;
        break;
   }
}

char respuesta ()
{
    char resp;
    do
    {
        cout<<"Ingrese X ó 0 ...";
        cin.get(resp);
    } while ((resp!='x')and (resp!='o'));
    return(resp);
}

void ganox(char p1,char p2,char p3, char p4,char p5,char p6,char p7, char p8, char p9 )
{

    if ((p1=='x')and (p2=='x')and  (p3=='x') )
    {
        cout<<"GANASTE"<<"\n";
    }
    else if((p1=='x')and (p4=='x')and  (p7=='x') )
    {
      cout<<"GANASTE"<<"\n";
    }
     else if ((p4=='x')and (p5=='x')and  (p6=='x') )
    {
      cout<<"GANASTE"<<"\n";
    }
     else if ((p7=='x')and (p8=='x')and  (p9=='x') )
    {
      cout<<"GANASTE"<<"\n";
    }
     else if ((p2=='x')and (p5=='x')and  (p8=='x') )
    {
      cout<<"GANASTE"<<"\n";
    }
     else if ((p3=='x')and (p6=='x')and  (p9=='x') )
    {
      cout<<"GANASTE"<<"\n";
    }
     else if ((p1=='x')and (p5=='x')and  (p9=='x') )
    {
      cout<<"GANASTE"<<"\n";
    }
     else if ((p3=='x')and (p5=='x')and  (p7=='x') )
    {
      cout<<"GANASTE"<<"\n";
    }

}



int main()
{

    for(int i=0;i<3;i++)
    {
    IngresePosicion(posicion);
    Posiciones(posicion,p1,p2,p3,p4,p5,p6,p7,p8,p9);
    valor = respuesta();
   ganox(p1,p2,p3,p4,p5,p6,p7,p8,p9);
    }



    return 0;
}
