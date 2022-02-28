#include<stdio.h>
int main()
{
  float height, base, area;
  printf("enter the lenght of base of a tringle\n");
  scanf("%f",&base);
  printf("enter the lenght of height of a triangle\n");
  scanf("%f", &height);
  if(base == 0 || height ==0)
  {
  printf("invalid input\n");
  }  
  else
  {
  area = (base*height)/2.0;
  printf("area of the triangle is: %0.2f\n", area);
  } 
return 0;
}