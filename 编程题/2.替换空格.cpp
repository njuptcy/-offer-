//#include<iostream>
//using namespace std;
//class Solution 
//{
//public:
//	void replaceSpace(char *str, int length) 
//	{
//		int count = 0;
//		for(int i = 0; i < length; i++)
//		{
//			if( ' ' == str[i])
//			{
//				count++;
//			}
//		}
//
//		int index1 = length - 1;
//		int index2 = length + 2 * count - 1;
//		
//		while( index1 != index2 )
//		{
//			if( ' ' == str[index1])
//			{
//				str[index2--] = '0';
//				str[index2--] = '2';
//				str[index2--] = '%';
//
//			}
//			else
//			{
//				str[index2--] = str[index1];
//			}
//			index1--;
//		}
//	}
//};
//
//int main()
//{
//	char str[30] = "we are happy ";
//	Solution s;
//	int len = strlen(str);
//	cout << len << endl;
//	s.replaceSpace(str,len);
//	cout << str << endl;
//	getchar();
//
//}