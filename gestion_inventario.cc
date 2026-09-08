#include <iostream>



//Funcion de Juan José Guerra Aquino
    void IngresarStock(int& stock, int cantidad) {
        if (cantidad<0)
        {
            std::cout << "No se puede ingresar una cantidad negativa de stock" << "\n";
        }
        else
        {
            stock += cantidad;
            std::cout << "Stock ingresado correctamente. Nuevo stock: " << stock << "\n";
        }
        
    }