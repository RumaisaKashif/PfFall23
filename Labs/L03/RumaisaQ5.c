//Program to find fuel consumption based on total distance covered
//Rumaisa Kashif
//23K0744

#include <stdio.h>
#include <math.h>
int main()
{
    printf("Lets find the total distance travelled and the fuel consumption provided that fuel is 2km/ltr:\n");
    printf("enter distance travelled north in km:\n");
    int n;
    scanf("%d", &n);
    printf("enter distance travelled south in km:\n");
    int s;
    scanf("%d", &s);
    printf("enter distance travelled west in km:\n");
    int w;
    scanf("%d", &w);
    printf("enter distance travelled east in km:\n");
    int e;
    scanf("%d", &e);
    int total;
    total=n+s+w+e;
    printf("total distance travelled is: %d\n", total);
    int fuel;
    fuel=total*2;
    printf("total fuel consumption is: %d\n", fuel);
}



