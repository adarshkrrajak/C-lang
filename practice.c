#include<stdio.h>
#include<math.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Uppercase letter \n");
    }
    else if(ch>='a' && ch<='z'){
        printf("Lowercase letter \n");
    }
    return 0;
}
//     int marks;
//     printf("Enter marks : ");
//     scanf("%d",&marks);

//     if(marks>=90 && marks<=100){
//         printf("A+ \n");
//     }
//     else if(marks>=80 && marks<90){
//         printf("A \n");
//     }
//     else if(marks>=70 && marks<80){
//         printf("B+ \n");
//     }
//     else if(marks>=60 && marks<70){
//         printf("B \n");
//     }
//     else if(marks>=50 && marks<60){
//         printf("C+ \n");
//     }
//     else if(marks>=40 && marks<50){
//         printf("C \n");
//     }
//     else if(marks>=30 && marks<40){
//         printf("D \n");
//     }
//     else if(marks>=0 && marks<30){
//         printf("F \n");
//     }
//     else{
//         printf("Invalid Marks \n");
//     }
//     return 0;
// }
//     int marks;
//     printf("Enter marks : ");
//     scanf("%d",&marks);

//     if(marks>30 && marks<=100){
//         printf("You Passed the Exam \n");
//     }
//     else if(marks>=0 && marks<=30){
//         printf("You Failed the Exam \n");
//     }
//     else if(marks>100 || marks<0){
//         printf("Invalid Marks \n");
//     }
//     return 0;
// }
//     int number;
//     printf("Enter number: ");
//     scanf("%d",&number);

//     if(number>=0){
//         printf("Number is positive ");
//         if(number%2==0){
//             printf("and it's is even. \n");
//         }
//         else{
//             printf("and it's is odd. \n");
//         }
//     }
//     else{
//         printf("Number is negative \n");
//     }

//     return 0;
// }
//     int day;
//     printf("Enter day (1-7): ");
//     scanf("%d",&day);
//     switch(day){
//         case 1: printf("Monday \n");
//                 break;
//         case 2: printf("Tuesday \n");
//                 break;
//         case 3: printf("Wednesday \n");
//                 break;
//         case 4: printf("Thursday \n");     
//                 break;
//         case 5: printf("Friday \n");
//                 break;
//         case 6: printf("Saturday \n");
//                 break;
//         case 7: printf("Sunday \n");
//                 break;
//         default: printf("Invalid day!\n");

//     }
//     return 0;
// }
    // int age;
    // printf("Enter age: ");
    // scanf("%d",&age);

    // age >=18 ? printf("You are an adult \n") :  printf("Not adult \n");
    // conditional statement use
    // if(age >= 18){
    //     printf("You are anadult \n");
    //     printf("You can vote \n");
    //     printf("You can drive \n");
    // }
    // else if(age > 13 && age <18){
    //     printf("You are a teenager \n");
    // }
    // else{
    //     printf("You are a child \n");
    // }

    // printf("Thank you");
    
    // int x;
    // printf("Enter number: ");
    // scanf("%d",&x);
    // printf("%d \n",x>9 && x<100);
    // int a,b;
    // printf("Enter the value for a:");
    // scanf("%d",&a);
    // printf("Enter the value for b:");
    // scanf("%d",&b);
    // int power= pow(a,b);
    // printf("Value is %d",power);

    