/* �p������׹��-�򥻽m�ߧ@�~-�@�~24*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/05/07 01:15*/ 
#include <stdio.h>
#include <stdlib.h>
struct course
{
	char name[10];  
	int calculus;
	int computer;
	int programming;
} p;

int main(void)
{
    FILE *pFile;
	printf("�p������׹��-��¦�m�ߧ@�~-�@�~24\n");
	printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/05/07 01:15\n");
	printf("-------------------------------------------------\n");
	printf("          �ΰ�Ū�Ҧ�Ū��couse.txt(���c��)        \n");
	printf("-------------------------------------------------\n");
	printf("Ū�����e���G\n");
	pFile=fopen("course.txt", "r");
        
    if (pFile==NULL)
    {
        printf("�ɮ׶}�ҥ���!!\n");
        exit(1);
	}   
    else
    {
    	while (fscanf(pFile, "%[^,],%d,%d,%d", p.name, &p.calculus, &p.computer, &p.programming)!=EOF) 
    	    printf("%s\t %d\t %d\t %d", p.name, p.calculus, p.computer, p.programming); 
	}
	printf("\n");
    fclose(pFile);
    system("pause");
    return 0;
}

