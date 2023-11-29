#include "inventario.h"

Inventario::Inventario()
{

}

void Inventario::importacionPS(int unidades, string producto, proSimples *productoNuevo, vector<Modelo*> productos)
{
    float total;

    if (producto == "Nuevo" && productoNuevo != nullptr) {
        total = unidades * productoNuevo->getPrecioCompra();
        cout << "Precio total de compra: " << total << endl;
    } else if (producto == "Existente" && productoNuevo != nullptr) {
        string nombreBuscado;
        cout << "Nombre del producto existente: ";
        cin >> nombreBuscado;
        proSimples* productoExistente = nullptr;
        buscarDatoPS(nombreBuscado, productos, productoExistente);
        if(productoExistente != nullptr)
        {
            total = unidades * productoExistente->getPrecioCompra();
            cout<<"Precio total Costo: "<<total<<endl;
        }
        else
        {
            cout<<"Producto no encontrado..."<<endl;
        }
    }
}

void Inventario::imporatacionPV(int unidades, string producto, proVariable *productoNuevo, vector<Modelo *> productos)
{
    float total;

    if (producto == "Nuevo" && productoNuevo != nullptr) {
        total = unidades * productoNuevo->getPrecioCompra();
        cout << "Precio total de compra: " << total << endl;
    } else if (producto == "Existente" && productoNuevo != nullptr) {
        string nombreBuscado;
        cout << "Nombre del producto existente: ";
        cin >> nombreBuscado;
        proVariable* productoExistente = nullptr;
        buscarDatoPV(nombreBuscado, productos, productoExistente);
        if(productoExistente != nullptr)
        {
            total = unidades * productoExistente->getPrecioCompra();
            cout<<"Precio total Costo: "<<total<<endl;
        }
        else
        {
            cout<<"Producto no encontrado..."<<endl;
        }
    }
}

void Inventario::buscarDatoPS(string datoBuscar, vector<Modelo*> productos, proSimples* &dato)
{
    dato = nullptr;

    for (Modelo* producto : productos) {
        proSimples* productoSimple = dynamic_cast<proSimples*>(producto);
        if (productoSimple != nullptr && productoSimple->getNombre() == datoBuscar) {
            dato = productoSimple;
            break;
        }
    }
}

void Inventario::buscarDatoPV(string datoBuscar, vector<Modelo *> productos, proVariable *&dato)
{
    dato = nullptr;

    for (Modelo* producto : productos) {
        proVariable* productoVariable = dynamic_cast<proVariable*>(producto);
        if (productoVariable != nullptr && productoVariable->getNombre() == datoBuscar) {
            dato = productoVariable;
            break;
        }
    }
}

