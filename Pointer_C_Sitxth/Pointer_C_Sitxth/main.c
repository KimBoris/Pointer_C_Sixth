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


/////�������� Static///////
//���������� ��������ó�� ����ɶ� �� �ѹ��� �ʱ�ȭ�ȴ�. 
void TestFunc(void)
{
	static int nData = 10;
	printf("%d\n", nData++);
}

int TestFunc2()
{
	//���ټ��� TestFunc()���η� ���ѵ� ���������̳�
	//���ΐT�� ������ �ƴ϶� ������ ������ '����'���� ���� �� ����
	//���Ǵ� �� �Լ��� ���� �� ȣ��Ǵ��� �� �� ���� ����ȴ�.
	static int nData2 = 10;

	//nData2�� ���� ����Ƶ�
	//���������̹Ƿ� �� ����� ���� �Լ��� ��ȯ�ϴ��� �����ȴ�.
	return nData2;

}
int main(int argc, char* argv[])
{
	//static�� �������� �ʰ� �Լ� ȣ��� �� = 10 10 10 
	//�Լ� �������� �����鼭 ���� �ʱ�ȭ
	TestFunc();
	TestFunc();
	TestFunc();
	//but, ����ƽ �����
	//���� �ö󰣴�.

	//static�̶�� ������ ���������� ���Ͱ� �Ȱ���. 
	//���������� ������
	// ���� TestFunc()�ȿ� static����� ���ټ��� {}������ ���ѵȴ�. 
	

	//int* pnData;
	//�ؼ� ����
	//1. *pnData - ������ ������ �ȴ�. �����Ͱ� ����Ű�� ����� ������ 2. int
	//2. int

	//������ �迭 > �迭�� �迭, �迭 = ���� ������ �ڷᰡ ������ ���ÿ� �ִ°�

	//char aList[3][12] = { "Hell", "Heaven", "Home" };
	//�ؼ� ����
	//1. aList[3] = �����ΰ� ����ִ°��� 3���ִ�.
	//2. ������� = char[12]
	//TIP : aList[3] = �����ͷ� �ٲ��ָ�ȴ�.

	////ptrtoarray
	////������ �迭 
	//char astrList[2][12] = { "Hello", "World" };
	////char* *pstrList = astrList;
	//char(*pstrList)[12] = astrList;

	//puts(pstrList[0]);
	//puts(pstrList[1]);

	//char aListUser[3][12] = {
	//"ö��", "�浿", "����" };

	//PrintUser(aListUser);



	//autoŰ����� �Ⱦ��� auto �̴�

	//fm��� ���� �Ʒ�ó�� ����.

	/*auto int aList[3] = { 10,20,30 };
	auto int i = 0;

	for (i = 0; i < 3; i++)
	{
		printf("%d\t", aList[i]);
	}*/

	//22�� 20.26��
	
	


	return 0;
}