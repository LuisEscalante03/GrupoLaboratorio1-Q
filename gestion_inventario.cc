#include <iostream>

//Declaracion de funciones
void IngresarStock(int& stock, int cantidad);
void RetirarStock(int& stock, int cantidad);
void ConsultarStock(int stock);

int main() {
    int stock_producto = 50;

    std::cout << "Bienvenido al sistema de gestion de inventario" << std::endl;
    ConsultarStock(stock_producto);

    std::cout << "\n--- Probando ingreso de stock ---" << std::endl;
    IngresarStock(stock_producto, 20);
    ConsultarStock(stock_producto);

    std::cout << "\n--- Probando retiro de stock ---" << std::endl;
    RetirarStock(stock_producto, 10);
    ConsultarStock(stock_producto);

    return 0;
}

void ConsultarStock(int stock) {
    std::cout << "-> El stock actual es: " << stock << std::endl;
}