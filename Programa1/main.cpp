#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

/* Ingresar el nombre, notaA, notaE usando un procedimiento luego determinar la nota final, y la observacion
usando un procedimiento. Presentar los datos usando otro procedimiento. */

char nombre[30];
char obs[15];
int na, ne, nf;

void ingreso(char nombre[], int &na, int &ne)
{
    cout  << "Ingresar el nombre del alumno:";
    cin.getline(nombre,30);
    cout << "Ingresar la nota acumulada:";
    cin >> na;
    cout << "Ingresar la nota Examen:";
    cin >> ne;
}

    void calcular(int na, int ne, int &nf, char obs[])
    {
        nf=na+ne;

        if (nf>=60)
            strcpy(obs, "Aprobado");
            else
            strcpy(obs, "Reprobado");

    }

    void presentar(int nf, char obs[])
    {
        cout << "La nota final del alumno es:" << nf << "\n";
        cout << "Observacion:" << obs << "\n";
    }


int main()
{
    ingreso(nombre, na, ne);
    calcular(na, ne, nf, obs);
    presentar(nf, obs);

    return 0;
}
