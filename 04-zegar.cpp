#include <iostream>
#include <string>

struct czas
{
    int godz;
    int min;
    int sec;
    std::string to_string() const;
    void next_hour();
    void next_min();
    void next_sec();
};

std::string czas::to_string() const
{
    std::string Opis(std::to_string(godz) + ":" + std::to_string(min) + ":" + std::to_string(sec) + "\n");
    return Opis;
}

void czas::next_hour()
{
    if(godz == 23)
    {
        godz = 0;
    }
     else
    {
        godz++;
    }
}

void czas::next_min()
{
    if(min == 59)
    {
        godz++;
        min = 0;
    }
    else
    {
        min++;
    }
}

void czas::next_sec()
{
    if(sec == 59)
    {
        if(min == 59)
        {

            min = 0;

            if(godz == 23)
            {

                godz = 0;
                
            }
            else
            {
                godz++;
                
            }
        }
        else
        {
            min++;
        }
        
        sec = 0;
       
    }
    else
    {
        sec++;
    }
}

auto main() -> int
{
    czas godzina
    {
        23,
        59,
        58
    };
    for (int i = 0; i < 4; i++)
    {
        std::string opis(godzina.to_string());
        std::cout << opis;
        godzina.next_sec();
    }
    


return 0;
}

