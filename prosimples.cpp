#include "proSimples.h"
#include <iostream>

proSimples::proSimples() :
    Modelo("", "", "", 0.0, 0.0, 0)
{
}

proSimples::proSimples(string SKU, string nombre, string descripcion, float precioVenta, float precioCompra, int unidades) :
    Modelo(SKU, nombre, descripcion, precioVenta, precioCompra, unidades)
{
}

void proSimples::ingresoPSimple()
{
    string SKU;
    string nombre;
    string descripcion;
    float precioVenta;
    float precioCompra;
    int unidades;
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
    cout<<"Unidades: ";
    cin>>unidades;
    setUnidades(unidades);
    setSKU(SKU);
    setNombre(nombre);
    setPrecioVenta(precioVenta);
    setPrecioCompra(precioCompra);
    Modelo *nuevoProducto = new Modelo(SKU, nombre, descripcion, precioVenta, precioCompra, unidades);
    productos.push_back(nuevoProducto);
}

void proSimples::imprimir1()
{
    for (int i = 0; i < productos.size(); i++)
    {
        cout << productos[i]->imprimir(false) << endl;
    }
}

void proSimples::agregarProductoEx(int nuevaUnidad, float nuevoCosto)
{
    int totalUnidades = getUnidades() + nuevaUnidad;
    float CP = (getUnidades() * getPrecioCompra() + nuevaUnidad * nuevoCosto) / totalUnidades;
    setUnidades(totalUnidades);
    setPrecioCompra(CP);
}


