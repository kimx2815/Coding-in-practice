#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int* pi;

        pi=(int *)malloc(5*sizeof(int));

        if(pi==NULL)
        {
                printf("�޸� �Ҵ� ���� n");
                exit(1);
        }

        pi[0]=100;
        pi[1]=200;
        pi[2]=300;
        pi[3]=400;
        pi[5]=600;
	printf("%d", pi[0]);
	printf("%d", pi[5]);
        free(pi);
        return 0;
}
