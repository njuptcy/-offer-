//#include<iostream>
//using namespace std;
//class Solution 
//{
//public:
//	int Add(int num1, int num2)
//	{
//		while(num2 != 0)
//		{
//			int result = num1 ^ num2;
//			int carry = (num1 & num2) << 1;
//			num1 = result;
//			num2 = carry;
//		}
//		return num1;
//	}
//};
//
//int main()
//{
//	Solution s;
//	int result = s.Add(-100, 100);
//	cout << result << endl;
//	result = s.Add(0,0);
//	cout << result << endl;
//	result = s.Add(1,2);
//	cout << result << endl;
//	getchar();
//}