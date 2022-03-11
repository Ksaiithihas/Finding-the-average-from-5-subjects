#include <stdio.h>

void main()
{
int Eng,math,bio,phy,sci,Average;
printf("Please enter the Eng marks :");
scanf("%d",&Eng);
printf("Please enter the math marks :");
scanf("%d",&math);
printf("Please enter the bio marks :");
scanf("%d",&bio);
printf("Please enter the phy marks :");
scanf("%d",&phy);
printf("Please enter the sci marks :");
scanf("%d",&sci);
Average = ((Eng+math+bio+phy+sci)*100)/500;
printf("%d",Average);
}
