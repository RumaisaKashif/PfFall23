#include<stdio.h>
#include<string.h>

// Function prototypes
int findmax(int i_min , int i_max,int j_min,int j_max, int n, int array[n][n]);
void matrix_for_2(int a[4]);
void matrix_for_4(int a[4]);
void matrix_for_8(int a[8]);


int findmax(int i_min , int i_max,int j_min,int j_max, int n, int array[n][n])
{
    int max=-99, i, j;
    for(i=i_min; i<i_max; i++)
	{
		for(j=j_min; j<j_max; j++)
		{
			if(array[i][j]>max)
			{
				max = array[i][j];
			}
		}
	}
return max;
} 

void matrix_for_2(int a[4])
{
	int array[2][2];
	int i, j, k=0, p;
	for(i=0; i<2; i++)
	{
		for(j=0;j<2;j++)
		{
			{
				array[i][j]=a[k];
				k++;
			}
		}
	}
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	int w=0, x=2, y=0, z=2, n=2;
	p = findmax(w, x, y, z, n, array);
	int max = p;
	printf("Max: %d ",max);
}

void matrix_for_4(int a[4]) 
{
    int array[4][4];
    int i, j, p;
    for(i=0; i<4; i++) 
	{
    	int k=0;
        for(j=0; j<4; j++) 
		{
            array[i][j]=a[k];
            k++;
        }
    }
    for(i=0; i<4; i++) 
	{
        for(j=0; j<4; j++) 
		{
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int w=0, x=2, y=0, z=2, n=4;
    p = findmax(w, x, y, z, n, array);
    int arr2[2][2];
    arr2[0][0] = p;
    w=0; x=2; y=2; z=4; n=4;
    p = findmax(w, x, y, z, n, array);
    arr2[0][1] = p;
    w=2; x=4; y=0; z=2; n=4;
    p = findmax(w, x, y, z, n, array);
    arr2[1][0] = p;
    w=2; x=4; y=2; z=4; n=4;
    p = findmax(w, x, y, z, n, array);
    arr2[1][1] = p;
    for(i=0; i<2; i++) 
	{
        for(j=0; j<2; j++) 
		{
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
}

void matrix_for_8(int a[8]) 
{
    int array[8][8], arr2[4][4];
    int i, j, p, w, x, y, z, n;
    for(i=0;i<8;i++) 
	{
    	int k=0;
    	int count=0;
        for(j=0;j<8;j++) 
		{
            array[i][j]=a[k];
            count++;
            k++;
            if(count==4)
            {
            	k=0;
			}
        }
    }
    for(i=0;i<8;i++) 
	{
        for(j=0;j<8;j++) 
		{
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    w=0, x=2, y=0, z=2, n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[0][0] = p;
    w=0; x=2; y=2; z=4; n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[0][1] = p;
    w=0; x=2; y=4; z=6; n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[0][2] = p;
    w=0; x=2; y=6; z=8; n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[0][3] = p;
    w=2, x=4, y=0, z=2, n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[1][0] = p;
    w=2; x=4; y=2; z=4; n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[1][1] = p;
    w=2; x=4; y=4; z=6; n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[1][2] = p;
    w=2; x=4; y=6; z=8; n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[1][3] = p;
    w=4, x=6, y=0, z=2, n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[2][0] = p;
    w=4; x=6; y=2; z=4; n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[2][1] = p;
    w=4; x=6; y=4; z=6; n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[2][2] = p;
    w=4; x=6; y=6; z=8; n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[2][3] = p;
    w=6, x=8, y=0, z=2, n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[3][0] = p;
    w=6; x=8; y=2; z=4; n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[3][1] = p;
    w=6; x=8; y=4; z=6; n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[3][2] = p;
    w=6; x=8; y=6; z=8; n=8;
    p = findmax(w, x, y, z, n, array);
    arr2[3][3] = p;
    for(i=0; i<4; i++) 
	{
        for(j=0; j<4; j++) 
		{
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    printf("Rumaisa Kashif\n23k-0744\n");
    int i;
    // Fixed array initialization based on nu id
    int a[4]={0, 7, 4, 4};
    // Interactive
    int choice;
    printf("Press:\n'1' for 2x2 matrix\n'2' for 4x4 matrix\n'3' for 8x8 matrix\n\n");
    scanf("%d", &choice);
    
    switch (choice) 
	  {
        case 1:
            matrix_for_2(a);
            break;
      
        case 2:
            matrix_for_4(a);
            break;
      
        case 3:
        	matrix_for_8(a);
        	break;
      
        default:
            printf("Invalid");
            break; 
    }
}//end main
