#include <iostream>

using namespace std;
int sueldo, IHSS;
int Seguro_Social(int sueldo)
{   int vihss;
    if (sueldo>7000)
    {
        vihss=245;
    }
    else
    {
        vihss=0.035 * sueldo;
    }
    return vihss;

}
int main()
{
    cout<<"Ingresar su Sueldo...:";
    cin>>sueldo;
    IHSS= Seguro_Social(sueldo);
    cout<<"Seguro Social...:"<<IHSS<<"\n";

    return 0;
}
