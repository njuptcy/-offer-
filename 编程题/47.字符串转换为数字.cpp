//#include<iostream>
//#include<string>
//#include<limits>
//using namespace std;
//class Solution 
//{
//public:
//	//1.�ַ���Ϊ��
//	//2.�ַ����ĵ�һ���ַ�����Ϊ+ - 
//	//3.����һ���ַ�����������ַ�ֻ��Ϊ0~9
//	//4.���ֿ���Խ��
//	//5.ָ������������ָ�����Ϊ��
//	//6.����������ַ�������ͱ�ʾ0������޷�����
//
//	int StrToInt(string str) 
//	{
//		const long long positive_limit = 0x7fffffff;
//		const long long negetive_limit = 0x80000000;
//		if(str.size() <= 0)
//		{
//			return 0;
//		}
//		char ch;
//		long long num = 0;
//		int i = 0;
//		int sign = 1;
//		if (str[i] == '+')
//		{
//			i++;
//		}
//		else if( str[i] == '-')
//		{
//			i++;
//			sign = -1;
//		}
//		for( ; i < str.size(); i++)
//		{
//			ch = str.at(i);
//			if (ch < '0' || ch > '9')
//				return 0;
//			//num += (num * 10 + ch - '0');
//			num = num * 10 + ch - '0';
//			if (num > positive_limit && sign == 1)
//				return 0;
//			if (num > negetive_limit && sign == -1)
//				return 0;
//		}
//		return sign*num;
//	}
//};
//int main()
//{
//	Solution s;
//	string input1 = "";
//	int result;
//	result = s.StrToInt(input1);
//	cout << result << endl;
//
//	string input2 = "-100";
//	result = s.StrToInt(input2);
//	cout << result << endl;
//	 
//	string input3 = "+100";
//	result = s.StrToInt(input3);
//	cout << result << endl;
//
//	string input4 = "aa213213";
//	result = s.StrToInt(input4);
//	cout << result << endl;
//
//	string input5 = "999999999999";
//	result = s.StrToInt(input5);
//	cout << result << endl;
//	string input6 = "123";
//	result = s.StrToInt(input6);
//	cout << result << endl;
//
//	getchar();
//
//}