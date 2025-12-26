#include <iostream>
#include <exception>

void enterCinema(int age)
{
    if (age < 18)
        throw std::exception();   // 🚨 STOP HERE

    std::cout << "Enjoy the movie 🎬" << std::endl;
}
int main()
{
    try
    {
        enterCinema(15);
        std::cout << "This line is NEVER executed" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Access denied ❌" << std::endl;
    }
}
