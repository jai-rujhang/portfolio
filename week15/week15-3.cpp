#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a ,&b);
    int c=a%b;

    printf("a�j��%d b����%d c�p��%d\n",a,b,c);
    while(c!=0){
        a=b;
        b=c;
        c=a%b;
    printf("a�j��%d b����%d c�p��%d\n",a,b,c);
    }
    printf("�]��c�O0,���}�j��,�ӥB���׬O������b\n");
    printf("%d",b);
}


