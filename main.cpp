#include <iostream>
//#include "modelo.h"
//#include "proSimples.h"
//#include "provariable.h"
#include "interfaz.h"
using namespace std;
int main() {
    // Crear un objeto de tipo Modelo
    /*Modelo model;
    string descipcion;
    model.setSKU("AB1324");
    model.setNombre("Celular");
    cout<<"Decripcion: ";
    getline(cin>>ws, descipcion);
    model.setDescripcion(descipcion);
    model.setPrecioVenta(5000);
    model.setPrecioCompra(4000);
    cout<<model.imprimir(false);
    */

    // Crear un objeto de tipo Producto Simple
    /*proSimples PS("SK1231", "Pilsener", "100% Ecuador", 420, 320);
    PS.ingresoPSimple();
    PS.imprimir();

    // Crea un objeto de tipo Producto Variable
    proVariable PV("SK1231", "Jack Daniels", "Wisky", 120, 20, 3);
    PV.ingresoPVariables();
    PV.imprimir();*/
    Interfaz init;
    init.agregarProducto();
    init.imprimir();

    return 0;
}
