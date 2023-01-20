/*
 Ett postnummer består av 5 siffror. Av dessa anger de två första siffrorna vilket distrikt det är fråga om.
 Om de två första siffrorna ligger i intervallet 20-62 eller om de är 65 eller 66, ligger distriktet i Götaland.
 Är de två första siffrorna större än eller lika med 80 så är distriktet Norrland.
 Övriga siffror betäcknar distrikt i Svealand. 
 Skriv ett program som läser in ett postnummer(5 siffror) och presentera om det ligger i Götaland, Norrland eller Svealand.
 Tips: Om du läser in postnummret som en long int och sedan dividerar det med 1 000(Heltalsdivison) får du värdet av de två första siffrorna.
    dvs tar bort de 3 sista nollorna.

*/
#include <stdio.h>

int main()
{
    int postalCode;
    int districtCode;
    printf("Enter a Swedish postal code: ");
    scanf("%d", &postalCode);
    // I'm not sure why you specified that a long int is needed. I've tried to break this but it seem to always work.
    districtCode = postalCode / 1000;
    
    /*
    This could work as a switch-case statement, but not in standard C (unless you want it to look messy).
    It's only possible because of the case range extention of the GNU C compiler.
    */
    if (districtCode == 65 || districtCode == 66 || (districtCode >= 20 && districtCode <= 62))
    {
        printf("The postal code %d is located in Götaland.\n\n", postalCode);
    }
    else if (districtCode >= 80)
    {
        printf("The postal code %d is located in Norrland.\n\n", postalCode);
    }
    else
    {
        printf("The postal code %d is located in Svealand.\n\n", postalCode);
    }
    
    return 0;
}
