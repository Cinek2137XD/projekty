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
