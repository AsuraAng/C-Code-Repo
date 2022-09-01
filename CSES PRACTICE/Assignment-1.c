// Q1. Printf() scanf() for using all data types

#include<stdio.h>


int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n",num);


    float fnum;
    scanf("%f", &fnum);
    printf("%f\n",fnum);



    char ch;
    scanf(" %c", &ch);
    printf("%c\n ",ch);



    double dou;
    scanf("%d", &dou);
    printf("%d\n",dou);

    return 0;
}


// Q2. write a program to print Hello in different lines using concept of escape sequence

// #include<stdio.h>
// int main()
// {
//     printf("H\nE\nL\nL\nO\n");
//     return 0;
// }


// Q3. Add and subtract 2 numbers and take them from user

// #include<stdio.h>

// int main()
// {
//     int a,b,c,d;
//     printf("Enter the two numbers : (First one must be bigger)\n");
//     scanf("%d%d", &a , &b);

//     c=a+b;
//     d=a-b;
//     printf("The value of sum is : %d \nAnd the value of difference is : %d \n", c , d );

//     return 0;
// }

// Q4. Print the data using all format specifiers like %d, %f,%lf, %c,%x

// #include<stdio.h>

// int main()
// {
//     int a;
//     printf("The value of int a is : \n");
//     scanf("%d",&a);
//     printf("%d\n",a);

//     float f;
//     printf("The value of float f is : \n");
//     scanf("%f",&f);
//     printf("%f\n",f);

//     char ch;
//     printf("The value of char ch is : \n");
//     scanf(" %c",&ch);
//     printf("%c \n",ch);

//     double d;
//     printf("The value of double d is : \n");
//     scanf("%ld",&d);
//     printf("%ld\n",d);
//     return 0;
// }