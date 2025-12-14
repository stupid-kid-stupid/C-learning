* # inline内联函数-异常处理
* 对于不包含循环的简单函数，建议用inline关键字声明，为“inline内联函数”，编译器将内联函数调用用其代码展开，成为“内联展开”，

避免函数调用开销，提高程序执行效率。



\#include <iostream>

\#include <math.h>

using namespace std;



inline double aaa(double x, double y)

{

 	return sqrt(x \* x + y \* y);

}

 

int main()

{

 	double a = 3;

 	double b = 4;

 	//下面2行代码效率一样

 	cout << aaa(a, b) << endl;

 	cout << sqrt(a \* a + b \* b) << endl;



 	return 0;

}



* # try-catch处理异常
* 正常代码放在try块，catch中捕获try块抛的异常

\#include <iostream>

\#include <math.h>

\#include <string>

using namespace std;



inline double aaa(double x, double y)

{

 	return sqrt(x \* x + y \* y);

}

 

int main()

{

 	int a = 0, b = 0;

 	cout << "Write a number:";

 	cin >> a;

 	cout << endl;



 	try {

 		if (a > 100) throw 100;

 		if (a < 10) throw 10;

 		throw ("hello");

 		/\*throw "hello";\*/

 	}

 	catch (int result) { //只能捕获整型结果

 		cout << "result is:" << result << endl;

 		b = result + 1;

 		cout << "b:" << b << endl;

 	}

 	catch (const char\* s) {	//捕获字符串

 		cout << "balabala" << string(s) << endl;

 	}

//const char 改为char 会报错

 	/\*catch (...) {

 		cout << "其他异常：" << endl;

 	}\*/



 	cout << endl;



 	return 0;

}



* 
* 
