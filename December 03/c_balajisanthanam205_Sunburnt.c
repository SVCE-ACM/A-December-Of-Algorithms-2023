#include <stdio.h>
int main ()
{
int n,max=0,x=0,i;
printf ("Enter the number of Building:");
scanf ("%d",&n);
int building[n];
for(i=0;i<n;i++)
{
printf ("Enter the High of the building %d:",i+1);
scanf ("%d",& building);
}
max=building[0];
for (i=0;i<n;i++)
{
if (max<building[i])
{
x++;
}
}
printf ("The number of Building which requires sun light:%d",x);
}