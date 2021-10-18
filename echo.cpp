#include <iostream>
#include <string>

auto drukowane(std::string cotam) -> int
{


	std::cout << cotam;
}

auto main(int argc, char* argv[]) -> int
{
	if (argc == 0)
	{
		return 1;
	}
	else
	{
		if(argv[1] == "-r" || argv[2] == "-r" || argv[3] == "-r")
		{
			std::cout << argv[3] << " " << argv[2] << " "<< argv[3];
		} 
	}

}
