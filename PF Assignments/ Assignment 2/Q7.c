/*
Programmer: Rumaisa Kashif
Description: Sorting shirt details by age and price
*/

#include <stdio.h>

void asc(float arr[][2]) {
    int n = 9;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j][0] > arr[j + 1][0]) {
                // Swap ages
                float tempAge = arr[j][0];
                arr[j][0] = arr[j + 1][0];
                arr[j + 1][0] = tempAge;

                // Swap prices
                float tempPrice = arr[j][1];
                arr[j][1] = arr[j + 1][1];
                arr[j + 1][1] = tempPrice;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int m = 0; m < 2; m++) {
            printf("%.2f\t", arr[i][m]);
        }
        printf("\n");
    }
}

int main() {
    float shirtDetails[9][2] = {
        {25, 15.99},
        {20, 20.49},
        {18, 22.99},
        {30, 17.99},
        {22, 23.99},
        {19, 19.99},
        {27, 16.49},
        {21, 24.99},
        {20, 18.49}
    };
    printf("Original price list:\nAge\t\tPrice\n");
    for (int i=0;i<9;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%.2f\t",shirtDetails[i][j]);
        }
        printf("\n");
    }
    printf("\nSorted list:\nAge\t\tPrice\n");
    asc(shirtDetails);
    return 0;
}//end main
