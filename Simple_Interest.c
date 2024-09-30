#include<stdio.h>
int main()
{
    float P,R,T,SI;
    scanf("%f%f%f",&P,&R,&T);
    SI=(P*R*T)/100;
    printf("The Simple Interest is %.2f",SI);
    return 0;
}
