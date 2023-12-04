#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Boxes {
    int length;
    int width;
    int height;
} Box;

int main()
{
    int n;
    printf("Enter number of boxes being tested: \n");
    scanf("%d", &n);
    // int* ptr;
    // ptr= (int*)malloc(n*sizeof(int));
    Box arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter length of box %d:\n", i+1);
        scanf("%d", &arr[i].length);
        printf("Enter width of box %d:\n", i+1);
        scanf("%d", &arr[i].width);
        printf("Enter height of box %d:\n", i+1);
        scanf("%d", &arr[i].height);
    }
    int volume;
    for (int i=0;i<n;i++)
    {
        volume=0;
        if(arr[i].height<41)
        {
            volume=arr[i].height*arr[i].length*arr[i].width;
            printf("Volume of Box %d is %d. This box is able to pass.\n", i+1, volume);
        }
        else
        {
            printf("Box %d is unable to pass.\n", i+1);
        }
    }
}
