#include <iostream>
#include <cmath>

using namespace std;
/*
double mitternachtsformel(double a, double b, double c)
{
double a;
double v;
std::cout << "a = " << std::flush;
std::cin >> a;
return v;
} */

int main()
{
    double nst1;
    double nst2;
    double root;
    double a;
    double b;
    double c;
    std::cout << "a = " << std::flush;
    std::cin >> a;
    std::cout << "b = " << std::flush;
    std::cin >> b;
    std::cout << "c = " << std::flush;
    std::cin >> c;

    root = sqrt(b*b - 4*a*c);
    nst1 = (-b + root)/2*a;
    nst2 = (-b - root)/2*a;

    std::cout << "Nullstelle 1:" << nst1 << std::endl;
    std::cout << "Nullstelle 2:" << nst2 << std::endl;

    return 0;
}
