#include<iostream>
using namespace std;
#include <random>

class Sort 
{
public:
	int* choicesort(int arr[],int size) 
	{
		if (arr == nullptr || size < 2)
			return 0;
		for (int i = 0;i < size;i++)//没减去1之前
		{
			for (int j = i + 1;j < size;j++)
			{
				if (arr[i] > arr[j])
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	   return arr;
	}

	int* Bububle(int arr[], int size)
	{
		if (arr == nullptr || size < 2)
			return 0;
		for (int i = 0;i < size-1;i++)
		{
			for (int j = 0;j < size - i-1;j++)
			{
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j+1];
					arr[j+1] = arr[j];
					arr[j] = temp;
				}
			}
		}
		return arr;
	}


	//插入排序
	int* insertsort(int arr[], int size)
	{
		if (arr == nullptr || size < 2)
			return 0;
		for (int i = 1;i < size;i++)
		{
			for (int j =i - 1;j >= 0 && arr[j]>arr[j+1];j--)
			{
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
		return arr;
	}

	void Myprint(int arr[],int size)
	{
		for (int i = 0;i < size;i++)
		{
			cout << arr[i] << " ";
		}
	}


   //得到一个随机数组，长度是n，长度随机
   //数组中的每一个数，都在1~v之间，数字大小随机
	int* randomArray(int n, int v)
	{  

		int* array = new int[n];
		for (int i = 0;i < n;i++)
		{	double randomNum = (double)(rand() % 101) / 100;
			array[i] = (int)(randomNum * v) + 1;
			//cout << array[i] << endl;
		}
		return array;
	}

	//为了验证
	int* copyArray(int arr[], int size)
	{
		int n = size;
		int* ans = new int[n];
		for (int i = 0;i < n;i++)
		{
			ans[i] = arr[i];
		}
		return ans;
	}


	bool sameArray(int Array1[], int Array2[],int n)
	{
		for (int i = 0;i < n;i++)
		{
			if(Array1[i] != Array2[i])
			return false;
		}
		return true;
	}

};

int main()
{
	Sort s;

	 //随机数组最大值
		int N = 10000;
		//随机数的范围
		int V = 100000;
		//测试次数
		int testtimes = 500;
		cout << "测试开始" << endl;
		for (int i = 0;i < testtimes;i++)
		{ // 创建一个随机数生成器对象
			srand((unsigned int)time(NULL));
			// 创建一个均匀分布的随机数分布对象，并指定范围
			double randomNum = (double)(rand() % 101) / 100;
			//设置一个随机长度
			int n = (int)(randomNum * N);
			//得到随机数组
			int* arr =s. randomArray(n, V);
			int* arr1 = s.copyArray(arr, n);
			int* arr2 = s.copyArray(arr, n);
			int* arr3 = s.copyArray(arr, n);


			s.choicesort(arr1, n);
			s.Bububle(arr2, n);
			s.insertsort(arr3, n);

			if (!s.sameArray(arr1, arr2, n) || !s.sameArray(arr1, arr3, n))
			{
				cout << "出错了" << endl;
			}

		}
		cout << "测试结束" << endl;


}


