#include<stdio.h>

int main(void)
{
	int a = 10, b = 20;
	//int* const pa = &a; // const pa�� ����Ű�� ���� a�� pa�� ���������Ͽ� �ٲ� �� ����
	// const�� ����Ű�� ������ ���� �ٲ� �� ����. ������ ���� but �� ������ �Ұ���
	int *const pc = &a;
	printf("���� a �� : %d\n", *pc);
	//*pa = &b;
	*pc = &a;
	printf("���� b �� : %d\n", *pc);
	//pa = &a;
	*pc = &b;
	a = 20;
	// *pa = 20; �Ұ� const�� �����Ǿ��ֱ⿡ ������ �Ұ��ϴ�.
	printf("���� a �� : %d\n", *pc);


	return 0;
}