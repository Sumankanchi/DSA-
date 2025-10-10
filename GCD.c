#include <stdio.h>
#include <stdlib.h>

int GCD(int a,int b)
{
    if(b!=0) return GCD(b,a%b);
    else return a;

}
int main()
{
    int a,b;
    printf("\n read values for a & b \n");
    scanf("%d%d",&a,&b);
    printf("\n GCD of %d & %d is %d",a,b,GCD(a,b));
    return 0;
}
