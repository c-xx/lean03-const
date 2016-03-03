#include <iostream>
#include <stdlib.h>
using namespace std;

void fun( int &a,  int &b);
#define X 3 // 定义常量  不会检测错误
int main(void) {

	const int x = 3;// 常量会检测错误

	int x1 = 3;// 常量会检测错误

	int const *p = &x1;// const int *p = &x; 等价 常量指针 *p 被const修饰，不能再修改其指向的值
	//*p = 5; //错误
	x1 = 5;//可以

	int y = 5;
	int * const p2 = &x1; 
	//p2 = &y;//错误 p2 被const修饰为常量了，不能再指向其他
	*p2 = 10;
	cout << x1 << endl;

	int const *p3 = &x1;//同上 const 修饰的是 *p3 ,不能再修改其指向的值
	cout << *p3 << endl;
	p3 = &y;
	cout << *p3 << endl;




	int x2 = 3;
	int y2 = 3;
	int const &z = x;//修饰常量引用
	//z=10;// 错误的
	fun(x2, y2);

	system("pause");
	return 0;
}


void fun( int &a,  int &b) {

	a = 10;
	b = 20;
}