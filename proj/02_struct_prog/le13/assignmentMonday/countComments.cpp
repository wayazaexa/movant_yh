/*
Skriv ett program som läser in en textfil som innehåller ett C-program. Programmet skall fråga efter filens namn.
Programmet skall undersöka vilka rader i filen som innehåller kommentarer dvs //.
Programmet skall skriva ut hur många // tecken som hittats och presentera det värdet.
Tips: Standardfunktionen strstr kan vara användbar.
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string filename;
    string line;

    cout << "Enter the name of a C++-program (I suggest whileLoop.cpp): ";
    getline(cin, filename);
    ifstream inFile(filename);
    int counter = 0;

    while (getline(inFile, line))
    {
        if (line.find("//") != string::npos)
            counter++;
    }

    cout << "The amount of line-comments in the file is: " << counter << "\n\n";

    inFile.close();
    return 0;
}
