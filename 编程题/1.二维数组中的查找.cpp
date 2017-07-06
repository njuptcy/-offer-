//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution 
//{
//public:
//	bool Find(int target, vector<vector<int> > array) 
//	{
//		int row_begin = 0;
//		int col_end = array[0].size() - 1;
//
//		while(row_begin < array.size() && col_end >= 0)
//		{
//			if(array[row_begin][col_end] > target)
//			{
//				col_end--;
//			}
//			else if(array[row_begin][col_end] < target )
//			{
//				row_begin++;
//			}
//			else
//			{
//				return true;
//			}       
//
//		}
//		return false;
//	}
//};
//
//
