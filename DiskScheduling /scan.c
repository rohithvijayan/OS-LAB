//SCAN ALGO
#include<stdio.h>
void main()
{
int n,rq[20],initial,size,move,i,j,index,temp,tothead=0;
printf("total no of reqst:");
scanf("%d",&n);
printf("enter requests:");
for(i=0;i<n;i++)
 {
  scanf("%d",&rq[i]);
 }
printf("enter initial position:");
scanf("%d",&initial);
printf("enter size of disk:");
scanf("%d",&size);
//bubble sort
for(i=1;i<n;i++)
 {
  for(j=0;j<n-1;j++)
   {
    if(rq[j]>rq[j+1])
     {
      temp=rq[j];
      rq[j]=rq[j+1];
      rq[j+1]=temp;
     }
   }
 }
for(i=0;i<n;i++)
{
 if(rq[i]>initial)
  {
   index=i;
   break;
  }
}
//direction to move
printf("enter direction to move:\n1 for RIGHT\n0 for LEFT");
scanf("%d",&move);
if(move==1)
 {
  if(index!=0)
   {
    tothead=(size-1)-initial;
    tothead+=((size-1)-rq[0]);
   }
  else
   {
    tothead=rq[n-1]-initial;
   }
 }
if(move==0)
 {
  if(index!=n-1)
   {
    tothead=initial-0;
    tothead+=rq[n-1]-initial;
   }
  else
   {
    tothead=initial-rq[0];
   } 
 }
printf("TOTAL HEAD MOVEMENT: %d",tothead);
}
