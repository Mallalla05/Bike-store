#include "Bicicleta.h"
#include "Accesorio.h"
#include "Refaccion.h"
#include "Ropa.h"
#include "Calzado.h"

int main() {
    // Crear instancias de cada clase
    Accesorio accesorio("Luz LED", 15.99, "Iluminación");
    Refaccion refaccion("Llanta de repuesto", 29.99, "Llanta1");
    Ropa ropa("Chaqueta reflectante", 49.99, "Chaqueta");
    Calzado calzado("Zapatillas deportivas", 59.99, "Deportivo");

    // Crear bicicleta con una llanta específica
    Bicicleta bicicleta("Bicicleta de montaña", 299.99, "Montaña");

    // Mostrar detalles de cada objeto
    std::cout << "Detalles del accesorio:" << std::endl;
    accesorio.mostrarDetalles();
    std::cout << std::endl;

    std::cout << "Detalles de la refacción:" << std::endl;
    refaccion.mostrarDetalles();
    std::cout << std::endl;

    std::cout << "Detalles de la ropa:" << std::endl;
    ropa.mostrarDetalles();
    std::cout << std::endl;

    std::cout << "Detalles del calzado:" << std::endl;
    calzado.mostrarDetalles();
    std::cout << std::endl;

    std::cout << "Detalles de la bicicleta:" << std::endl;
    bicicleta.mostrarDetalles();

    return 0;
}