//size of pointers
#include<stdio.h>
int main()
{
    char *cp;   //pointer type : char
    int *ip;    //pointer type : int
    float *fp;  //pointer type : float
    double *dp; //pointer type : double
    long *lp;   //pointer type : long
    int *ap[2];  //pointer type :
    int (*pa)[2];
printf("char:%d, int:%d,float:%d,double:%d,long:%d\n",\
sizeof(cp),sizeof(ip),sizeof(fp),sizeof(dp),sizeof(lp));

printf("array of pointers : %d\n", sizeof(ap) );
printf("pointer to array : %d\n", sizeof(pa) );

printf("char p:%d char p + 1 = %d \n \
int p:%d int p+1 %d\n \
float p:%d float P+1 %d\n \
double p:%d double p+1 %d\n  \
long p:%d long p+1 %d\n \n",\
cp,cp+1,ip,ip+1,fp,fp+1,dp,dp+1,lp,lp+1);

printf("arr of pointers : %d +1 : %d\n",ap, ap+1 );
printf("pointer to array : %d +1 : %d\n",pa, pa+1 );

 return 0;
}
