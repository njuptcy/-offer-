//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution 
//{
//	int inverse_pairs_core(vector<int> &data, int begin, int end)
//	{
//		if (end - begin <= 0)
//			return 0;
//		vector<int> temp(end-begin+1);
//		int left_end = (begin + end) / 2;
//		int left_begin = begin;
//		int right_begin = left_end + 1;
//		int right_end = end;
//		int left_count = inverse_pairs_core(data, left_begin, left_end);
//		int right_count = inverse_pairs_core(data, right_begin, right_end);
//		int i = left_end;
//		int j = right_end;
//		int count = 0;
//
//		int index = (end-begin);
//		while(i>=left_begin && j>=right_begin)
//		{
//			if(data[i] > data[j])
//			{
//				count += j - right_begin + 1;
//				count = count % 1000000007;
//				temp[index--] = data[i];
//				i--;
//			}
//			else
//			{
//				temp[index--] = data[j];
//				j--;
//			}
//		}
//		while(i>= left_begin)
//		{
//			temp[index--] = data[i--];
//		}
//		while(j>= right_begin)
//		{
//			temp[index--] = data[j--];
//		}
//
//		for(int k = 0; k < temp.size(); k++)
//		{
//			data[begin + k] = temp[k];
//		}
//
//		return (count + left_count + right_count) % 1000000007;
//		/*for(int i = left_end; i >= left_begin; i--)
//		{
//			int j = right_end;
//
//		}*/
//	}
//public:
//	int InversePairs(vector<int> data) 
//	{
//		int result = inverse_pairs_core(data, 0, data.size() - 1);
//		return result;
//	}
//};
//
//int main()
//{
//	vector<int> input = {1,2,3,4,5,6,7,0};
//	Solution s;
//	int result = s.InversePairs(input);
//	cout << result << endl;
//	getchar();
//}