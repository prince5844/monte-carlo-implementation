#include<stdio.h>
#include<math.h>
#include<time.h>
main()
{
int tmax,i,n,nl;
float r;
FILE *fp;
time_t t;

fp=fopen("diff.txt","w");
srand((unsigned)time(&t));


printf("enter the total no:");
  scanf("%d",&n);
  printf("enter the max time:");
  scanf("%d",&tmax);
  nl=n;

  for(i=0;i<=tmax; i++)
{
    fprintf(fp,"%d\t%d\n",i,nl);
    r=rand()%100;
    r=r/100;
    if(r<=(float)nl/n)
    nl--;
    else
    nl++;
}
printf("the no. of particle in left side is %d",nl);
fclose(fp);
}
