#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//int main() {
//    // 初始化随机种子
//    std::srand(std::time(0));
//
//    // 生成并打印随机数
//    double random_number = static_cast<double>(std::rand()) / RAND_MAX;
//    std::cout << "Random number: " << random_number << std::endl;
//
//    return 0;
//}


#include "iostream"
#include "ctime"
#include "cstdlib"
using namespace std;
#define N  999 //精度为小数点后面3位
/*思路：生成一个0 - N的随机数，然后对其处以N + 1，则可以得到浮点型随机数。
N可以确定产生的精度。比如需要2位小数，则N = 99, 需要3位小数，则N = 999.代码如下*/
int main()
{
	double num;
	int i;
double random[10];
	srand(time(NULL));//设置随机数种子，使每次产生的随机序列不同
	for (int i = 0; i < 10; i++)
	{
		random[i] = rand() % (N + 1) / (double)(N + 1);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << random[i] << endl; //输出产生的10个随机数
	}
	return 0;
}