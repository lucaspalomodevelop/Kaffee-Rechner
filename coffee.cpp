#include <iostream>
#include <string>
#include <tuple>
using namespace std;

enum KaffeeSorte
{
    Arabica = 1,
    Robusta = 2,
    Espresso = 3,
    Americano = 4,
    Cappuccino = 5,
    Latte = 6,
    Mocha = 7,
};

std::tuple<string, int> get_markenname_und_koffeingehalt(KaffeeSorte sorte)
{
    int Koffeingehalt;
    string markenname;
    int sorte_id;

    cout << "Folgende Kaffeesorten stehen zur Verfügung:\n";
    cout << "[1] Arabica\n[2] Robusta\n[3] Espresso\n[4] Americano\n[5] Cappuccino\n[6] Latte\n[7] Mocha\ninput: ";
    cin >> sorte_id;

    switch (sorte)
    {
    case Arabica:
        Koffeingehalt = 80;
        markenname = "Arabica";
        break;
    case Robusta:
        Koffeingehalt = 100;
        markenname = "Robusta";
        break;
    case Espresso:
        Koffeingehalt = 70;
        markenname = "Espresso";
        break;
    case Americano:
        Koffeingehalt = 60;
        markenname = "Americano";
        break;
    case Cappuccino:
        Koffeingehalt = 40;
        markenname = "Cappuccino";
        break;
    case Latte:
        Koffeingehalt = 30;
        markenname = "Latte";
        break;
    case Mocha:
        Koffeingehalt = 50;
        markenname = "Mocha";
        break;
    default:
        break;
    }

    return std::make_tuple(markenname, Koffeingehalt);
}

int coffeeMain()
{
    int kaffee, Koffeingehalt, sorte, kmenge, ergebnis;
    string input;
    string markenname;

    cout << "        (  )   (   )  )\n";
    cout << "     ) (   )  (  (\n";
    cout << "     ( )  (    ) )\n";
    cout << "\n";
    cout << "     _____________\n";
    cout << "    <_____________> ___\n";
    cout << "    |             |/ _ \\ \n";
    cout << "    |               | | |\n";
    cout << "    |               |_| |\n";
    cout << " ___|             |\\___/\n";
    cout << "/    \\___________/    \\ \n";
    cout << "\\_____________________/\n";

    cout << "Dieser Rechner weiß wie viel Kaffee du am Tag brauchst!\nkennst du die Anzahl? J/N\ninput:";
    cin >> input;
    if (input == "J" || input == "j")
    {
        system("clear");
        cout << "****************************************************************\n"
             << "* [i] Bitte gib die Anzahl der Tassen Kaffee an, die du brauchst *\n"
             << "****************************************************************\n\n"
             << "input: ";
        cin >> kaffee;
        if (kaffee < 2)
        {
            cout << "Für einen erfolgreichen Tag benötigst du mehr als 1 Tasse Kaffee";
            return 0;
        }

        std::tuple<string, int> marke = get_markenname_und_koffeingehalt(KaffeeSorte::Espresso);

        Koffeingehalt = std::get<1>(marke);
        markenname = std::get<0>(marke);

        cout << "du brauchst " << kaffee << " Tassen Kaffee!!!\n"
             << "der Koffeingehalt für deine " << kaffee << " Tassen liegt bei " << Koffeingehalt << " mg.\n\n"
             << "Ein Hyperbel sagte: du brauchst immer eine Tasse Kaffee mehr als du hast\n\n"
             << "--------------------------------[Hinweis]--------------------------------\n"
             << "Bitte Beachte: Erhöhter Koffeingehalt. Für Kinder und schwangere oder stillende Frauen nicht empfohlen\n\n";
    }
    else if (input == "N" || input == "n")
    {
        system("clear");
        cout << "Bitte gebe an, wie viel Koffein du heute zu dir nehmen willst (in mg).\ninput: ";
        cin >> kmenge;
        std::tuple<string, int> marke = get_markenname_und_koffeingehalt(KaffeeSorte::Espresso);

        markenname = std::get<0>(marke);
        Koffeingehalt = std::get<1>(marke);

        ergebnis = kmenge / Koffeingehalt;
        cout << "Für deinen Tag benötigst du " << ergebnis << " Tassen " << markenname;
        cout << "\n";
        cout << "--------------------------------[Hinweis]--------------------------------\n";
        cout << "Bitte Beachte: Erhöhter Koffeingehalt. Für Kinder und schwangere oder stillende Frauen nicht empfohlen\n";
        cout << "\n";
    }
    else
        cout << "Error";

    return 0;
}

// int main()
// {
//     coffeeMain();
//     return 0;
// }
