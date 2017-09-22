#include<stdio.h>
int main()
{
  int day,weak,month,year;
  printf("\n\t Please enter days: ");
  scanf("%d",&day);
  weak=day/7;
  month=day/30;
  year=day/365;
  printf("\n\t%d weak \n\t%d month \n\t%d year",weak,month,year);
  return 0;
}
