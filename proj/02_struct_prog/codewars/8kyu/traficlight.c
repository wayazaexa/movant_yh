/*
    .
*/
#include <stdio.h>

enum light {GREEN, YELLOW, RED};

enum light update_light (enum light light);

int main()
{
    enum light light = GREEN;
    printf("Light enum value: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", light);
        light = update_light(light);
    }
    return 0;
}

enum light update_light (enum light light)
{
    switch (light) {
        case GREEN:
            return YELLOW;
        case YELLOW:
            return RED;
        case RED:
            return GREEN;
    }
}
