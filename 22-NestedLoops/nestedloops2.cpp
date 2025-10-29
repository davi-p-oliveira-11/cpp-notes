#include <iostream>

int main()
{
    int x, y, z;

    std::cout << "Enter size for X dimension: ";
    std::cin >> x;

    std::cout << "Enter size for Y dimension: ";
    std::cin >> y;

    std::cout << "Enter size for Z dimension: ";
    std::cin >> z;

    std::cout << "\nMultiplication table cube:\n";

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            for (int k = 1; k <= z; k++)
            {
                // Multiply all three indices
                std::cout << i * j * k << "\t";
            }
            std::cout << '\n'; // end of Z row
        }
        std::cout << '\n'; // end of Y block
    }

    return 0;
}
