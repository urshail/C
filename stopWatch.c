//stopwatch in c
#include<stdio.h>
#include<unistd.h>
void mysleep()
{
     int i;
     //for(i=0;i<259999999;i++);
     for(i=0;i<999999;i++);
}
int main()
{
    int i=0,h=0,m=0,s=0;
    while(1)
    {
      printf("\r%d:%d:%d",h,m,s);
      mysleep();
      if(s==59)
      {
               m++;
               s=0;
      }
      if(m==59)
      {
               h++;
               m=0;
      }
      s++;
    }
    //system("pause");
    return 0;
}
