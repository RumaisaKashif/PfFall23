//Programmer: Rumaisa Kashif
//Date: 15/10/23
//Desc: factorial calculation using array
#include <stdio.h>
int main()
{
    int num;
    printf("enter number whose factorial you want to calculate:\n");
    scanf("%d", &num);
    int c=1;
    int arr[num];
    for (int i=0;i<num;i++)
    {
        arr[i]=c;
        c+=1;
    }
    int mul=1;
    for (int i=0;i<num;i++)
    {
        mul=mul*arr[i];
    }
    printf("%d! is: %d\n",num, mul);
}//end main
