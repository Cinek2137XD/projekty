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

    auto operator + ( czas const &) const -> czas ;
    auto operator - ( czas const &) const -> czas ;
    auto operator < ( czas const &) const -> bool ;
    auto operator > ( czas const &) const -> bool ;
    auto operator == ( czas const &) const -> bool ;
    auto operator != ( czas const &) const -> bool ;

    auto count_seconds () const -> uint64_t ;
    auto count_minutes () const -> uint64_t ;
    auto time_to_midnight () const -> czas ;

    /*
    enum class Time_of_day 
    { 
     Rano,
     Dzien,
     Wieczor,
     Noc
    };

 
    auto time_of_day() const -> Time_of_day;
    auto to_string(Time_of_day) -> std::string;
    */
};

auto czas::time_to_midnight() const -> czas
{
    czas pozostalo;
    czas mid 
    {
        24,
        60,
        60
    };
    pozostalo.godz = mid.godz - godz;
    pozostalo.min = mid.min - min;
    pozostalo.sec = mid.sec - sec;
    return pozostalo;
}

auto czas::count_minutes() const -> uint64_t
{
    int minelo;
    minelo = (godz * 60) + min;
    return minelo;
}
auto czas::count_seconds() const -> uint64_t
{
    int minelo;
    minelo = (count_minutes() * 60) + sec;
    return minelo;
}

auto czas::operator+ (czas const& c) const -> czas
{
    czas wynik;
    wynik.godz = (this->godz + c.godz);
    wynik.min = (this->min + c.min);
    wynik.sec =  (this->sec + c.sec);
    if (wynik.godz > 23) wynik.next_hour();
    if (wynik.min > 59) wynik.next_min();
    if (wynik.sec > 59) wynik.next_sec();
    return wynik;
}

auto czas::operator - (czas const &c) const -> czas
{
    czas wynik;
    wynik.godz = (this->godz - c.godz);
    wynik.min = (this->min - c.min);
    wynik.sec = (this->sec - c.sec);

    if(wynik.godz> 23) wynik.godz=0;
    if(wynik.min> 59) 
    {
        wynik.next_hour();
        wynik.min=0;
    }
    if(wynik.sec> 59)
    {
        wynik.next_min();
        wynik.sec=0;
    }
    return wynik;
}

auto czas::operator== (const czas &c) const ->bool
{
    if (c.godz == godz && c.min == min && c.sec == sec) return true;
    return false;
}

auto czas::operator< (const czas &c) const -> bool
{
  if (c.godz < godz) return false ;
  if (c.min < min) return false ;
  if (c.sec < sec) return false ;

  return true ;
}
auto czas::operator> (const czas &c) const -> bool
{
    if (c.godz < godz) return true;
    if (c.min < min) return true;
    if (c.sec < sec) return true;
    return false;
}
auto czas::operator!= (const czas &c) const -> bool
{
    if (c.godz != godz)
    {
        if (c.min != min)
        {
            if (c.sec != sec)
            {
                return true;
            }
            return false;
        }
        return false;
    }
    return false;
    
}


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
        next_hour();
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
        next_min();
        sec = 0;
       
    }
    else
    {
        sec++;
    }
}

auto main() -> int
{
    std::string opis;
    czas wynik;
    czas godzina
    {
        23,
        59,
        58
    };
    czas opek
    {
        1,
        0,
        0
    };
    
    for (int i = 0; i < 4; i++)
    {
        std::string opis(godzina.to_string());
        std::cout << opis;
        godzina.next_sec();
    }
    
    wynik = godzina + opek;
    opis = wynik.to_string();
    std::cout << "wynik dodania jednej godzny: " << opis << "\n";

    wynik = godzina - opek;
    
    opis = wynik.to_string();
    std::cout << "Wynik odjęcia jednej godziny: " << opis << "\n";

return 0;
}

