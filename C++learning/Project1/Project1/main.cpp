//#define _CRT_SECURE_NO_WARNINGS
//#include <string>

#include <iostream>
using namespace std;

struct Data 
{
	int d, m, y;
	
	void init(int dd, int mm, int yy) 
	{
		d = dd; 
		m = mm;
		y = yy;
	}

	void print()
	{
		cout << y << "-" << m << "-" << d << endl;
	}

	Data& operator += (int dd)
	{
		d = d + dd;
		return *this;	//this是指向调用这个函数的类型对象指针
		//通过返回自引用，可以连续调用这个函数
		//data.add(3）；
		//data.add(3).add(3);
	}
};
 
int main()
{
	Data data;	
	data.print();			//输出随意值
	data.init(2, 3, 2008);
	data.print();
	
	data.y = 2025;
	data.print();
	cout << data.d << endl;

	data += 3;
	data.print();

	(data += 3) += 7;
	data.print();
	
	return 0;
}


