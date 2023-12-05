#include <iostream>
#include "interfaz.h"
#include "prosimples.h"
#include "provariable.h"

using namespace std;

int main()
{
    Interfaz itz;
    Modelo* proSimple1 = new proSimples("SKU001", "Whiskey", "Para un buen paladar", 29.99, 15.60, 50);
    Modelo* proSimple2 = new proSimples("SK002", "Tropico", "Un buen licor", 10.99, 5.56, 20);
    Inventario inv;
    inv.agregarProducto(proSimple1);
    inv.agregarProducto(proSimple2);
    Modelo* proVariado1 = new proVariable("SK003", "Jonny Walker", "Un elixir", 99.99, 70.42, 32, 2, "Blue Label");
    Modelo* proVariado2 = new proVariable("SK004", "Zhumir", "Agua ardiente", 30.32, 20.66, 10, 2, "Zhumir sandia");
    inv.agregarProducto(proVariado1);
    inv.agregarProducto(proVariado2);
    inv.cuadroProductos();
    inv.cuadroInventario();
    inv.calcularCosto("SKU001", 18.50, 10);
    inv.calcularCosto("SKU003", 6.25, 8);
    inv.cuadroProductos();
    inv.calculoEgreso("SKU002", 5);
    inv.calculoEgreso("SKU004", 3);
    inv.cuadroInventario();
    int opcion;
    system("color A");
    do
    {
        cout << "\n== = == API Ales Tavern == = ==" << endl;
        cout << "1. Agregar Producto" << endl;
        cout << "2. Mostrar Cuadro de Productos" << endl;
        cout << "3. Mostrar Cuadro de Inventario" << endl;
        cout << "4. Caracteristicas de los productos" << endl;
        cout << "5. Egreso de un producto" << endl;
        cout << "6. Salir" << endl;
        cout << "*******************************" << endl;
        cout << "Ingrese la opcion: ";
        cin >> opcion;
        switch (opcion)
        {
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
            cout << "***Proyecto Parcial 1***" << endl;
            cout << "= == Integrantes == =" << endl;
            cout << "1. Ariel Flores" << endl;
            cout << "2. Mayerli Campuez" << endl;
            cout << "3. Luis Pillajo" << endl;
            cout << "4. Fabian Izquierdo" << endl;
            cout << "===== = === = ====="<<endl;
            break;
        default:
            cout << "Opcion no valida, ingrese de nuevo..." << endl;
            break;
        }

    } while (opcion != 6);
    return 0;
}
