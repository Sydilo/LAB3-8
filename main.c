#include <stdio.h>

int main() {
    float distance, time, speed;

    printf("Введіть шлях у (км): ");
    scanf("%f", &distance);

    printf("Введіть час у (год): ");
    scanf("%f", &time);

    speed = distance / time;

    printf("Швидкість: %.2f км/год\n", speed);

    return 0;
}
