#include<stdio.h>
int	 main(){
int i, j;
for(i = 1;i <= 7; i++)
{
printf("%i", i); 
for(j = i;j <=7-1 ;j++)
{
printf("%i", 0);
}
printf("\n");
}
}