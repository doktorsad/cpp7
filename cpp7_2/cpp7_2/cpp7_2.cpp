#include <iostream>
#define SUB(x,y) ((x) - (y))



int main()
{
    int x = 20;
    int y = 5;
    int c = 2;
    std::cout << SUB(x, y) <<'\n';
    std::cout << SUB(x, y) * c <<'\n';
    std::cout << SUB(x, y + c) * c << '\n';
    return 0;
}

