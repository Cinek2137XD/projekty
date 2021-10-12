#include <iostream>
#include <string>

auto pytanie(std::string tresc) -> int
{
    int a;
    std::cout << tresc << ": ";
    std::cin >> a;
    return a;
}

auto licz_trojkat(int a, int b) -> double
{
    double c;
    c = (a * b) / 2;
    return c;
}

auto licz_kwadrat(int a, int b) -> double
{
    double c;
    c = a * b;
    return c;
}

auto licz_trapez(int a, int b,int h) -> double
{
    double c;
    c = (a+b)*h/2;
    return c;
}

auto main() -> int
{
    int a,b,h,wybor;
    double wynik;
    std::string wybor_str;
    
    std::cout << "Jaka figure chcesz obliczyc?(wpisz cyfre)\n 1.Trojkat\n 2.Kwadrat\n 3.Trapez\n: ";
    std::cin >> wybor_str;
    wybor = std::stoi(wybor_str);
    switch(wybor)
    {
        case 1:
        a = pytanie("Podaj Bok no.1 ");
        b = pytanie("Podaj Bok no.2 ");
        wynik = licz_trojkat(a,b);
        std::cout << "Pole wynosi: " << wynik;
        break;

        case 2:
        a = pytanie("Podaj Bok no.1 ");
        b = pytanie("Podaj Bok no.2 ");
        wynik = licz_kwadrat(a,b);
        std::cout << "Pole wynosi: " << wynik;
        break;

        case 3:
        a = pytanie("Podaj Bok no.1 ");
        b = pytanie("Podaj Bok no.2 ");
        h = pytanie("Podaj wysokosc ");
        wynik = licz_trapez(a,b,h);
        std::cout << "Pole wynosi: " << wynik;
        break;
    }
    return 0;
}