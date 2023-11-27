#include "interfaz.h"

Interfaz::Interfaz()
{

}

void Interfaz::agregarProducto()
{
    string opcion, tipo;
    int unidades;
    proSimples* productoNuevo = nullptr;

    do
    {
        cout << "Agregar un producto nuevo o existente" << endl;
        cout << "Digite [Nuevo | Existente]" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion != "Nuevo" && opcion != "Existente")
        {
            cout << "Error..." << endl;
        }
    } while (opcion != "Nuevo" && opcion != "Existente");

    if (opcion == "Nuevo")
    {
        cout << "Producto Simple o variado" << endl;
        cout << "Digite [Simple | Variado]" << endl;

        do
        {
            cout << "Opcion: ";
            cin >> tipo;

            if (tipo != "Simple" && tipo != "Variado")
            {
                cout << "Error..." << endl;
            }
        } while (tipo != "Simple" && tipo != "Variado");

        if (tipo == "Simple")
        {
            do
            {
                cout << "Unidades: ";
                cin >> unidades;

                if (unidades < 0)
                {
                    cout << "Error..." << endl;
                }
            } while (unidades < 0);

            productoNuevo = new proSimples();
            inventario->ingresoPSimple();
            inventario->importacion(unidades, opcion, productoNuevo);
        }
        // else if (tipo == "Variado")
        // {
        //     // Lógica para productos variados
        // }
    }
    // else if (opcion == "Existente")
    // {
    //     // Lógica para productos existentes
    // }
}

void Interfaz::imprimir()
{
    inventario->imprimir1();
}
