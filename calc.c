#include<stdio.h>
int main(){
    double a,b;
    printf("Enter 1st Number: ");
    scanf("%lf",&a);
    printf("Enter second Number: ");
    scanf("%lf",&b);

    printf("What DO You Want to Do? \n");

    printf("1.Add \n 2.Sub \n 3.Multiply \n 4.Division\n");
    printf("Enter your choice");
    int choice;
    scanf("%d",&choice);
    if(choice==1){
        double sum=a+b;
        printf("%lf is the Addition",sum);
    }
    else if(choice==2){
       double sub=a-b;
       printf("%lf is the Substitution",sub);

    }
    else if(choice==3){
        double mul=a*b;
        printf("%lf is the Multiplication",mul);
    }
    else if(choice==4){
        double div=a/b;
        printf("%lf is the DIvision",div);
    }
    else{
        printf("Invalid user input. Please choice between 1 to 4");
    }
}
