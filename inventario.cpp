#include "inventario.h"

Inventario::Inventario()
{

}

void Inventario::importacion(int unidades, string producto, proSimples *productoNuevo)
{
    float total;
    if (producto == "Nuevo" && productoNuevo != nullptr) {
        total = unidades * productoNuevo->getPrecioCompra();
        cout << "Precio total de compra: " << total << endl;
    } else if (producto == "Existente") {
        // Lógica para productos existentes
    } else {
        // Lógica para otros casos
    }
}


