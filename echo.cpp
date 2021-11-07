#include <iostream>
#include <string>

auto drukowane(std::string cotam, int opcja) -> int
{
	
	switch (opcja)
	{
		
		case 1:  //normalne drukowanie
			std::cout << cotam << " "; 
		std::cout << "\n";
		break;

		case 2: //bez endl
			std::cout << cotam << " "; 
		break;

	}

	return 0;
}




auto main(int argc, char* argv[]) -> int
{
	std::string no_endl,reverse,single;
	no_endl = "-n";
	reverse = "-r";
	single = "-l";
	if (argc == 1)
	{
		return 0;
	}
	else
	{
		switch(argc)
		{
			case 2:
				if (no_endl == argv[1])
				{
					drukowane(no_endl, 2);
				}
				else if (reverse == argv[1])
				{
					drukowane(reverse, 1);
				}
				else
				{
					drukowane(single, 1);
				}

				break;
			case 3:
				if (no_endl == argv[1])
				{
					drukowane(argv[1], 2);
					drukowane(argv[2], 2);
				}
				else if (reverse == argv[1])
				{
					drukowane(argv[2], 2);
					drukowane(argv[1], 1);
				}
				else
				{
					drukowane(argv[1], 1);
					drukowane(argv[2], 1);
				}
				break;
			case 4:
				if (no_endl == argv[1])
				{
					drukowane(argv[1], 2);
					drukowane(argv[2], 2);
					drukowane(argv[3], 2);
				}
				else if (reverse == argv[1])
				{
					drukowane(argv[3], 2);
					drukowane(argv[2], 2);
					drukowane(argv[1], 1);
				}
				else
				{
					drukowane(argv[1], 1);
					drukowane(argv[2], 1);
					drukowane(argv[2], 1);
				}
				break;	
		}

		return 0;
	}

}




/// 