//#include<iostream>
//#include<limits>
//using namespace std;
//class Solution
//{
//public:
//	Solution():index(0)
//	{
//		for(int i =0; i < 256; i++)
//		{
//			occurence[i] = -1;
//		}
//	}
//	//Insert one char from stringstream
//	void Insert(char ch)
//	{
//		if(occurence[ch] == -1)
//		{
//			occurence[ch] = index;
//		}
//		else
//		{
//			occurence[ch] = -2;
//		}
//		index++;
//	}
//	//return the first appearence once char in current stringstream
//	char FirstAppearingOnce()
//	{
//		char ch = '\0';
//		int min = numeric_limits<int>::max();
//		for(int i = 0; i < 256; i++)
//		{
//			if(occurence[i] >= 0 && occurence[i] < min )
//			{
//				ch = (char)i;
//				min = occurence[i];
//			}
//		}
//		return ch;
//	}
//private:
//	int occurence[256];
//	int index;
//};
//
//// ==================== Test Code ====================
//void Test(char* testName, Solution chars, char expected)
//{
//	if (testName != NULL)
//		printf("%s begins: ", testName);
//
//	if (chars.FirstAppearingOnce() == expected)
//		printf("Passed.\n");
//	else
//		printf("FAILED.\n");
//}
//
//int main(int argc, char* argv[])
//{
//	Solution chars;
//
//	Test("Test1", chars, '\0');
//
//	chars.Insert('g');
//	Test("Test2", chars, 'g');
//
//	chars.Insert('o');
//	Test("Test3", chars, 'g');
//
//	chars.Insert('o');
//	Test("Test4", chars, 'g');
//
//	chars.Insert('g');
//	Test("Test5", chars, '\0');
//
//	chars.Insert('l');
//	Test("Test6", chars, 'l');
//
//	chars.Insert('e');
//	Test("Test7", chars, 'l');
//	
//	getchar();
//	return 0;
//}