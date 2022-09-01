// 1. Store the name of the students his marks in six subjects and Calculate the average and print Grade in individual subject ;

// #include <stdio.h>

// void main()
// {
//     char arr_name[75];

//     printf("Enter the name of the student : ");
//     fgets(arr_name, 75, stdin);
//     printf("%s", arr_name);

//     int arr_marks[6];
//     int average = 0;
//     int i = 0, j = 0;

//     printf("Enter the Marks of the students : ");
//     for (int i = 0; i < 6; i++)
//     {
//         scanf("%d", (arr_marks + i));
//     }

//     printf("The marks you entered are : ");
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d ", *(arr_marks + i));
//         average += *(arr_marks+i);
//     }
//     printf("\nThe Average Marks are : %d", average);
// }

// 2. Perform Scaler Multiplication of 2-D Array
// #include<stdio.h>

// void main()
// {
//     int matrix [3] [3];
//     int i , j ;
//     printf("Enter the Elements for the elements row-wise : \n");
//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             scanf("%d" , &matrix[i][j]);
//         }
//     }

//     printf("Enter the scaler quantity you would like to Multiply : ");
//     int n ;
//     scanf(" %d",&n);

//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             matrix[i][j] = matrix[i][j]*n;
//         }
//         printf("\n");
//     }

//     printf("The Matrix after Updatation : \n");

//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             printf(" %d" , matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// 3. Linear Search
// #include <stdio.h>

// void main()
// {
// printf("Enter the Number of Elements for the row : ");
// int n;
// scanf("%d", &n);
// int array[n];

// for (int i = 0; i < n; i++)
// {
//     scanf("%d", (array + i));
// }

// printf("The Array to be Searched through Linear Search : [");
// for (int i = 0; i < n; i++)
// {
//     printf("%d ", array[i]);
// }
// printf("]\n");

//     int token;
//     printf("Enter the Element to be searched : ");
//     scanf("%d", &token);

//     int i = 0;
//     while (token != array[i])
//     {
//         i++;
//     }

//     printf("The Index of the Inputed Element is : %d \nAnd the Element is : %d ", i, token);
// }

// 4. Binary Search
// #include <stdio.h>

// void main()
// {
//     printf("Enter the Number of Elements for the row : ");
//     int n;
//     scanf("%d", &n);
//     int array[n];

//     printf("Please Enter the Array in sorted format of Ascending Order \n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", (array + i));
//     }

//     printf("The Array to be Searched through Binary Search : [");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", array[i]);
//     }
//     printf("]\n");

//     int mid, token, begin = 0 , end = n;
//     printf("Enter the Element to be searched : ");
//     scanf("%d", &token);
    

//     mid = (begin + end) / 2;
//     while (array[mid] != token)
//     {
//         if(array[mid]>token)
//         {
//             end=mid-1;
//             mid = (begin + end)/2;
//         }
//         else if (array[mid]<token)
//         {
//             begin = mid + 1;
//             mid = (begin + end)/2;
//         }
        
//     }

//     printf("The Element you have Entered is at Index : %d \nAnd the Element is : %d ",mid,token);
// }