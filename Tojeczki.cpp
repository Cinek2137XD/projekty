#include <iostream>
#include <string>
#include <cmath>

auto pytanie(std::string tresc) -> int
{
    int a;
    std::cout << tresc << ": ";
    std::cin >> a;
    return a;
}

auto grek(int a, int b, int c) ->bool
{
    if(pow(a,2) + pow(b,2) == pow(c,2))
    {
        return true;
    }
    else if(pow(c,2) - pow(a,2)  == pow(b,2))
    {
        return true;
    }
    else if (pow(c,2) - pow(b,2)  == pow(a,2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

auto main() -> int
{
    int a,b,c;

    a = pytanie("Podaj 1 bok");
    b = pytanie("Podaj 2 bok");
    c = pytanie("Podaj 3 bok");
    if(a > 0 && b > 0 && c > 0)
    {

        if(grek(a,b,c))
        {
            std::cout << "Jest jest to trojkat prostokatny.\n";
        }
        else
        {
            std::cout << "nie jest to trojkat prostokatny.\n";
        }
    }
    else
    {
        std::cout << "Bok nie może być tej długości\n";
    }

}
