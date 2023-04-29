#include <iostream>

template<typename T>
class Vector
{
public:
    Vector()
    {
        std::cout << "a" << std::endl;
    }
};

template<>
class Vector<bool>
{
public:
    Vector()
    {
        std::cout << "bool" << std::endl;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
