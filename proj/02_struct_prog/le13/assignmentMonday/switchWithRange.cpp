/*
2: En operatör för mobiltelefoni erbjuder tre olika abonnemang: Kontant, Normal och Plus.
 Om man jämnför villkoren för abonnemangen visar det sig att abonnemanget kontant är billigast om man ringer högst 33 minuter per månad.
 Normal lönar sig bäst om man ringer mellan 33 minuter och 66 minuter per månad och plus är mest förmånligt om man ringer ännu mer.
 Skriv ett program som läser in antalet minuter man uppskattar  att man kommer att ringa per månad.  Programmet ska tala om vilket abbonemang man bör välja.
*/

#include <iostream>

using namespace std;
 
int main()
{
    int minutes;
    cout << "How many minutes per month do you estimate you will use? ";
    cin >> minutes;
    
    switch (minutes)
    {
        case 0 ... 33:
            cout << "You should choose 'Kontant'.";
            break;
        case 34 ... 66:
            cout << "You should choose 'Normal'.";
            break;
        default:
            cout << "You should choose 'Plus'.";
    }
    cout << "\n\n";

    return 0;
}
 