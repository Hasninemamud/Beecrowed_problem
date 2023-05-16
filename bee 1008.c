#include<stdio.h>
int main()
{
  int x;
  double y,z,salary;

  scanf("%d %lf %lf",&x,&y,&z);

  salary = y*z;

  printf("NUMBER = %d\n",x);
  printf("SALARY = U$ %.2lf\n",salary);
}
