/*
�T���Φ���: ��������M�n�j��ĤT��
�Ҧp:�ܼ�a,b,c(a������̪���)
����:��u�䥭��M==�̪��䥭��M
�U��:��u�䥭��M>�̪��䥭��M
�w��:��u�䥭��M<�̪��䥭��M

***�Ѧҵ��G****
6 3 2
���~

6 3 4
�w��*/
#include <stdio.h>
int main()
{
    int a,b,c;
    int temp;
	scanf("%d%d%d",&a,&b,&c);
    printf("�{�ba:%d b:%d c:%d\n",a,b,c);
    if(a>c){temp=a;a=b;b=temp;}
    printf("a:%d b:%d c:%d\n",a,b,c);
    if(b>c){temp=b;b=c;c=temp;}
    printf("a:%d b:%d c:%d\n",a,b,c);

}


