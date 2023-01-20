/*
Vattenalger förökar sig så fort att de varje dygn FÖRDUBBLAR den area de täcker. Efter en dag täcker de en area av 1 kvadratdecimeter(1dm2), dvs 0.01 m2.
Sjön är ungefär 100 gånger 100 m stor, dvs dess area är 10 000 m2. Gör ett program som beräknar hur lång tid det tar innan sjön blir täckt i alger.
*/
#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    float algeaArea = 0.01;
    int lakeArea = 10000;
    int days = 1; 

    while (algeaArea < lakeArea)
    {
        // double the algea area
        algeaArea *= 2;
        // count up the number of days that has passed
        days++;
    }

    cout << "The lake will be covered within " << days << " days.\n\n";
    return 0;
}
