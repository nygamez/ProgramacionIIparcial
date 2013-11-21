#include <iostream>

using namespace std;

/*

*/

void calcular(int &sueldo, int &IHSS)
{
    if(sueldo>7000)
        IHSS=245;
    else
        IHSS=0.035* sueldo;


    sueldo=sueldo*1.20;
}

int main()
{
    int sueldo;
    int IHSS=0;


    cout<<"Ingresar el sueldo...:";
    cin>>sueldo;

    calcular (sueldo,IHSS);

    cout<<"Sueldo...:"<<sueldo<<"\n";
    cout<<"IHSS...:"<<IHSS<<"\n";
    return 0;
}
