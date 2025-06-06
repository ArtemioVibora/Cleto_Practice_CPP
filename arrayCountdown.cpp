#include <iostream>

int main()
{
    int input;
    std::cout << "What is your input: ";
    std::cin >> input;
    for (int i = input - 1; i >= 0; i--)
    {
        if (i == input - 1)
            std::cout << "In " << i + 1 << std::endl;
        else
            std::cout << i + 1 << std::endl;
    }

    std::cout << "lift off!" << std::endl;
}
