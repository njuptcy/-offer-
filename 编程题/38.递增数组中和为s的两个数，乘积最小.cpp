//#include<iostream>
//#include<iterator>
//#include<vector>
//using namespace std;
//
//class Solution 
//{
//public:
//	vector<int> FindNumbersWithSum(vector<int> array, int sum)
//	{
//		//vector<int> result;
//		if (array.empty())
//			return vector<int>();
//		int res_behind = -1;
//		int res_ahead = -1;
//		int mul;
//		int min_mul = array[array.size() - 1] * array[array.size()-1];
//		int behind = 0;
//		int ahead = array.size() - 1;
//		int cur_sum;
//		while (behind < ahead)
//		{
//			cur_sum = array[behind] + array[ahead];
//			if(cur_sum < sum)
//			{
//				behind++;
//			}
//			else if(cur_sum > sum)
//			{
//				ahead--;
//			}
//			else
//			{
//				mul = array[behind] * array[ahead];
//				if(mul < min_mul)
//				{
//					res_behind = behind;
//					res_ahead = ahead;
//					min_mul = mul;
//				}
//				ahead--;
//				behind++;
//			}
//		}
//		if (res_behind == -1 || res_ahead == -1)
//			return vector<int>();
//		vector<int> result(2);
//		result[0] = array[res_behind];
//		result[1] = array[res_ahead];
//		return result;
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> input = {3,3,4,5,5,6,7,8};
//	int sum = 8;
//	vector<int> result = s.FindNumbersWithSum(input, sum);
//
//	ostream_iterator<int> os_it(cout, " ");
//	copy(result.begin(), result.end(), os_it);
//	getchar();
//
//}