#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
     int *b = new int[NELEMENTS]; //NELEMENTS helyett N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //' helyett " kell
    for (int i = 0;) // hibás a ciklus fejléce for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //i < N_ELEMENTS
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Ertek:" // nem írja ki az értéket csak azt hogy "Ertek:"
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //; helyett , kell
    {
        atlag += b[i] //sor végi ; hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
