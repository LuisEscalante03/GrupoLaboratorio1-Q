#include <iostream>

int main() {
    return 0;
}














  //Funcion de Juan José Guerra Aquino
    void IngresarStock(int& stock, int cantidad) {
        if (cantidad<0)
        {
            std::cout << "No se puede ingresar una cantidad negativa de stock." << std::endl;
        }
        else
        {
            stock += cantidad;
            std::cout << "Stock ingresado correctamente. Nuevo stock: " << stock << std::endl;
        }
        
    }