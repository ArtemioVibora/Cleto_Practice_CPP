#include <iostream>


template <typename T, size_t N>
int length(T (&)[N])
{
    return (int)(N);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    std::string arrStr[] = {"Hello", "World"};

    std::cout << "Length of an Array" << std::endl;
    std::cout << length(arr) << std::endl;
    std::cout << "Length of the String Array" << std::endl;
    std::cout << length(arrStr) << std::endl;

}
