#include "interfaz.h"
#include <iostream>
#include <limits>

using namespace std;

void Interfaz::agregarProducto()
{
    int op, op1;
    string SKU, nombre, descripcion, edicion;
    float precioVenta, costoCompra;
    int unidades, numVariaciones;
    cout << "1. Nuevo " << endl;
    cout << "2. Existente " << endl;
    cout << "Opcion: ";
    cin>>op;
    switch (op)
    {
    case 1:
        cout<<"1. Producto simple"<<endl;
        cout<<"2. Producto variado"<<endl;
        cout << "Opcion: ";
        cin>>op1;
        cin.clear();
        switch (op1){
        case 1:{
            cout << "SKU: ";
            cin >> SKU;

            cout << "Nombre: ";
            getline(cin>>ws, nombre);

            cout << "Descripcion: ";
            getline(cin>>ws, descripcion);

            cout << "Precio de Venta: ";
            cin >> precioVenta;

            cout << "Costo de Compra: ";
            cin >> costoCompra;

            cout << "Unidades: ";
            cin >> unidades;

            proSimples* nuevoSimple = new proSimples(SKU, nombre, descripcion, precioVenta, costoCompra, unidades);
            inventario.agregarProducto(nuevoSimple);
            cout << "Producto Simple agregado al inventario." << endl;
            break;
        }
        case 2:
            cout << "Numero de Variaciones: ";
            cin >> numVariaciones;

            for (int i = 0; i < numVariaciones; i++) {
                cout << i+1 << ". Edicion " << endl;

                cout << "Edicion: ";
                getline(cin>>ws, edicion);
                cout << "SKU: ";
                cin >> SKU;

                cout << "Nombre: ";
                getline(cin>>ws, nombre);

                cout << "Descripcion: ";
                getline(cin>>ws, descripcion);

                cout << "Precio de Venta: ";
                cin >> precioVenta;

                cout << "Costo de Compra: ";
                cin >> costoCompra;

                cout << "Unidades: ";
                cin >> unidades;
                proVariable *nuevoVariable = new proVariable(SKU, nombre, descripcion, precioVenta, costoCompra, unidades, numVariaciones, edicion);
                inventario.agregarProducto(nuevoVariable);
                cout << "Producto Variable agregado al inventario." << endl;
            }
            break;
        }

        break;
    case 2:
        float  newCosto;
        int newUnidad;
        string SKU;
        cout << "SKU del producto: ";
        cin >> SKU;
        cout << "Unidades: ";
        cin >> newUnidad;
        cout << "Costo de las nuevas unidades: ";
        cin >> newCosto;
        inventario.calcularCosto(SKU, newCosto, newUnidad);
        cout << "Costo del producto agregado correctamente..."<<endl;
        break;
    }
}

void Interfaz::mostrarProductos()
{
    inventario.cuadroProductos();
}

void Interfaz::mostrarInventario()
{
    inventario.cuadroInventario();
}

void Interfaz::caracteristicasProductos() {
    inventario.caracteristicasProductos();
}

void Interfaz::pedirEgreso()
{
    string sku;
    int unidades;
    cout<<"SKU: ";
    cin>>sku;
    cout<<"Cantidad: ";
    do
    {
        cin>>unidades;
        if(unidades < 0)
        {
            cout<<"Error... Numero negativo"<<endl;
        }
    }while(unidades < 0);
    inventario.calculoEgreso(sku, unidades);
}
