#include <iostream>
#include <iomanip>
#include <cmath>

const float PI = 3.141592;

int main(void)
{
    float sum = 0;
    float aux;
    size_t count = 0;

    std::cout << std::fixed;
    std::cout << std::setprecision(6);

    {
        aux = pow(-1,count)/((2 * count) + 1);
        sum += aux;
        count++;
    }

    std::cout << "Llegamos al resultado en " << count << " iteracciones." << std::endl;
    std::cout <<"Resultado: " << (4 * sum) << std::endl;

    return 0;
}