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
//Declaracion de funciones
void IngresarStock(int& stock, int cantidad);
void RetirarStock(int* stock, int cantidad);
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




// Función para retirar stock: Modifica el valor original mediante paso por puntero (*)
void RetirarStock(int* stock, int cantidad) {
  // 1. Validacion del puntero
  if (stock == nullptr) {
    std::cout << "[Error] Puntero a stock no valido.\n";
    return;
  }
  
  // 2. Validar que no ingresen valores negativos
  if (cantidad < 0) {
    std::cout << "[Error] No se permiten retirar cantidades negativas.\n";
    return;
  }
  
  // 3. Validar que haya suficiente stock
  if (cantidad > *stock) {
    std::cout << "[Error] Stock insuficiente para retirar " << cantidad << " unidades.\n";
    return;
  }
  
  // 4. Aplicar el retiro
  *stock -= cantidad;
  std::cout << "[Exito] Se han retirado " << cantidad << " unidades del inventario.\n";

void ConsultarStock(int stock) {
    std::cout << "-> El stock actual es: " << stock << std::endl;
}
