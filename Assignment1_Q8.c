#include <stdio.h>
int main(){
float a,b,c;
float final_salary;

printf("Enter Basic Salary:");
scanf("%f\n",&a);

printf("Enter Allowance:");
scanf("%f\n",&b);

printf("Enter Bonus:");
scanf("%f\n", &c);

final_salary= a+b+c;

printf("final salary= %.2f\n",final_salary);



    return 0;
}