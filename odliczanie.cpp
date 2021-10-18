#include <iostream>
#include <string>

auto pytanie(std::string tresc) -> int
{
    int a;
    std::cout << tresc << ": ";
    std::cin >> a;
    return a;
}

auto main() -> int
{

	int a;
	a = pytanie("Podaj liczbe zaczynającą");
	for (a; a > -1; a-- )
	{
		std::cout << a << "...\n";
	}

}
