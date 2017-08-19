//#include<iostream>
//#include<bitset>
//using namespace std;
//class Solution 
//{
//public:
//	int Add(int num1, int num2)
//	{
//		//bitset<sizeof(int)> bits(0);
//		int get_digit = 1;
//		int carray = 0;
//		int result = 0;
//		int num1_temp = 0;
//		int num2_temp = 0;
//		for(int i = 0; i < sizeof(num1)*8;i++)
//		{
//			int bit_flag = get_digit << i;
//			num1_temp = num1 & bit_flag;
//			num2_temp = num2 & bit_flag;
//			carray = carray << i;
//			result |= num1_temp ^ num2_temp ^ carray;
//			if(num1_temp && num2_temp || num1_temp && carray 
//				|| num2_temp && carray)
//			{
//				carray = 1;
//				//carray = carray << i + 1;
//			}
//			else
//			{
//				carray = 0;
//			}
//		}
//		/*if (carray != 0)
//			return -1;*/
//		return result;
//	}
//};
//int main()
//{
//	Solution s;
//	//int result = s.Add(0x80000000, 0x80000000);
//	int result = s.Add(3, 4);
//	//int a = 0x80000000;
//	cout << result << endl;
//	getchar();
//}