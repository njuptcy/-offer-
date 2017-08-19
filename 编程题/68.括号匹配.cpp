//#include<stack>
//#include<iostream>
//using namespace std;
//
//bool valid_nesting(const stack<char>& s, char ch)
//{
//
//	if(s.empty())
//	{
//		/*if (ch == '(')
//			return true;
//		return false;*/
//		return true;
//	}
//	char top = s.top();
//	if(ch == '(')
//	{
//		if( !(top == '['))
//		{
//			return false;
//		}
//		
//	}
//	else if(ch == '[')
//	{
//		if(!(top == '{'))
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//bool match(char ch1, char ch2)
//{
//	switch(ch2)
//	{
//	case '}':return ch1 == '{';
//	case ']':return ch1 == '[';
//	case ')':return ch1 == '(';
//	default:return false;
//	}
//
//}
//
//bool valid_expr(const char *str)
//{
//	if (str == NULL || *str == '\0')
//		return false;
//	stack<char> s;
//	const char *pChar = str;
//	while(*pChar != '\0')
//	{
//		char ch = *pChar;
//		if(ch == '{' || ch == '[' || ch =='(')
//		{
//			if (valid_nesting(s, ch))
//			{
//				s.push(ch);
//			}
//			else
//			{
//				return false;
//			}
//		}
//		else if(ch == '}' || ch ==']' || ch ==')')
//		{
//			if(!s.empty() && match(s.top(), ch))
//			{
//				s.pop();
//			}
//			else
//			{
//				return false;
//			}
//		}
//		pChar++;
//	}
//	return true;
//}
//
//
//void test(const char *testname, const char *input, bool expected )
//{
//	if(testname != NULL)
//	{
//		printf("%s begin:\n", testname);
//	}
//	if(valid_expr(input) == expected)
//	{
//		printf("pass\n");
//	}
//	else
//	{
//		printf("FAILED\n");
//	}
//}
//
//int main()
//{
//	test("test1", NULL, false);
//	test("test2", "", false);
//	test("test3", "{asdfd{111[34(3443)234]434}3324}", true);
//	test("test4", "{[()]}()",true);
//	test("test5", "{[(())]}", false);
//	getchar();
//}