//#include<iostream>
//using namespace std;
//class Solution 
//{
//private:
//	bool scan_unsigned_integer(char **str)
//	{
//		const char *const pBefore = *str;
//		while(**str != '\0' && **str >= '0' 
//			&& **str <= '9')
//		{
//			(*str)++;
//		}
//		return *str > pBefore;
//	}
//
//	bool scan_integer(char **str)
//	{
//		if(**str == '+' || **str == '-')
//		{
//			(*str)++;
//		}
//		return scan_unsigned_integer(str);
//	}
//public:
//	bool isNumeric(char* string)
//	{
//		//整数部分必须要有
//		//如果有小数点，则小数点前后可以有选一为空
//		bool numeric = scan_integer(&string);
//		if(*string == '.')
//		{
//			string++;
//			numeric = scan_unsigned_integer(&string) || numeric;
//		}
//		if(*string == 'e' || *string == 'E')
//		{
//			string++;
//			numeric = scan_integer(&string) && numeric;
//		}
//		return *string == '\0' && numeric;
//	}
//};
//
//// ==================== Test Code ====================
//
//void Test(const char* testName,char* str, bool expected)
//{
//	Solution s;
//	if (testName != NULL)
//		printf("%s begins: ", testName);
//
//	if (s.isNumeric(str) == expected)
//		printf("Passed.\n");
//	else
//		printf("FAILED.\n");
//}
//
//
//int main(int argc, char* argv[])
//{
//	Test("Test1", "100", true);
//	Test("Test2", "123.45e+6", true);
//	Test("Test3", "+500", true);
//	Test("Test4", "5e2", true);
//	Test("Test5", "3.1416", true);
//	Test("Test6", "600.", true);
//	Test("Test7", "-.123", true);
//	Test("Test8", "-1E-16", true);
//	Test("Test9", "1.79769313486232E+308", true);
//
//	printf("\n\n");
//
//	Test("Test10", "12e", false);
//	Test("Test11", "1a3.14", false);
//	Test("Test12", "1+23", false);
//	Test("Test13", "1.2.3", false);
//	Test("Test14", "+-5", false);
//	Test("Test15", "12e+5.4", false);
//	Test("Test16", ".", false);
//	Test("Test17", ".e1", false);
//	Test("Test18", "+.", false);
//
//	getchar();
//	return 0;
//}