#include <stdio.h>
int gcd(int x, int y);

int main()
{
    int NUM1, NUM2, HCF, LCM;

    printf("\nENTER TWO NUMBERS: ");
    scanf("%d %d", &NUM1, &NUM2);

    HCF = gcd(NUM1, NUM2);
    printf("\n------------");
    printf("\nGCD: %d", HCF);
    printf("\n------------");
    printf("\nLCM: %d", (NUM1 * NUM2) / HCF);
    return 0;
}
int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}