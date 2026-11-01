#include <stdio.h>
int main(void)
{
    int a, b, s;
    printf("请输入两个数:");
    scanf("%d%d", &a, &b);
    s = a + b;
    printf("两数之和为:%d", s);
    return 0;
}