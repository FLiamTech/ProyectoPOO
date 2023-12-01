#include "inventario.h"
#include <algorithm>

using namespace std;

Inventario::Inventario()
{}

void Inventario::agregarProducto(Modelo* nuevoProducto)
{
    listaProductos.push_back(nuevoProducto);
}

void Inventario::eliminarProducto(string SKU)
{
    auto it = find_if(listaProductos.begin(), listaProductos.end(),[SKU](Modelo* p) { return p->getSKU() == SKU; });
    if (it != listaProductos.end())
    {
        delete *it;
        listaProductos.erase(it);
    }
}

void Inventario::agregarUnidades(string SKU, int cantidad)
{
    auto it = find_if(listaProductos.begin(), listaProductos.end(),
                      [SKU](Modelo* p) { return p->getSKU() == SKU; });

    if (it != listaProductos.end())
    {
        (*it)->setUnidades((*it)->getUnidades() + cantidad);
    }
}
void Inventario::mostrarCuadroDeProductos() const
{
    using namespace std;
    cout << "Cuadro de Productos:" << endl;
    cout << left << setw(30) << "| Nombre" << setw(15) << "| SKU" << setw(15) << "| Unidades" << setw(20) << "| Precio V.P." << "|" << endl;
    cout << setw(30) << setfill('-') << "|" << setw(15) << "|" << setw(15) << "|" << setw(20) << "|" << setfill(' ') << endl;

    for (const auto &producto : listaProductos)
    {
        cout << setw(30) << "| " + producto->getNombre() << setw(15) << "| " + producto->getSKU() << setw(15) << "| " + to_string(producto->getUnidades())
             << setw(5) << "| " << fixed << setprecision(2) << producto->getPrecioVenta() << "$" <<setw(5)<< "|" <<setw(5)<< endl;
    }
    cout << setw(30) << setfill('-') << "|" << setw(15) << "|" << setw(15) << "|" << setw(20) << "|" <<setw(5)<< setfill(' ') << endl;
}

void Inventario::mostrarCuadroDeInventario() const
{
    using namespace std;
    cout << "Cuadro de Inventario:" << endl;
    cout << left << setw(30) << "| Nombre" << setw(15) << "| SKU" << setw(15) << "| Unidades" << setw(20) << "| Costo V.T." << "|" << endl;
    cout << setw(30) << setfill('-') << "|" << setw(15) << "|" << setw(15) << "|" << setw(20) << "|" << setfill(' ') << endl;

    for (const auto &producto : listaProductos)
    {
        cout << setw(30) << "| " + producto->getNombre() << setw(15) << "| " + producto->getSKU() << setw(15) << "| " + to_string(producto->getUnidades())
             << setw(20) << "| " << fixed << setprecision(2) << producto->getCostoCompra() << "$" << "|" << endl;
    }
    cout << setw(30) << setfill('-') << "|" << setw(15) << "|" << setw(15) << "|" << setw(20) << "|" << setfill(' ') << endl;
}
void Inventario::calcularCosto(string SKU,float costoNuevo, int unidadNueva)
{
    auto it = find_if(listaProductos.begin(), listaProductos.end(),[SKU](Modelo* p) { return p->getSKU() == SKU; });
    if (it != listaProductos.end())
    {
        Modelo* producto = *it;
        float nuevoCostoMedio;
        nuevoCostoMedio = ((producto->getCostoCompra() * producto->getUnidades()) +(costoNuevo * unidadNueva)) /( producto->getUnidades() + unidadNueva);
        float nuevoPrecioDeVenta = nuevoCostoMedio + nuevoCostoMedio*0.25;
        cout << "Nuevo precio de venta recomendado: " << nuevoPrecioDeVenta << endl;
        cout << "Nueva media del costo de compra: " << nuevoCostoMedio << endl;
        bool confirmacion=false;
        cout << "Confirmar cambios[1 - 2]: \n";
        cout<<"[Si - No]: ";
        cin >> confirmacion;
        if(confirmacion)
        {
            producto->setPrecioVenta(nuevoPrecioDeVenta);
            producto->setCostoCompra(nuevoCostoMedio);
            producto->setUnidades( producto->getUnidades() + unidadNueva);
        }
        else
        {
            return;
        }

        return;
    }
}
