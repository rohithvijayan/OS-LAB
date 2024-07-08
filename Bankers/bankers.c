//Bankers Algorithm For deadlock Avoidance
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,i,j,max[20][20],alloc[20][20],need[20][20],avail[m],finish[n],work[m];
    printf("enter number of process:");
    scanf("%d",&n);
    printf("enter number of resource type:");
    scanf("%d",&m);
    printf("Input Max matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&max[i][j]);
        }
    }
    printf("Input Allocation matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&alloc[i][j]);
        }
    }
    //calc need matrix
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            need[i][j]=max[i][j]-alloc[i][j];
        }
    }
    printf("input available resources :");
    for(i=0;i<m;i++)
    {
        scanf("%d",&avail[i]);
    }
    for(i=0;i<n;i++)
    {
        finish[i]=0;
    }
    for(i=0;i<m;i++)
    {
        work[i]=avail[i];
    }
    int safeseq[n],ind=0,k,y,flag=0;
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            if(finish[i]==0)
            {
                flag=0;
                for(j=0;j<m;j++)
                {
                    if(need[i][j]>work[j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    safeseq[ind++]=i;
                    for(y=0;y<m;y++)
                    {
                        work[y]+=alloc[i][y];
                    }
                    finish[i]=1;
                }
                
            }
        }
    }
printf("Following is the safe sequence:");
for(i=0;i<n;i++)
{
    printf("p%d\t",safeseq[i]);
}
    
}
