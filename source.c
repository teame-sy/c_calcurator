#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS //for vs complier

// made by github.com/teame-sy
// 고칠 거나 오류는 이슈로. PR도 좋음

int plus(int a, int b)
{
	int temp;

	temp = a + b;

	return temp;
}

int minus(int c, int d)
{
	int temp;

	temp = c - d;

	return temp;
}

int cross(int e, int f)
{
	int temp;

	temp = e * f;

	return temp; 
}

double divide(int g, int h)
{
	double temp;

	temp = g / h; 

	return temp;
}

void scanf_forinput(void)
{
	printf("다음 중 하고 싶은 것을 고르세요.\n");
	
	printf("1. 덧셈, 2. 뺄셈 3. 곱셈 4. 나눗셈\n");
	
	printf("첫 번째 숫자 입력> ");

	int firstnum;
	
	int secondnum;

	scanf("", &firstnum);
	
	printf("\n 두 번째 숫자 입력> ");

	scanf("", &secondnum);
	
	int nunbr;
	
	printf("위 숫자 (사칙 연산 1-4번)중 할 것을 고르세요:");
	
	scanf("", &nunbr);
	
	int tem;
	
	switch(nunbr)
		case 1:
			tem = plus(firstnum, secondnum);
			break;
   		case 2:
     			tem = minus(firstnum, secondnum);
			break;
		case 3:
  			tem = cross(firstnum, secondnum);
			break;
     		case 4:
       			tem = divide(firstnum, secondnum);
			break;
		default:
			printf("프로그램을 다시 시작하세요.");
			throw Error;


    	printf("\n 결과는 %d 입니다.", tem)


      	// 끝
	


}

int main(void)
{
	scanf_forinput();

}


