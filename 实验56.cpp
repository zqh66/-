#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
//int main(void)
//{
//    int a[100], b[100], i, j, l, n;
//    set<int>box;
//    cin >> l >> n;
//    for (i = 0;i < n;i++)
//        cin >> a[i] >> b[i];
//    for (i = 0;i < n;i++)
//        for (j = a[i];j <= b[i];j++)
//            box.insert(j);
//    cout << l + 1 - box.size() << endl;
//    return 0;
//}
//
//
//
//int main()
//{
//    int i, j, L, a[2], b[10001], M, count = 0;
//    scanf("%d%d", &L, &M);
//    for (i = 0;i <= L;i++)
//        b[i] = 0;
//    for (i = 1;i <= M;i++) {
//        for (j = 0;j < 2;j++)
//            scanf("%d", &a[j]);
//        for (j = 0;j <= L;j++)
//            if (j >= a[0] && j <= a[1]) b[j] = 1;
//    }
//    for (i = 0;i <= L;i++)
//        if (b[i] == 0) count++;
//    printf("%d", count);
//    return 0;
//}

//
//void Pao_pao(int*arr,int length)
//{
//	int max = 0,temp=0;
//	for (int i = 0;i < length;i++)
//	{
//		if (arr[i] > max && arr[i] > 8)
//		{
//			max = arr[i];
//			temp = i + 1;
//		}
//		
//	}
//	cout << temp;
//
//}
//
//
//int main()
//{
//	int sum[7];
//	pair<int, int> Array[7];
//	for (int i = 0;i < 7;i++)
//	{
//		cin >> Array[i].first >> Array[i].second;
//		sum[i] = Array[i].first + Array[i].second;
//	}
//	
//	Pao_pao(sum, 7);
//}

//
//
//#include<iostream>
//using namespace std;   //作为新手的我会的都写上 
//int main()
//{
//    int a, b, s, max = 0, i, day = 0;  //a,b是我们津津（以下简称JJ）每天上课时间，s意为sum是上课时间之和 
//    for (i = 1;i < 8;i++)   // i为循环变量，day是JJ一周最不高兴的一天 
//    {
//        cin >> a >> b;    //输入a,b 
//        s = a + b;   //计算一天的上课时间 
//        if ((s > max) && (s > 8)) max = s, day = i;  //在超过8小时且比之前几天都大的s时，将s赋给最大值，并记录下JJ的这天 
//    }
//    cout << day; //由于day初值是0，所以如果JJ一周都开心就输出0 
//    return 0;



//
//int main()
//{
//	int Mom[13] = {0};
//	int self[13] ={0};
//	for (int i = 1;i <= 12;i++)
//	{
//		int budget;
//		cin >> budget;
//		int temp =self[i - 1] + 300 - budget;
//		if (temp< 0)
//		{
//			cout << -i;
//			return 0 ;
//		}
//		Mom[i] = (temp / 100) * 100;
//		self[i] = temp % 100;
//	}
//	int sum=0;
//	for (int i =1;i<=12;i++)
//	{
//		sum += Mom[i];
//	}
//	cout << 1.2 * sum+self[12];
//	return 0;
//}




//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	int sum = n, temp1, temp2;
//	do {
//		 temp1= n / k;
//		 temp2 = n % k;
//		 sum += temp1;
//		 n = (temp1 + temp2);
//	} while (n>=k);
//	cout << sum;
//}


