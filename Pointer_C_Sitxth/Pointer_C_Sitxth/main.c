#include <stdio.h>	
#include <stdlib.h>
#include <string.h>	


//void PrintUser(char (*pUser)[12])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		printf(pUser[i]);
//	}
//}


/////정적변수 Static///////
//정적변수는 전역변수처럼 선언될때 단 한번만 초기화된다. 
void TestFunc(void)
{
	static int nData = 10;
	printf("%d\n", nData++);
}

int TestFunc2()
{
	//접근성은 TestFunc()내부로 제한된 지역변수이나
	//기억부륳는 스택이 아니라 데이터 영역인 '정적'변수 선언 및 정의
	//정의는 이 함수가 여러 번 호출되더라도 단 한 번만 적용된다.
	static int nData2 = 10;

	//nData2의 값이 변경됐따
	//정적변수이므로 이 변경된 값은 함수가 반환하더라도 유지된다.
	return nData2;

}
int main(int argc, char* argv[])
{
	//static을 선언하지 않고 함수 호출시 값 = 10 10 10 
	//함수 스코프가 닫히면서 값이 초기화
	TestFunc();
	TestFunc();
	TestFunc();
	//but, 스태틱 선언시
	//값이 올라간다.

	//static이라고 썼을시 전역변수를 쓴것과 똑같다. 
	//전역변수와 차이점
	// 만약 TestFunc()안에 static선언시 접근성이 {}안으로 제한된다. 
	

	//int* pnData;
	//해석 순서
	//1. *pnData - 포인터 변수가 된다. 포인터가 가르키는 대상의 형식은 2. int
	//2. int

	//다차원 배열 > 배열의 배열, 배열 = 같은 형식의 자료가 여럿이 동시에 있는것

	//char aList[3][12] = { "Hell", "Heaven", "Home" };
	//해석 순서
	//1. aList[3] = 무엇인가 담겨있는것이 3개있다.
	//2. 요소형식 = char[12]
	//TIP : aList[3] = 포인터로 바꿔주면된다.

	////ptrtoarray
	////다차원 배열 
	//char astrList[2][12] = { "Hello", "World" };
	////char* *pstrList = astrList;
	//char(*pstrList)[12] = astrList;

	//puts(pstrList[0]);
	//puts(pstrList[1]);

	//char aListUser[3][12] = {
	//"철수", "길동", "영희" };

	//PrintUser(aListUser);



	//auto키워드는 안쓰면 auto 이다

	//fm대로 쓰면 아래처럼 쓴다.

	/*auto int aList[3] = { 10,20,30 };
	auto int i = 0;

	for (i = 0; i < 3; i++)
	{
		printf("%d\t", aList[i]);
	}*/

	//22장 20.26분
	
	


	return 0;
}