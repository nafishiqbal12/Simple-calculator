//switch-case statements


#include <stdio.h>
#include <float.h>

int main(){

char op;

double a,b,res;
//read the operator
printf("Enter an operator ( +,-,*,/): ");

scanf("%c", &op);

//read the tow numbers
printf("Enter two operands: ");
scanf("%lf %lf", &a,&b);

switch(op){
case '+':
   res = a + b;
   break;

case '-':
   res =  a - b;
   break;

case '*':
    res = a * b;
    break;

case '/':
   res = a / b;
   break;

default:
    printf("Error!Incorrect operator value\n");

    res = -DBL_MAX;


}

if(res!= -DBL_MAX)
  printf("%.2lf", res);

  return 0;




}
