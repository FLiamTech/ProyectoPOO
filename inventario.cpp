#include "inventario.h"
#include <algorithm>

using namespace std;

Inventario::Inventario()
{}

void Inventario::agregarProducto(Modelo* nuevoProducto)
{
    listaProductos.push_back(nuevoProducto);
}

void Inventario::cuadroProductos() const {
    using namespace std;

    cout << "Cuadro de Productos:" << endl;
    cout << "+----------------------+---------------+-------------+--------------------+" << endl;
    cout << "| SKU                  | Nombre        | Existencias | Precio de Venta    |" << endl;
    cout << "+----------------------+---------------+-------------+--------------------+" << endl;

    for (const auto &producto : listaProductos) {
        cout << "| " << left << setw(20) << producto->getSKU() << " | "
             << left << setw(13) << producto->getNombre() << " | "
             << right << setw(12) << producto->getUnidades() << " | "
             << right << fixed << setprecision(2) << setw(18) << producto->getPrecioVenta() << "$ |" << endl;
    }

    cout << "+----------------------+---------------+-------------+--------------------+" << endl;
}



void Inventario::cuadroInventario() const {
    using namespace std;

    cout << "Cuadro de Inventario:" << endl;
    cout << "+---------------+---------------+----------------+----------------------+" << endl;
    cout << "| SKU           | Costo         | Existencias    | Subtotal             |" << endl;
    cout << "+---------------+---------------+----------------+----------------------+" << endl;

    for (const auto &producto : listaProductos) {
        cout << "| " << left << setw(14) << producto->getSKU() << " | "
             << right << setw(13) << fixed << setprecision(2) << producto->getCostoCompra() << "$ | "
             << right << setw(13) << producto->getUnidades() << " | "
             << right << setw(20) << producto->getCostoCompra() * producto->getUnidades() << "$ |" << endl;
    }

    cout << "+---------------+---------------+----------------+----------------------+" << endl;
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

void Inventario::caracteristicasProductos() const {
    cout << "Cuadro de Productos:" << endl;
    for (const auto& producto : listaProductos) {
        producto->imprimir();
        cout << "------------------------" << endl;
    }
}

void Inventario::calculoEgreso(const string& SKU, int cantidad)
{
    auto it = find_if(listaProductos.begin(), listaProductos.end(), [SKU](Modelo* p) { return p->getSKU() == SKU; });

    if (it != listaProductos.end())
    {
        Modelo* producto = *it;

        if (producto->getUnidades() >= cantidad)
        {
            producto->setUnidades(producto->getUnidades() - cantidad);
            cout << "Egreso Exitoso [U]: " << producto->getUnidades() << endl;
        }
        else
        {
            cout << "Error... Unidades insuficientes" << endl;
        }
    }
    else
    {
        cout<<"Error..."<<endl;
        cout <<SKU<< " no encontrado..." << endl;
    }
}