//
//
//int main()
//{
//	int flag=0;
//	int k;
//	cin >> k;
//	for (int i = 10000;i <= 30000;i++)
//	{
//		if ((i / 100) % k == 0)
//		{
//			if (((i / 10) % 1000) % k== 0)
//			{
//				if ((i % 1000) % k == 0)
//				{
//					cout << i << endl;
//					flag = 1;
//				}
//			}
//		}
//	}
//	if (flag == 0)
//		cout << "No" << endl;
//}
//
//int main() {
//    int x;
//    scanf("%d", &x);
//    int i = 100; // 前三位 
//    bool emp = 0;
//    while (i % x != 0) i++; // 找到第一个能够被x整除的3位数 
//
//    int qe, es; // qe代表2-3两位，es代表3-4两位（为了方便都在后面加了个0） 
//    for (; i < 300; i += x) { // 穷举前三位 
//
//        qe = (i % 100) * 10; // 生成qe 
//
//        for (int j = 0; j < 10; j++) { // 穷举第四位 
//
//            if ((qe + j) % x != 0) continue; // 看看2-4位能不能被x整除 
//
//            es = (qe % 100 + j) * 10; // 生成es 
//
//            for (int u = 0; u < 10; u++) { // 穷举最后一位 
//
//                if ((es + u) % x != 0) continue; // 和前面那个差不多的整除判定 
//
//                printf("%d%d%d\n", i, j, u); // 输出 
//
//                emp = 1; // 打个标记 
//            }
//        }
//    }
//    if (300 % x == 0) { // 注意！注意！这里我特判了一下30000 （30000是只用判定前三位因为它后面都是0）因为，如果前面那个改成<=的话，那么会把30000~30999都给穷举进去 
//        emp = 1;
//        printf("30000");
//    }
//    if (!emp) printf("No"); // 如果一个都没有 



//
////这道题我想的是直接模拟，居然AC了...
////看了其他人的代码才发下我这个确实写复杂了
////不过很好理解（详见注释） 
//#include <iostream>
//using namespace std;
//int sub1(int n)            //题面中的sub1 
//{
//    int wan = n / 10000;    //取出这个数的万位，千位，百位 
//    int qian = n / 1000 % 10;
//    int bai = n / 100 % 10;
//    //下面就是把这三个数拼成一个数 
//    if (wan == 0)             //最高位不能为0，所以只拼下两位 
//        return qian * 10 + bai;
//    return wan * 100 + qian * 10 + bai;
//}
//int sub2(int n)            //题面中的sub2 
//{
//    int qian = n / 1000 % 10;    //取出这个数的千位，百位，十位 
//    int bai = n / 100 % 10;
//    int shi = n / 10 % 10;
//    if (qian == 0)            //同上，最高位不能为0 
//        return bai * 10 + shi;
//    return qian * 100 + bai * 10 + shi;
//}
//int sub3(int n)            //题面中的sub3 
//{
//    int bai = n / 100 % 10;    //取出这个数的百位，十位，个位 
//    int shi = n / 10 % 10;
//    int ge = n % 10;
//    if (bai == 0)            //同上，最高位不能为0 
//        return shi * 10 + ge;
//    return bai * 100 + shi * 10 + ge;
//}
//int main()
//{
//    int k;
//    cin >> k;
//    int judge = 0;                    //judge用来判断是否有解 
//    for (int i = 10000;i <= 30000;i++)    //按照题目中的范围枚举
//        if (sub1(i) % k == 0 &&
//            sub2(i) % k == 0 &&
//            sub3(i) % k == 0)                //模拟 
//        {
//            cout << i << endl;
//            judge++;            //答案加一 
//        }
//    if (judge == 0)
//        cout << "No";                 //没答案输出No 
//}

//#include<vector>
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int>temp;
//	for (int i = 0;i < n;i++)
//	{
//		vector<int>Jolly;
//		int value;
//		cin >> value;
//		Jolly.push_back(value);
//		if (i > 0)
//		{
//			temp.push_back(abs(Jolly[i] - Jolly[i - 1]));
//		}
//	}
//	for (int i = 1;i <= n - 1;i++)
//	{
//		
//
//	}
//}


int main()
{   
	int a[1000] = {0};
	int n;
	cin >> n;//4
	int* tptr = new int[n-1];//3
	for (int i = 0;i <n;i++)//i<4
	{
		cin >> a[i];
		if (i >0)
		{
			tptr[i - 1] = abs(a[i] - a[i - 1]);
		}
	}	
	int flag = 0;
	for (int i = 1;i <= n-1;i++)
	{
	
		for (int j = 0;j < n-1;j++)
		{
			cout << tptr[j] << " ";
			if (tptr[j] == i)
			{
				flag++;
				cout << endl;
				cout << flag;
				break;
			}
		}
		if (flag == n - 1)
		{
			cout << "Jolly" << endl;
		}
		else {
			cout << "Not jolly" << endl;
		}
	}
}