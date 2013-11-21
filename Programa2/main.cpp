#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
/* Ingresar el nombre del empleado, el turno y las ventas.
Validar que el turno solo es 1,2,3. (Usar un procedimiento).

Calcular usando un procedimiento, la comision ganada (1=5%, 2=3%, 3=6%), el ihss y total a pagar.

Presentar los datos calculados usando un procedimiento. */

char nombre[30];
int turno, venta, ihss, comision, totalP;
0
void Ingresar(char nombre[], int &turno, int &venta)
{
    cout << "Ingresar nombre del empleado:";
    cin.getline(nombre,30);

    do
    {
        cout << "Ingresar turno:";
        cin >> turno;

    }while (!((turno==1) or (turno==2) or (turno==3)));

    cout << "Ingresar las ventas:";
    cin >> venta;

}

    void Calcular(int turno, int &comision, int &ihss, int &totalP)
    {
        if (turno==1)
            comision=(venta*0.05);
        else if (turno==2)
            comision=(venta*0.03);
        else
            comision=(venta*0.06);

        if (venta>7000)
            ihss=245;
        else
            ihss=(venta*0.035);

            totalP=comision-ihss;

    }

    void Presentar(int comision, int ihss, int totalP)
    {
        cout << "La comision es:" << comision << "\n";
        cout << "El IHSS es:" << ihss << "\n";
        cout << "El total a pagar es:" << totalP << "\n";


    }


int main()
{
    Ingresar(nombre, turno, venta);
    Calcular(turno, comision, ihss, totalP);
    Presentar(comision, ihss, totalP);

    return 0;
}
