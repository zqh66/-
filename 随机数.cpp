#include<iostream>
using namespace std;
#include<ctime>
//随机数大小是在0到RAND_MAX，值为2147483647，它是在stdlib中定义的，如果我们希望在某个范围内，可以使用 % 结合 / 来实现。
void test01()
{
	for (int i = 0; i < 10; i++)
		cout << rand() << endl;//值是固定的
}

void test02()
{
	srand(time(0));

	for (int i = 0; i < 10; i++)
		cout << rand() << endl;//但这里获取的值是不确定的
}

void test03()
{
	srand(time(0));
	for (int i = 0; i < 1000; i++)
		cout << rand() % 100+1 << endl;//【0，100）之间的整数随机数
}

void test04()
{
	srand(time(0));
	for (int i = 0; i < 100; i++)
		cout << (rand() % 10) * 0.1 << endl;//【0，1） rand这玩意只能生成整数
}

#include <iostream>
#include <random>
//这个例子中，首先使用std::random_device生成一个种子，然后将该种子传递给std::mt19937生成随机数生成器对象。
// 通过创建std::uniform_real_distribution对象，可以指定生成随机浮点数的范围。最后，通过调用dis(gen)来生成随机浮点数。

                       
int main() {
    // 创建一个随机数生成器对象
    std::random_device rd;
    std::mt19937 gen(rd());

    // 创建一个均匀分布的随机数分布对象，并指定范围
    std::uniform_real_distribution<> dis(0.0, 1.0);

   
    
	for (int i = 0;i < 10;i++)
	{ // 生成随机浮点数
		double randomNum = dis(gen);
   // 输出结果
    std::cout <<randomNum << std::endl;

	}
   
    return 0;
}
