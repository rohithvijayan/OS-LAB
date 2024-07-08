#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
int main()
{
key_t key=ftok(".",70);
int shmid=shmget(key,1024,0666|IPC_CREAT);
char *str=(char*)shmat(shmid,(void*)0,0);
printf("Input Data :");
fgets(str);
if(shmdt(str)==0)
{
printf("Deattached...");}
else
{
printf("Error");}
}
