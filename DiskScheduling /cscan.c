//C_SCAN
#include<stdio.h>
void main()
{
int n,rq[20],initial,size,move,index,i,j,temp,tothead=0;
printf("enter total num of reqst:");
scanf("%d",&n);
printf("enter requests:");
for(i=0;i<n;i++)
 {
  scanf("%d",&rq[i]);
 }
printf("enter initial position:");
scanf("%d",&initial);
printf("enter disk size:");
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
printf("ENTER DIRECTION TO MOVE: 1 for Right\tFor Left");
scanf("%d",&move);
if(move==1)
 {
  tothead=(size-1)-initial+(size-1)+rq[index-1];
 }
else
 {
  tothead=initial+(size-1)+(size-1)-rq[index];
 }
printf("total head movement is :%d",tothead);
}
