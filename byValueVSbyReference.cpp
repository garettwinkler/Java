#include <iostream>

void by_val(int arg) { arg += 2; }
void by_ref(int&arg) { arg += 2; }

int main()
{
    int x = 0;
    by_val(x); std::cout << x << std::endl;  // prints 0
    by_ref(x); std::cout << x << std::endl;  // prints 2

    int y = 0;
    by_ref(y); std::cout << y << std::endl;  // prints 2
    by_val(y); std::cout << y << std::endl;  // prints 2
}
