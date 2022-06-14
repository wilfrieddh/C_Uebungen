#include <stdio.h>

int main()
{
    float milliseconds = 0.0F;
    float seconds = 0.0F;
    float minutes = 0.0F;
    float hours = 0.0F;
    float days = 0.0F;

    printf("Please enter a millisecond value: ");
    scanf("%f", &milliseconds);

    seconds = milliseconds / 1000.0F;
    minutes = seconds / 60.0F;
    hours = minutes / 60.0F;
    days = hours / 24.0F;

    printf("seconds: %.16f\n", seconds);
    printf("minutes: %.16f\n", minutes);
    printf("hours:   %.16f\n", hours);
    printf("days:    %.16f\n", days);

    return 0;
}
