#include <iostream>
#include <string>

auto tekst(int a) -> int
{

	std::cout << a << " bottles of beer on the wall, "<< a <<"bottles of beer.\n";
	return 0;
}
auto tekst_min(int a) -> int
{
	std::cout << "Take one down, pass it around, ";
	return 0;
}
// dodać drukowanie 0 cyferki

auto main(int cyferka) -> int
{
	if(cyferka == 0)
	{
		cyferka = 99
	}
	for(cyferka >= 0; cyferka--)
	{
		if(cyferka >0)
		{
			tekst(cyferka);
			text_min();
		}
		else if(cyferka == 0)
		{
			//dodać co się dzieje gdy cyferka 0
		}
	}
	return 0;
}

