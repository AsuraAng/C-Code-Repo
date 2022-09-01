// 1- Write a menu-driven program which will work as per the following means:
//     Enter a Number
//     16942

//     a- To check the odd digits from the entered number .
//     b- To reverse the Number .
//     c- To Calculate the sum of all digits of the Numbers .
//     d- Enter the New Number .

// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// int main()
// {
//     bool flag = true;
//     while (flag)
//     {
//         int n;
//         printf("Enter the Number : ");
//         scanf("%d", &n);

//         printf("Which Action you would like to perform....... \n");
//         printf("1- To check the odd digits from the Entered Number \n");
//         printf("2- To reverse the Number \n");
//         printf("3- To Calculate the Sum of all the digits of the Numbers \n");
//         printf("4- Enter the New Number \n");

//         int ch;
//         printf("Enter the Choice : ");
//         scanf(" %d", &ch);

//         int remainder = 0;
//         int sum = 0;
//         int reverse = 0;
//         if (ch == 1)
//         {
//             while (n > 0)
//             {
//                 int r = n % 10;
//                 n = n / 10;
//                 if (r % 2 != 0)
//                 {
//                     printf("%d ", r);
//                 }
//             }
//             printf("\n");
//         }
//         else if (ch == 2)
//         {

//             while (n != 0)
//             {
//                 remainder = n % 10;
//                 reverse = reverse * 10 + remainder;
//             }

//             printf("The reverse digits counter part of the given number is : %d", reverse);
//             printf("\n");
//         }
//         else if (ch == 3)
//         {
//             while (n > 0)
//             {
//                 int r = n % 10;
//                 n /= 10;
//                 sum += r;
//             }
//             printf("The sum of digits of the given number is : %d", sum);
//             printf("\n");
//         }

//         else if (ch == 4)
//             continue;

//         else
//         {

//             printf("Invalid Choice !!! ");
//             printf("\n");
//         }
//     }
//     return 0;
// }

// 2- Write the menu-driven program (using nested switch) for Cab booking. Design the menu as per the choice.
// #include <stdio.h>

// int main()
// {
//     int a, age, ch1, num, cost, dis, f;
//     char name[10], gen[10], date[10], ad[40], ch2;
//     while (1 == 1)
//     {
//         printf("~~~~~~~Do you want to use the Cab service?~~~~~~~\n");
//         printf(" Press\n1. for YES \n2. for NO:\n ");
//         scanf("%d", &a);
//         printf("\n");
//         switch (a)
//         {
//         case 1:
//             printf("Enter your name: ");
//             scanf("%s", &name);
//             fflush(stdin);
//             printf("Enter your age: ");
//             scanf("%d", &age);
//             fflush(stdin);
//             printf("Enter your Gender: ");
//             scanf("%s", &gen);
//             fflush(stdin);
//             printf("Enter your Address: ");
//             scanf("%s", &ad);
//             fflush(stdin);
//             printf("Enter the distance of destination(in km): ");
//             scanf("%d", &dis);
//             fflush(stdin);
//             printf("Enter the journey start date(in DD / MM / YYYY) : ");
//             scanf("%s", &date);
//             fflush(stdin);
//             printf("Enter the number of days of journey: ");
//             scanf("%d", &num);
//             printf("\n\n");
//             printf("Choose the car type:\n");
//             printf("1-Sedan\n");
//             printf("2-SUV\n");
//             printf("3-Van\n");
//             printf("4-Jeep\n");
//             printf("5-Luxury\n");
//             scanf("%d", &ch1);
//             fflush(stdin);
//             printf("\n\n");
//             switch (ch1)
//             {
//             case 1:
//                 printf("Choose how many people aretravelling:(Range is from 3-8)\n");
//                 printf("a-3\n");
//                 printf("b-4\n");
//                 printf("c-5\n");
//                 printf("d-6\n");
//                 printf("e-7\n");
//                 printf("f-8\n");
//                 scanf("%c", &ch2);
//                 fflush(stdin);
//                 printf("\n\n");
//                 switch (ch2)
//                 {
//                 case 'a':
//                     cost = 2000 * num + 10 * dis;
//                     break;
//                 case 'b':
//                     cost = 2500 * num + 10 * dis;
//                     break;
//                 case 'c':
//                     cost = 3000 * num + 10 * dis;
//                     break;
//                 case 'd':
//                     cost = 3400 * num + 10 * dis;
//                     break;
//                 case 'e':
//                     cost = 3800 * num + 10 * dis;
//                     break;
//                 case 'f':
//                     cost = 4500 * num + 10 * dis;
//                     break;
//                 default:
//                     printf("Invalid Input\n\n");
//                 }
//                 break;
//             case 2:
//                 printf("Choose how many people aretravelling:(Range is from 3-8)\n");
//                 printf("a-3\n");
//                 printf("b-4\n");
//                 printf("c-5\n");
//                 printf("d-6\n");
//                 printf("e-7\n");
//                 printf("f-8\n");
//                 scanf("%c", &ch2);

