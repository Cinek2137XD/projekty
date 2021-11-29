#include <iostream>
#include <string>
#include <thread>

void write(int tekst)
{
    std::cout << "Hello, " << tekst << "!\n";
} 

auto main() -> int
{
    std::thread t;
    for (int i = 1; i <= 42 ; i++)
    {
        t = std::thread{write, i};
        if (i == 42)
        {
            t.join();

        }
        else
        {
            t.detach();
        }
        
    }
    return 0;
}