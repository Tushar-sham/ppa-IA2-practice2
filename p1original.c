

#include<stdio.h>
int main()
{
  float base, height, area;
  printf("Enter length of base of triangle\n");
  scanf("%f", &base);
  printf("Enter lenght of height of triangle\n");
  scanf("%f", &height);
  if(base == 0 || height == 0)
{
  printf("invalid input\n");
}
else
{
  area = (base*height)/2.0;
  printf("area of triangle is: %0.2f\n", area);
}
return 0;
}
