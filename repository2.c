
#include <stdio.h>
int main() 
{
 int a[10],p[10],b[10],x[10],i,j,largest,count=0,time,n;
 double avg=0,tt=0,end;
  printf("enter the number of Students arriving in a mess:\n");
  scanf("%d",&n); 
 printf("Enter process id of the student\n");
 for(i=0;i<n;i++)
 scanf("%d",&p[i]);
 printf("Enter arrival time of the student\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Enter food taking time\n");  
 for(i=0;i<n;i++)
 scanf("%d",&b[i]); 
 for(i=0;i<n;i++)
 x[i]=b[i];
 for(time=0;count!=n;time++)
 {
   largest=9;
  for(i=0;i<n;i++)
  {
   if(a[i]<=time && b[i]>b[largest] && b[i]>0)
   largest=i;
  }
  b[largest]--;
  if(b[largest]==0)
  {
   count++;
   end=time+1;
   avg=avg+end-a[largest]-x[largest];
   tt= tt+end-a[largest];
  }
 }
 printf("\n ****************************");
 printf("\n\nAverage waiting time = %lf\n",avg/n);
    printf("Average Turnaround time = %lf",tt/n);
}
