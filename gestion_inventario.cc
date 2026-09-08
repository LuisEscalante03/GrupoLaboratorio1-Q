#include <iostream>



int main() {
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
}