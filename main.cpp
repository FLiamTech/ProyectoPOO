#include <iostream>
#include "interfaz.h"

using namespace std;

int main()
{
    Interfaz itz;
    int opcion;
    system("color A");
    do
    {
        cout << "\n== = == Menu de Inventario == = ==" << endl;
        cout << "1. Agregar Producto" << endl;
        cout << "2. Mostrar Cuadro de Productos" << endl;
        cout << "3. Mostrar Cuadro de Inventario" << endl;
        cout << "4. Caracteristicas de los productos" << endl;
        cout << "5. Egreso de un producto" << endl;
        cout << "6. Salir" << endl;
        cout << "*******************************" << endl;
        cout << "Ingrese la opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            itz.agregarProducto();
            system("cls");
            break;
        case 2:
            itz.mostrarProductos();
            break;
        case 3:
            itz.mostrarInventario();
            break;
        case 4:
            itz.caracteristicasProductos();
            break;
        case 5:
            itz.pedirEgreso();
            break;
        case 6:
            cout << "Gracias por usar el programa..." << endl;
            break;
        default:
            cout << "Opcion no valida, ingrese de nuevo..." << endl;
            break;
        }

    } while (opcion != 6);
    return 0;
}
