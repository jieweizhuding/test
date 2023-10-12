//1.数列递推与求和(注意是否需要更改数据类型)
#include <iostream>
using namespace std;
int main()
{
	int a, k, n, sum = 0;
	cout << "请输入要输出数列前几项的值" << endl;
	cin >> n;
	cout << "请输入已知共有几项:" << endl;
	cin >> k;
	cout << "请输入前" << k << "项" << endl;
	int* M = new int[n];//在堆上创建数组M[];
	for (int i = 0; i < n; i++)
	{
		*(M + i) = 0;
	}
	for (int i = 0; i < k; i++)
	{
		cin >> a;
		*(M+i) = a;
	}//将前k项输入数组中;
	for (; k < n; k++)
	{
		*(M+k) = *(M+k-1) + 1;//这里可以进行修改
	}//完成递推;
	for (int j = 0; j < n; j++)
	{
		cout << "第" << (j + 1) << "项为" << ":" << *(M+j) << endl;
		sum += *(M+j);
	}//输出数组各项并求和;
	cout << "前"<<n<<"项的和为" << sum << endl;
	delete[] M;//释放数组;
	return 0;
}