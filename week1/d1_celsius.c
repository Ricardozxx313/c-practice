#include <stdio.h>
int main(void)
{
    double celsius, fahrenheit;
    printf("请输入摄氏度:");
    scanf("%lf", &celsius);
    fahrenheit = celsius * (9.0 / 5.0) + 32;
    printf("华摄氏度为%.1f", fahrenheit);
}