//                 fflush(stdin);
//                 printf("\n\n");
//                 switch (ch2)
//                 {
//                 case 'a':
//                     cost = 2400 * num + 13 * dis;
//                     break;
//                 case 'b':
//                     cost = 2900 * num + 13 * dis;
//                     break;
//                 case 'c':
//                     cost = 3500 * num + 13 * dis;
//                     break;
//                 case 'd':
//                     cost = 3900 * num + 13 * dis;
//                     break;
//                 case 'e':
//                     cost = 4200 * num + 13 * dis;
//                     break;
//                 case 'f':
//                     cost = 4800 * num + 13 * dis;
//                     break;
//                 default:
//                     printf("Invalid Input\n\n");
//                 }
//                 break;
//             case 3:
//                 printf("Choose how many people aretravelling:(Range is from 3-8)\n");
//                 printf("a-3\n");
//                 printf("b-4\n");
//                 printf("c-5\n");
//                 printf("d-6\n");
//                 printf("e-7\n");
//                 printf("f-8\n");
//                 scanf("%c", &ch2);
//                 fflush(stdin);
//                 printf("\n\n");
//                 switch (ch2)
//                 {
//                 case 'a':
//                     cost = 1600 * num + 7 * dis;
//                 break;
//                 case 'b':
//                     cost = 2000 * num + 7 * dis;
//                     break;
//                 case 'c':
//                     cost = 2600 * num + 7 * dis;
//                     break;
//                 case 'd':
//                     cost = 3100 * num + 7 * dis;
//                     break;
//                 case 'e':
//                     cost = 3500 * num + 7 * dis;
//                     break;
//                 case 'f':
//                     cost = 4000 * num + 7 * dis;
//                     break;
//                 default:
//                     printf("Invalid Input\n\n");
//                 }
//                 break;
//             case 4:
//                 printf("Choose how many people aretravelling:(Range is from 3-8)\n");
//                 printf("a-3\n");
//                 printf("b-4\n");
//                 printf("c-5\n");
//                 printf("d-6\n");
//                 printf("e-7\n");
//                 printf("f-8\n");
//                 scanf("%c", &ch2);
//                 fflush(stdin);
//                 printf("\n\n");
//                 switch (ch2)
//                 {
//                 case 'a':
//                     cost = 2400 * num + 15 * dis;
//                     break;
//                 case 'b':
//                     cost = 2900 * num + 15 * dis;
//                     break;
//                 case 'c':
//                     cost = 3500 * num + 15 * dis;
//                     break;
//                 case 'd':
//                     cost = 3900 * num + 15 * dis;
//                     break;
//                 case 'e':
//                     cost = 4200 * num + 15 * dis;
//                     break;
//                 case 'f':
//                     cost = 4800 * num + 15 * dis;
//                     break;
//                 default:
//                     printf("Invalid Input\n\n");
//                 }
//                 break;
//             case 5:
//                 printf("Choose how many people aretravelling:(Range is from 3-8)\n");
//                 printf("a-3\n");
//                 printf("b-4\n");
//                 printf("c-5\n");
//                 printf("d-6\n");
//                 printf("e-7\n");
//                 printf("f-8\n");
//                 scanf("%c", &ch2);
//                 fflush(stdin);
//                 printf("\n\n");
//                 switch (ch2)
//                 {
//                 case 'a':
//                     cost = 4000 * num + 25 * dis;
//                     break;
//                 case 'b':
//                     cost = 5000 * num + 25 * dis;
//                     break;
//                 case 'c':
//                     cost = 6500 * num + 25 * dis;
//                     break;
//                 case 'd':
//                     cost = 7500 * num + 25 * dis;
//                     break;
//                 case 'e':
//                     cost = 8200 * num + 25 * dis;
//                     break;
//                 case 'f':
//                     cost = 10000 * num + 25 * dis;
//                     break;
//                 default:
//                     printf("Invalid Input\n\n");
//                 }
//                 break;
//             default:
//                 printf("Invalid Input\n\n");
//             }
// printf("Thanks %s for using our services your total cost is: %d\n\n",name,cost);
// printf("Do you want to confirm booking?(1-Yes or 2-No) ");
// scanf("%d",&f);
// if(f==1)
// {
//     printf("Congratulations!! your booking is confirmed.\n\n");
// }
// else if(f==2)
// {
//     printf("Booking dismissed!!!\n\n");
// }
// else
// {
//     printf("Invalid Input\n\n");
// }
// break;
// case 2:
//     break;
// default:
//     printf("Invalid Input\n\n");
//         }
//         if (a == 2)
//         {
//             break;
//         }
//     }

//     return 0;
// }
// 3- Write a C program to print the following patterns :
//  a-> *               b->       *
//      * *                     * * *
//      * * *                 * * * * *
//      * * * *             * * * * * * *

// #include <stdio.h>
// #include <stdbool.h>

// int main()
// {
//     while (true)
//     {
//         printf("Welcome to the Pattern Creater...\n");
//         printf("Select the Desired Program you want to Create...\n");
//         printf("1- Right Triangle \n");
//         printf("2- Half Diamond\n");

//         int ch;

//         printf("Enter the choice : ");

//         scanf("%d", &ch);

//         switch (ch)
//         {
//         case 1:
//             printf("Enter the Height you would like to have for the Triangle : ");
//             int h = 0;
//             scanf("%d", &h);

//             for (int i = 0; i < h; i++)
//             {
//                 for (int j = 0; j <= i; j++)
//                 {
//                     printf("* ");
//                 }
//                 printf("\n");
//             }
//             break;

//         case 2:
//             printf("Enter the Height you would like to have for the Triangle : ");
//             int h2 = 0;
//             scanf("%d", &h2);

//             for (int i = 0; i < h2; i++)
//             {
//                 for (int j = 0; j < h2 - i; j++)
//                 {
//                     printf(" ");
//                 }

//                 for (int j = 0; j <= i; j++)
//                 {
//                     printf("* ");
//                 }
//                 printf("\n");
//             }

//             break;

//         default:
//             printf("Invalid Choice !!!");
//             break;
//         }
//     }

//     return 0;
// }