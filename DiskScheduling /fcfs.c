//FCFS DISK SCHEDLING
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int n,rq[20],i,initial,totalheadmovement=0;
printf("Enter Total Number Of Request:");
scanf("%d",&n);
printf("ENTER TRACK REQUESTS:");
for(i=0;i<n;i++)
 {
  scanf("%d",&rq[i]); 
 }
printf("Enter Initial Head Position:");
scanf("%d",&initial);
//calculating total head movement using first come first serve basis
for(i=0;i<n;i++)
 {
  totalheadmovement+=abs(rq[i]-initial);
  initial=rq[i];
 }
printf("total head movement in fcfs: %d",totalheadmovement) ;
return 0;
 }
