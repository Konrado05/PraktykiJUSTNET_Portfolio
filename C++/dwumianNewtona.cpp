#include <iostream>

using namespace std;

int n, k;
double a;
int silnia=1;

double liczydlo(double l, double x) //funkcja
{
    int i;

    for(i=1; i<=l; i++)
    {
        x = x*i;

    }
    return x; //koniec funkcji
}

int main()
{
    cout << " +----------------------------------------+" << endl;
    cout << " | Autor: Konrad Skurpel                  |" << endl;
    cout << " | Data utworzenia: 2020-12-13            |" << endl;
    cout << " +----------------------------------------+" << endl;
    cout << endl << endl;

    for(;;)
    {
        //wprowadzanie liczby "n"
    cout << "wprowadz pierwszy element dwumianu (n): ";
    cin >> n;

        //wprowadzanie liczby "k"
    cout << "wprowadz drugi element dwumianu (k): ";
    cin >> k;

        //obliczanie dwumianu-skierowanie do funkcji
    a=(liczydlo(n, silnia)/(liczydlo(k, silnia)*liczydlo(n-k, silnia)));

        //wynik
    cout << endl << "Wynik to: " << a << endl << endl << endl;

    }

    return 0;
}
