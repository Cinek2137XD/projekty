#include <iostream>
#include <string>
#include "04-Student.h"
/* 
struct Student
{
    std::string imie;
    std::string nazwisko;
    int index;
    short semestr;
    double srednia;
    std::string ToString() const;
};


std::string Student::ToString() const
{
    std::string Opis(imie + " " + nazwisko  + " (" + std::to_string(index) + "), " + "semestr " + std::to_string(semestr) + ": " + std::to_string(srednia));
    return Opis;
}
*/

auto main() -> int
{
    std::string kox;
    Student Marcin
    {
        "Marcin",
        "Kukus",
        25667,
        1,
        3.5
    };
    kox = Marcin.ToString();
    std::cout << kox;

    
    return 0;

}