#include <iostream>
#include <iomanip> 
#include "mytemperature.h" 
using namespace std;

int main()
{
    double cel = 40.0;  
    double fah = 120.0; 
    cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << fixed;
        cout << setprecision(1) << cel << "\t"
            << setprecision(1) << cel_to_fah(cel) << "\t\t|\t";
        cout << setprecision(1) << fah << "\t\t"
            << setprecision(2) << fah_to_cel(fah) << endl;
        cel = cel - 1.0;   
        fah = fah - 10.0;  
    }
    return 0;
}