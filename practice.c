#include<stdio.h>
#include<math.h>
int main(){
    int day;
    printf("Enter day (1-7): ");
    scanf("%d",&day);
    switch(day){
        case 1: printf("Monday \n");
                break;
        case 2: printf("Tuesday \n");
                break;
        case 3: printf("Wednesday \n");
                break;
        case 4: printf("Thursday \n");     
                break;
        case 5: printf("Friday \n");
                break;
        case 6: printf("Saturday \n");
                break;
        case 7: printf("Sunday \n");
                break;
        default: printf("Invalid day \n");

    }
    return 0;
}
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

    