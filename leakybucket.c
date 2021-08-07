#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void input(int packsize,int output,int bsize)
{
if(packsize>bsize)
printf("Bucket overflow");
else
{
delay(300);
while(packsize>output)
{
printf("output = %d bytes\n ",output);
packsize-=output;
delay(300);
}
if(packsize>0)
printf("Last %d bytes sent\n");
printf("Output successfull\n");
}
}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
  
void main()
{
int output,packsize,bsize,i;
printf("Enter the bucket size\n");
scanf("%d",&bsize);
printf("Enter output rate\n");
scanf("%d",&output);
for(i=1;i<=5;i++)
{
delay(rand());
packsize=rand();
printf("No of packets= %d \n Packet size=%d \n",i,packsize);
input(packsize,output,bsize);
}
}

