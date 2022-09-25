/*
Ta input från användaren vilken kategori hen tillhör.
Kategori 0 = Barn under 2 år pris = 0 kr.
1: Barn under 12 år pris = 3145.
2: Vuxen. Pris = 4295.
3: Pensionär. Pris = 3795.

Programmet ska ska se ut som nedan:

Kategori 0 - Barn under 2 år
Kategori 1 - Barn under 12 år
Kategori 2 - Vuxen
Kategori 3 - Pensionär
Vilken Kategori tillhör du? 2
Pris: 4295 kr

Använd dig av en switch sats och Lycka till.

*/
#include <stdio.h>

int main()
{
    int category;
    printf("Kategori 0 - Barn under 2 år\n");
    printf("Kategori 1 - Barn under 12 år\n");
    printf("Kategori 2 - Vuxen\n");
    printf("Kategori 3 - Pensionär\n");
    printf("Vilken Kategori tillhör du? ");
    scanf("%d", &category);

    switch (category)
    {
        case 0:
            printf("Pris: 0 kr.\n\n");
            break;
        case 1:
            printf("Pris: 3145 kr.\n\n");
            break;
        case 2:
            printf("Pris: 4295 kr.\n\n");
            break;
        case 3:
            printf("Pris: 3795 kr:\n\n");
        default:
            printf("Här borde du inte hamna!\n\n");
    }
    return 0;
}
