/*
 Programmer: Rumaisa Kashif
 Date: 4/11/2023
 Desc: Q1-airline
 */

#include <stdio.h>

int main() {
    int type;
    int seats[10] = {0};

    while (1) {
        char ans;
        printf("Type 1 for first class, Type 2 for economy class:\n");
        scanf("%d", &type);
        if (type != 1 && type != 2) {
            printf("Invalid input. Please enter 1 for first class or 2 for economy class.\n");
            continue;
        }

        if (type == 1) {
            int i = 0;
            while (i < 5) {
                if (seats[i] == 0) {
                    seats[i] = 1;
                    printf("Boarding Pass\nYour seat number is: %d\nYou have a first class seat.\n", i + 1);
                    break; //exit loop
                }
                i++;
            }

            if (i == 5) {
                printf("All seats in first class are booked. Would you like to switch to economy class? (yes=y, no=n)\n");
                while (1) {
                    scanf(" %c", &ans);
                    if (ans == 'y' || ans == 'n') {
                        break;
                    } else {
                        printf("Invalid input. Please enter 'y' for yes or 'n' for no.\n");
                    }
                }
                if (ans == 'n') {
                    printf("Next flight is in 3 hours\n");
                    break;
                } else if (ans == 'y') {
                    for (int k=5;k<10;k++)
                    {
                        if (seats[k]==0)
                        {
                            seats[k]=1;
                            printf("Boarding Pass\nYour seat number is: %d\nYou have an economy class seat.\n", k + 1);
                            break;
                        }
                    }
                }
            }
        } 
        else if (type == 2) {
            int j = 5; // Use a different counter
            while (j < 10) {
                if (seats[j] == 0) {
                    seats[j] = 1;
                    printf("Boarding Pass\nYour seat number is: %d\nYou have an economy class seat.\n", j+1);
                    break;
                }
                j++;
            }

            if (j == 10) {
                printf("All seats in economy class are booked. Would you like to switch to first class? (yes=y, no=n)\n");
                while (1) {
                    scanf(" %c", &ans);
                    if (ans == 'y' || ans == 'n') {
                        break;
                    } else {
                        printf("Invalid input. Please enter 'y' for yes or 'n' for no.\n");
                    }
                }
                if (ans == 'n') {
                    printf("Next flight is in 3 hours\n");
                    break;
                } else if (ans == 'y') {
                    for (int m=0;m<5;m++)
                    {
                        if (seats[m]==0)
                        {
                            seats[m]=1;
                            printf("Boarding Pass\nYour seat number is: %d\nYou have a first class seat.\n", m + 1);
                            break;
                        }
                    }
                }
            }
        }
    }
}//end main
