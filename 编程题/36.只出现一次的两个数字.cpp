//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution 
//{
//private:
//	int find_first_not_zero(int num)
//	{
//		int flag = 1;
//		int i = 0;
//		while( !(flag & num)  && i < 8*sizeof(num))
//		{
//			i++ ;
//			flag = flag << 1;
//		}
//		if (i == 8 * sizeof(num))
//			return -1;
//		return i;
//	}
//
//	bool is_one_at_index(int num, int index)
//	{
//		if(index >= 8*sizeof(int))
//		{
//			return false;
//		}
//		int flag = 1;
//		flag = flag << index;
//		return flag & num;
//	}
//public:
//	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2)
//	{
//		int xor_result = 0;
//		for(decltype(data)::iterator it = data.begin(); it != data.end(); it++)
//		{
//			xor_result = xor_result ^ *it;
//		}
//		int index = find_first_not_zero(xor_result);
//		*num1 = 0;
//		*num2 = 0;
//		for(decltype(data)::iterator it = data.begin(); it != data.end(); it++)
//		{
//			if(is_one_at_index(*it, index)) 
//			{
//				*num1 = *num1 ^ *it;
//			}
//			else
//			{
//				*num2 = *num2 ^ *it;
//			}
//		}
//		
//	}
//};
//
//int main()
//{
//	vector<int> input = {2,2,3,3,4,4,1,5};
//	Solution s;
//	int num1;
//	int num2;
//	s.FindNumsAppearOnce(input,&num1, &num2);
//	cout << num1 << num2;
//	getchar();
//}