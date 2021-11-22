#include <iostream>
#include <string>
#include <thread>

void write(int grupa, int watek)
{
    std::cout << "Hello, " << grupa<<":"<<watek << "!\n";
} 
int main()
{
    std::thread A;
    for (int i = 1; i <= 7; i++)
    {
        for (int x = 1; x <= 6; x++)
        {
            A = std::thread{write, i,x};
            if (x == 6)
            {
                A.join();
            }
            else
            {
                A.detach();
            }
        }
    }
    return 0;
}