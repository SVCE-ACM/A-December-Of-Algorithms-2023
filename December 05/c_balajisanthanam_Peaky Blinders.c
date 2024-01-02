#include <stdio.h>
int main ()
{
int n,i,avg=0,x=0,sum=0, size=0;
printf ("Enter the number of thief :");
scanf ("%d",&n);
int amount [n];
for(i=0;i<n;i++){
printf ("Enter the amount theft by the thief number %d:",i+1);
scanf ("%d",& amount[i]);
}
size =sizeof(amount)/sizeof(amount[0]);
for (i=0;i<n;i++)
{
sum=sum+amount [i];
}
avg=sum/size;
for(i=0;i<n;i++){
if (avg<=amount[i])
{
x=x+amount [i];
}
}
printf ("The total amount equal to and more than tha average:%d",x);
}