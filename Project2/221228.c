#include<stdio.h>

int main(void)
{
	int a = 10, b = 20;
	//int* const pa = &a; // const pa가 가리키는 변수 a는 pa를 간접참조하여 바꿀 수 없다
	// const는 가리키는 변수의 값을 바꿀 수 없다. 참조는 가능 but 값 변경은 불가능
	int *const pc = &a;
	printf("변수 a 값 : %d\n", *pc);
	//*pa = &b;
	*pc = &a;
	printf("변수 b 값 : %d\n", *pc);
	//pa = &a;
	*pc = &b;
	a = 20;
	// *pa = 20; 불가 const로 지정되어있기에 변경이 불가하다.
	printf("변수 a 값 : %d\n", *pc);


	return 0;
}