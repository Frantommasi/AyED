#include <iostream>
#include <iomanip>  // Para formatear la salida con precisión decimal

using namespace std;

int main() {
    double pi = 0.0;
    int n = 0;
    int sign = 1;
    
    while (true) {
        // Calcular el término actual de la serie
        double term = 4.0 / (2 * n + 1);
        
        // Actualizar el valor de pi
        if (sign == 1) {
            pi += term;
        } else {
            pi -= term;
        }
        
        // Cambiar el signo para el próximo término
        sign *= -1;
        
        // Verificar si tenemos al menos 6 decimales correctos
        if (abs(pi - 3.141592) < 0.000001) {
            break;
        }
        
        // Incrementar el contador
        n++;
    }
    
    cout << "El valor de pi calculado es: " << fixed << setprecision(6) << pi << endl;
    
    return 0;
}
