//#include<iostream>
//using namespace std;
//
//void permutation(char *pChar, char* begin)
//{
//	static int count = 0;
//	if (*begin == '\0')
//	{
//		printf("%s\n", pChar);
//		count++;
//		printf("%d\n", count);
//	}
//
//	for(char *p_swap = begin; *p_swap != '\0'; p_swap++)
//	{
//		char temp = *p_swap;
//		*p_swap = *begin;
//		*begin = temp;
//		permutation(pChar, begin+1);
//
//	    temp = *p_swap;
//		*p_swap = *begin;
//		*begin = temp;
//	}
//}
//
//int main()
//{
//	char input[20] = "aaa";
//	permutation(input, input);
//	getchar();
//}