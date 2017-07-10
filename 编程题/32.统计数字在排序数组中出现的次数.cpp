//#include<vector>
//#include<iostream>
//using namespace std;
//class Solution 
//{
//public:
//	int GetNumberOfK(vector<int> data, int k)
//	{
//		int begin = 0;
//		int end = data.size()-1;
//		int median;
//		int first = -1;
//		while(begin <= end)
//		{
//			median = (begin + end) / 2;
//			if(data[median] < k)
//			{
//				begin = median+1;
//			}
//			else if(data[median] > k)
//			{
//				end = median-1;
//			}
//			else
//			{
//				if( median != 0 )
//				{
//					if( data[median-1] != k )
//					{
//						first = median;
//						break;
//					}
//					else
//					{
//						end = median-1;
//					}
//				}
//				else
//				{
//					first = median;
//					break;
//				}
//			}
//		}
//
//		if (first == -1)
//			return 0;
//
//		int last;
//		begin = 0;
//		end = data.size() - 1;
//		
//		while(begin <= end)
//		{
//			median = (begin + end) / 2;
//			if(data[median] < k)
//			{
//				begin = median;
//			}
//			else if(data[median] > k)
//			{
//				end = median;
//			}
//			else
//			{
//				if(median == data.size()-1)
//				{
//					last = median;
//					break;
//				}
//				else
//				{
//					if(data[median+1] != k)
//					{
//						last = median;
//						break;
//					}
//					else
//					{
//						begin = median + 1;
//					}
//				}
//			}
//		}
//		return last - first + 1;
//	}
//};
//
//int main()
//{
//	Solution s;
//	//vector<int> input = {1,2,3,3,3,3,3,4,5};
//	//vector<int> input = {1,2,4,5};
//	vector<int> input = {3};
//
//	int count = s.GetNumberOfK(input, 3);
//	cout << count << endl;
//	getchar();
//}
//
