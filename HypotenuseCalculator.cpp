#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "What's the size of side A?: ";
    std::cin >> a;

    std::cout << "What's the size of side B?: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Side C is " << c;

    return 0;
}