#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Number1 => ");
    scanf("%d", &a);
    getchar();
    printf("Number2 => ");
    scanf("%d", &b);
    getchar();
    switch(a > b)
    {
        case 1:
               printf("Answer => %d > %d", a, b);
               getchar();
               break;
        default:
               printf("Answer => %d > %d", b, a);
               getchar();
               break;
    }
    printf("Thank You");
    getchar();
}