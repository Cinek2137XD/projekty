#include <iostream>
#include <string>

auto pytanie(std::string tresc) -> std::string 
{
    std::string a;
    std::cout << tresc << ": ";
    std::cin >> a;
    return a;
}


auto main() ->int
{
std::string podane_haslo,haslo;
haslo = "student";

	do {

	podane_haslo = pytanie("Podaj Haslo");

	} while (haslo != podane_haslo);

	std::cout << "Podane haslo jest poprawne.\n";

}








