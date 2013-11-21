#include <iostream>

using namespace std;
/*
Ingresar el nombre, turno y las horas, usando un procedimiento.
Luego, determinar las horas normales usando una funcion,
lo mismo can las horas extras.
Las  primeras 40 son normales y las demas son extras.

Luego determinar e pago por hora normal y extra usando un
procedimiento.

turno       pago normal     pago exta
1               100             120
2               130             150
3               140             160

Elaborar una funcion para el ihss.
Usando un procedimiento realizar los calculos y en oto procedimiento
presentar los datos.
*/

char nombre [30];
int turno, horas, hn, he;
double pxn,pxe,pn,pe,pb,ihss,tp;

void ingresar (char nombre[], int &horas, int &turno)
{
    cout<<"ingresar el nombre del empleado...:";
    cin.getline(nombre,30);

    cout<<"horas...:";
    cin>>horas;
    do
    {
        cout<<"Ingrese el turno 1,2,3...:";
        cin>>turno;
    }while ((turno<1) || (turno>3));
    _flushall;
}

int horasn (int horas)
{
    if (horas>40)
    {
        return 40;
    }
    else
    {
        return horas;
    }
}

int horasE (int horas)
{
    if (horas>40)
    {
        return horas-40;
    }
    else
    {
        return 0;
    }
}

void pagos (int turno, double &pxn, double &pxe)
{
    switch(turno)
    {
    case 1:
        pxn=100;
        pxe=120;
        break;
    case 2:
        pxn=130;
        pxe=150;
        break;
    default:
        pxn=140;
        pxe=160;
        break;
    }
}

double seguro(double sueldo)
{
    if (sueldo>7000)
    {
        return 245;
    }
    else
    {
        return 0.035*sueldo;
    }
}

void calcular (int turno, int horas, int &hn, int &he, double &pxn, double &pxe, double &pn, double &pe, double &pb, double &ihss, double &tp)
{
    hn= horasn(horas);
    he= horasE(horas);

    pagos(turno,pn,pe);

    pn= hn * pnx;
    pe= he * pxe;

    pb=pn+pe;

    ihss= seguro(pb);

    tp= (pn + pe)- ihss;
}
void presentar (int hn,int he, double pxn, double pxe, double pn, double pe, double pb, double ihss, double tp)
{
    cout<<"horas normales..."<< hn << "\n";
    cout<<"horas extras...:"<<he<<"\n";
    cout<<"Pago hora normal..."<<pxn<<"\n";
     cout<<"Pago hora extras..."<<pxe<<"\n";
      cout<<"Pago normal..."<<pn<<"\n";
       cout<<"Pago extra..."<<pe<<"\n";
     cout<<"Pago bruto..."<<pb<<"\n";
      cout<<"IHSS..."<<ihss<<"\n";
       cout<<"total a paga..."<<tp<<"\n";
}
int main()
{
    ingresar (nombre,horas,turno)
    pagos (turno,pxn,pxe)
    calcular (turno,horas,hn,he,pxn,pxe,pn,pe,pb,ihss,tp)
    presentar (hn,he,pxn,pxe,pn,pe,pb,ihss,tp)
    return 0;
}
