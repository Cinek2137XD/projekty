#include <string>
#include <iostream>

auto pytanie(std::string prompt) -> int
{
        int n;
        std::cout << prompt << ": \n";
        std::cin >> n;
        return n;
}

auto dodawanie(int a, int b) -> int
{
    int c;
	c = a + b;
	return c;
}

auto mnozenie(int a,int b) -> int
{
	int c;
	c = a * b;
	return c;
}

auto odejmowanie(int a, int b) -> int
{
    int c;
    c = a - b;
    return c;
}

auto dzielenie(int a, int b) -> int
{
    int c;
    c = a / b;
    return c;
}

auto znak(std::string prompt) -> std::string
{
    std::string a;
    std::cout << prompt << ": \n";
    std::cin >> a;
    return a;
}

auto main() -> int
{
    int a,b,c;
    std::string dzialanie;
    while(true)
    {
    a = pytanie("podaj liczbe 1");
    b = pytanie("podaj liczbe 2");
    dzialanie = znak("jaki typ dzialania? (/,*,+,-)");
    
    if(dzialanie == "+")
    {
        c = dodawanie(a,b);
        std::cout << "wynik to: " << c << "\n";
    }
    else if( dzialanie == "-")
    {
        c = odejmowanie(a,b);
        std::cout << "wynik to: " << c << "\n";
    }
        
    else if(dzialanie == "*")
    {
        c = mnozenie(a,b);
        std::cout << "wynik to: " << c << "\n";
    }
    else if(dzialanie == "/")
    {
         if(b != 0)
        {
            c = dzielenie(a, b);
            std::cout << "wynik to: " << c << "\n";
        }
        else
        {
            std::cout << "Nie dziel przez 0 dzbanie.\n";
        }
    }
    else
    {
        std::cout << "Nieprawidlowy znak dzialania.\n";
    }
    }
    return 0;
}    