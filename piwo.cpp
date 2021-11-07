#include <iostream>
#include <string>

auto pytanie(std::string tresc) -> int
{
    int a;
    std::cout << tresc << ": ";
    std::cin >> a;
    return a;
}

auto tekst(int a) -> int
{

	std::cout << a << " bottles of beer on the wall, "<< a <<" bottles of beer.\n";
	return 0;
}
auto tekst_min() -> int
{
	std::cout << "Take one down, pass it around, ";
	return 0;
}

auto tekst_zero() -> int
{
	std::cout << "No more bottles of beer on the wall, no more bottles of beer. Go to the store and buy some more, 99 bottles of beer on the wall...\n";
	return 0;
}
// dodać drukowanie 0 cyferki

auto main(int argc, char *argv[]) -> int
{
	int cyferka;
	
	//cyferka = pytanie("Podaj cyfre");
	if(argc == 1)
	{
		cyferka = 99;
	}
	else
	{
		cyferka = std::stoi(argv[1]);
	}
	
	for(cyferka >= 0; cyferka--;)
	{
		if(cyferka >0)
		{
			tekst(cyferka);
			tekst_min();
		}
		else if(cyferka == 0)
		{
			tekst_zero();
			//dodać co się dzieje gdy cyferka 0
		}
	}
	return 0;
}

