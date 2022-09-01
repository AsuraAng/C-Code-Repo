#include <stdio.h>

int main()
{
    printf("The Array is : ");
    int arr[5] = {22, 21, 18, 19, 20};

    printf("{");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", *(arr + i));
    }
    printf("}\n");

    printf("The BUBBLE SORTED array is : ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }

    printf("{");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", *(arr + i));
    }
    printf("}\n");
    
    
    printf("The Array is : ");
    int arr2[5] = {22, 21, 18, 19, 20};

    printf("{");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", *(arr2 + i));
    }
    printf("}\n");

    printf("The INSERTION SORTED array is : ");
    int i, key, j;
    for (i = 1; i < 5; i++)
    {
        key = arr2[i];
        j = i - 1;

        while (j >= 0 && arr2[j] > key)
        {
            arr2[j + 1] = arr2[j];
            j = j - 1;
        }
        arr2[j + 1] = key;
    }

    printf("{");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", *(arr2 + i));
    }
    printf("}\n");

    return 0;
}