#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("Enter the value for a:");
    scanf("%d",&a);
    printf("Enter the value for b:");
    scanf("%d",&b);
    int power= pow(a,b);
    printf("Value is %d",power);

    return 0;
}