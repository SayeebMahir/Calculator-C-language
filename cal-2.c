#include<stdio.h>
int main(){
    double a,b;
    printf("Enter 1st Number: ");
    scanf("%lf",&a);
    printf("Enter second Number: ");
    scanf("%lf",&b);
    fflash(stdout);

    printf("Do you want to Add? \n");
    fflash(stdin);
    printf("Yes \n No\n");
    printf("Enter your choice");
    char choice;
    scanf("%c",&choice);
    if(choice=='yes' || choice=='Yes'){
        double sum=a+b;
        printf("%lf is the Addition",sum);
    }
    else {

       printf("You are not interested to Add. Thank you");

    }
}
