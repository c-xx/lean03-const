#include <iostream>
#include <stdlib.h>
using namespace std;

void fun( int &a,  int &b);
#define X 3 // ���峣��  ���������
int main(void) {

	const int x = 3;// �����������

	int x1 = 3;// �����������

	int const *p = &x1;// const int *p = &x; �ȼ� ����ָ�� *p ��const���Σ��������޸���ָ���ֵ
	//*p = 5; //����
	x1 = 5;//����

	int y = 5;
	int * const p2 = &x1; 
	//p2 = &y;//���� p2 ��const����Ϊ�����ˣ�������ָ������
	*p2 = 10;
	cout << x1 << endl;

	int const *p3 = &x1;//ͬ�� const ���ε��� *p3 ,�������޸���ָ���ֵ
	cout << *p3 << endl;
	p3 = &y;
	cout << *p3 << endl;




	int x2 = 3;
	int y2 = 3;
	int const &z = x;//���γ�������
	//z=10;// �����
	fun(x2, y2);

	system("pause");
	return 0;
}


void fun( int &a,  int &b) {

	a = 10;
	b = 20;
}