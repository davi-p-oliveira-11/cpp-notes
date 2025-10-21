#include <iostream>

int main()
{
    const double PI = 3.14159;
    const int LIGHT_SPEED = 23453244;
    const int WIDTH = 1930;
    const int HEIGHT = 1000;
    // PI = 420.69; This will cause an error
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}