#include <iostream>

int main()
{
    //Вариант 5 (Объём прямоугольного параллелепипеда)
    int A, B, C;
    std::cin >> A >> B >> C;

    std::cout << "Var5: V = " << A*B*C << std::endl;

    // //Вариант 1
    // int p = (A+B+C)/2;

    // std::cout << "Var1: S (Geron) = " << sqrt(p * (p - A) * (p - B) * (p - C)) << std::endl;

    // //Вариант 2
    // int h, a;
    // std::cin >> h >> a;

    // std::cout << "Var2: S = " << a * h / 2 << std::endl;

    // //Вариант 3
    // int A1, B1;
    // std::cin >> A1 >> B1;

    // std::cout << "Var2: S = " << A1 * B1 / 2 << std::endl;
}