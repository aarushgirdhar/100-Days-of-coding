#include <stdio.h>

int main()
{
    long total_seconds;
    long hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%ld", &total_seconds);

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("%ld:%02ld:%02ld\n", hours, minutes, seconds);

    return 0;
}