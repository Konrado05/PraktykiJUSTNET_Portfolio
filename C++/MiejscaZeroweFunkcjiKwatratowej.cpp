#include <iostream>
#include <cmath>

using namespace std;

double a=0, b=0, c=0, p=0, q=0, xj, xd, delta, im=0;
char choose;

double wyroznik()
{
    delta=pow(b, 2)-(4*a*c);
    if (delta>0)
    {
        im=2;
    }
    else if (delta==0)
    {
        im=1;
    }
    else if (delta<0)
    {
        im=0;
    }

    return delta;
}

double miejscePierwsze()
{
    xj=(-b-sqrt(delta))/(2*a);
    return xj;
}

double miejsceDrugie()
{
    xd=(-b+sqrt(delta))/(2*a);
    return xd;
}

double miejsceJedyne()
{
    xj=(0-b)/(2*a);
    return xj;
}

double policzB()
{
    b=(-1)*(p*2*a);
    return b;
}

double policzC()
{
    c=pow(p, 2)*a+q;
    return c;
}

int main()
{
    cout << "Witaj! Ten program poda miejsca zerowe twojej funkcji kwadratowej." << endl;
    cout << "Na pocz¥tku okresl jak¥ postac funkcji kwadratowej chcesz wprowadzic:" << endl;
    cout << "-----------------------" << endl;
    cout << "1. Posta† og¢lna [ax^2 + bx + c]" << endl;
    cout << "2. Posta† kanoniczna [a(x-p)^2 + q]" << endl;
    cout << "3. Posta† iloczynowa [a(x-x1)(x-x2)]" << endl << endl;
    cin >> choose;
    cout << endl;

    switch(choose)
    {
    case '1':
        cout << "Wprowadz a, b i c" << endl;
        cout << "a: "; cin >> a;
        cout << "b: "; cin >> b;
        cout << "c: "; cin >> c; cout << endl;

        cout << "Twoja delta wynosi: " << wyroznik() << endl;
        cout << "Ilo˜† miesc zerowych w twojej funkcji to " << '"' << im << '"' << endl << endl;

        if (im==2)
        {
            cout << "Pierwszym miejscem zerowym jest x=" << miejscePierwsze() << ", a drugim x=" << miejsceDrugie() << '.' << endl;
        }
        else if (im==1)
        {
            cout << "Miejscem zerowym w twojej funkcji jest x=" << miejsceJedyne << '.' << endl;
        }


    break;
    case '2':
        cout << "Wprowadz a, p i q" << endl;
        cout << "a: "; cin >> a;
        cout << "p: "; cin >> p;
        cout << "q: "; cin >> q; cout << endl;

        cout << "Po zamianie funkcji na posta† og¢ln¥, b wynosiˆoby " << '"' << policzB() << '"' << endl;
        cout << "Natomiast, c wynosiˆoby " << '"' << policzC() << '"' << endl << endl;

        cout << "Twoja delta wynosi: " << wyroznik() << endl;
        cout << "Ilo˜† miesc zerowych w twojej funkcji to " << '"' << im << '"' << endl << endl;

        if (im==2)
        {
            cout << "Pierwszym miejscem zerowym jest x=" << miejscePierwsze() << ", a drugim x=" << miejsceDrugie() << '.' << endl;
        }
        else if (im==1)
        {
            cout << "Miejscem zerowym w twojej funkcji jest x=" << miejsceJedyne << '.' << endl;
        }
    break;
    case '3':
        cout << "Wprowadz x1 i x2" << endl;
        cout << "x1: "; cin >> xj;
        cout << "x2: "; cin >> xd; cout << endl;

        if (xj==xd)
        {
            cout << "Ilo˜† miesc zerowych w twojej funkcji wynosi " << '"' << "1" << '"' << endl;
            cout << "Miejscem zerowym w twojej funkcji jest x=" << xj << '.' << endl;
        }
        else if (im!=xd)
        {
            cout << "Ilo˜† miesc zerowych w twojej funkcji wynosi " << '"' << "2" << '"' << endl;
            cout << "Pierwszym miejscem zerowym jest x=" << xj << ", a drugim x=" << xd << '.' << endl;
        }
    break;
    default: cout << "Wybrano zˆ¥ opcj©...";
    }

    cout << endl << endl << endl << "Wci˜nij " << '"' << "Enter" << '"' << ", aby zakoäczy†.";
    getchar();getchar();

    return 0;
}
