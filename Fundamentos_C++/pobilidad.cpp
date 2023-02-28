#include <iostream>
using namespace std;

int main()
{
    float capitalini;
    float capitalfi;
    float prestamo;
    float equipo;
    float mobi;
    float insumoincentivo;

    cout<<"Yunier Yau\n";
    cout<<"Ingrese su capital\n";
    cin>>capitalini;
    if (capitalini<0)
    {
        prestamo=10000-capitalini;
        capitalfi=capitalini+prestamo;
    }
    else if (capitalini<20000)
    {
        prestamo=20000-capitalini;
        capitalfi=capitalini+prestamo;
    }
    else
    {
        prestamo=0;
        capitalfi=capitalini;
    }
    equipo=capitalfi*0.3;
    mobi=capitalfi*0.15;
    insumoincentivo=(capitalfi-(mobi+equipo))/2;
    cout<<"se repartira el presupuesto de la siguiente manera\n";
    cout<<"El capital inicial fue de "<<capitalini<<endl;
    cout<<"El prestamo solicitado fue de "<<prestamo<<endl;
    cout<<"El capital es de "<<capitalfi<<endl;
    cout<<equipo<<" Se repartira para equipo de computo\n";
    cout<<mobi<<" Se repartira para mobiliarios\n";
    cout<<insumoincentivo<<" se repartira para insumos\n";
    cout<<insumoincentivo<<" se repartira en incentivos para los trabajadores\n";
    
    return 0;
}