#include <stdio.h>

int Add(float op1, float op2)
{
  return op1 + op2;
}
int Subtract(float op1, float op2)
{
  return op1 - op2;
}
int Multiply(float op1, float op2)
{
  return op1 * op2;
}
float Divide(float op1, float op2)
{
  if (op2 == 0) {
    return 0;
  }
  return op1 / op2;
}


float GetOperand(){
  float op = 0.0;
  printf("Enter Operand: ");
  scanf("%f", &op);
  printf("\n");
  return op;
}

void Choice(float op1,float op2,int choice){
  float sum = 0.0;

  if (choice == 1) {
      sum = Add(op1, op2);
      printf("%f + %f = %f\n", op1, op2,sum);
  }
  else if (choice == 2) {
      sum = Subtract(op1, op2);
      printf("%f - %f = %f\n", op1, op2,sum);
  }
  else if (choice == 3) {
      sum = Multiply(op1, op2);
      printf("%f * %f = %f\n", op1, op2,sum);
  }
  else if (choice == 4) {
      sum = Divide(op1, op2);
      printf("%f / %f = %f\n", op1, op2, sum);
  }

}

void Calculate() {


  int choice = 0;

  while (choice != -1) {

    printf("\n");
    printf("Choose one of the following operations: \n");
    printf("Add(1) \nSubtract(2) \nMultiply(3) \nDivide(4) \nStop Programm(-1)\n");

    printf("Enter your choise : ");
    scanf("%d", &choice );
    if (choice == -1) {
      printf("Programm stoped\n");

      return;
    }
    float op1= GetOperand();
    float op2= GetOperand();
    Choice(op1, op2, choice);

}
}

int main(int argc, char const *argv[]) {

  printf("Pocket Calculator\n");
  Calculate();


  return 0;
}
