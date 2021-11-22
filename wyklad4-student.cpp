#include <iostream>
#include <string>

struct student
{
    std::string imie;
    std::string nazwisko;
    int numer_indeksu;
    double srednia;
    auto to_string() const -> std::string;
};

auto student::to_string(struct student marcin) const -> std::string
{
    std::string Pelny;
    Pelny = ("Imię: " + imie + "\n" + "Nazwisko: " + nazwisko + "\n"  "Indeks: " + numer_indeksu + "\n" + "Średnia: " + srednia + "\n");
    return Pelny;
}
auto main() -> int
{
    student marcin { "Marcin", "Kukus", 25667, 2.4};
    
    std::cout << student::to_string;
    
    return 0;
}