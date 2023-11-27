#include "provariable.h"
#include <iostream>

proVariable::proVariable()
{

}

proVariable::proVariable(string SKU, string nombre, string descripcion, float precioVenta, float precioCompra, int numVariacion) :
    Modelo(SKU, nombre, descripcion, precioVenta, precioCompra), numVariacion(numVariacion)
{

}

void proVariable::ingresoPVariables()
{
    string SKU;
    string nombre;
    string descripcion;
    float precioVenta;
    float precioCompra;
    int numeroVariaciones;
    cout<<"Ingrese el SKU: ";
    cin>>SKU;
    cout<<"Ingrese el nombre: ";
    cin>>nombre;
    cout<<"Ingrese la descripcion: ";
    getline(cin >> ws, descripcion);
    cout<<"Ingrese el precio de venta: ";
    cin>>precioVenta;
    cout<<"Ingrese el precio de compra: ";
    cin>>precioCompra;
    cout<<"Numero de variaciones: ";
    cin>>numeroVariaciones;
    Modelo *nuevoProducto = new Modelo(SKU, nombre, descripcion, precioVenta, precioCompra);
    productos.push_back(nuevoProducto);
    string edicion;
    float nuevoCosto;
    float nuevoPrecio;
    for(int i=1; i<numVariacion; i++)
    {
        cout<<"Edicion "<<i+1<<": ";
        getline(cin>>ws, edicion);
        cout<<"Ingrese el costo: ";
        cin>>nuevoCosto;
        cout<<"Ingrese el precio: ";
        cin>>nuevoPrecio;
        nuevoProducto->agregarEdicion(edicion, nuevoCosto, nuevoPrecio);
    }
}

void proVariable::imprimir()
{
    for (int i = 0; i < productos.size(); i++)
    {
        cout << productos[i]->imprimir(true) << endl;
    }
}
