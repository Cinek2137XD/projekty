#include <iostream>
#include <string>

struct Student
{
    std::string imie;
    std::string nazwisko;
    int index;
    short semestr;
    double srednia;

    void ToString() const;
};

void Student::ToString() const
{
    std::cout << .imie << Imie.nazwisko << Imie.index << Imie.semestr << Imie.srednia;

}


auto main() -> int
{
    Student Marcin = 
    {
        "Marcin",
        "Kukus",
        25667,
        1,
        3.5
    };
    Student::ToString(Marcin) const;
    
    
    
    return 0;

}