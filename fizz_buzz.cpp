#include <iostream>
#include <string>

auto pytanie(std::string tresc) -> int
{
    int a;
    std::cout << tresc << ": ";
    std::cin >> a;
    return a;
}

auto podzielne_5(int a) -> bool
{
if (a%5 == 0)
	{
	return true;
	}
else
	{
	return false;
	}
}

auto podzielne_3(int a) -> bool 
{
if (a%3 == 0)
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
int input;

input = pytanie("Podaj liczbe");
for(int i = 1; i <= input; i++)
	{
	if(podzielne_5(i) && podzielne_3(i))
		{
		std::cout << i << " FizzBuzz\n";
		}
	else if(podzielne_3(i))
		{
		std::cout << i << " Fizz\n";
		}
	else if(podzielne_5(i))
		{
		std::cout << i << " Buzz\n";
		}
	}
return 0;
}


