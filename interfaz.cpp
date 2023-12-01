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
    cout << "1. Nuevo. " << endl;
    cout << "2. Existente. " << endl;
    cout << "Opcion: ";
    cin>>op;

    cin.clear();

    switch (op)
    {
    case 1:
        cout<<"1. Producto simple."<<endl;
        cout<<"2. Producto variado."<<endl;
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
        case 2:{
            // Producto Variable
            cout << "Numero de Variaciones: ";
            cin >> numVariaciones;

            for (int i = 0; i < numVariaciones; i++) {
                cout << i+1 << ". Edicion " << endl;

                cout << "Edicion: ";
                getline(cin>>ws, edicion);
                // Solicitar detalles al usuario
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
        }
        break;
    case 2:
        float  costoUnitarioNuevo;
        int unidadesNuevas;
        string SKU;
        cout << "SKU del producto: ";
        cin >> SKU;
        cout << "Unidades: ";
        cin >> unidadesNuevas;
        cout << "Costo de las nuevas unidades: ";
        cin >> costoUnitarioNuevo;
        inventario.calcularCosto(SKU, costoUnitarioNuevo, unidadesNuevas);
        cout << "Costo de compra y precio de venta manipulados correctamete"<<endl;

        break;
    }
}

void Interfaz::mostrarProductos()
{
    inventario.mostrarCuadroDeProductos();
}

void Interfaz::mostrarInventario()
{
    inventario.mostrarCuadroDeInventario();
}


