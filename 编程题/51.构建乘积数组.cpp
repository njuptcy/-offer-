//#include<iostream>
//#include<iterator>
//#include<vector>
//using namespace std;
//class Solution 
//{
//public:
//	vector<int> multiply(const vector<int>& A)
//	{
//		if(A.empty())
//		{
//			return vector<int>();
//		}
//		int len = A.size();
//		vector<int> result(len);
//		result[len-1] = 1;
//		for(int i = len-2 ; i >= 0; i--)
//		{
//			result[i] = result[i + 1] * A[i+1];
//		}
//		int c = 1;
//		for(int i = 0; i < result.size(); i++)
//		{
//			result[i] = c * result[i];
//			c = c * A[i];
//		}
//		return result;
//	}
//};
//
//int main()
//{
//	vector<int> input = {2,3,4,5};
//	Solution s;
//	vector<int> result = s.multiply(input);
//	ostream_iterator<int> os_it(cout , " ");
//	copy(result.begin(), result.end(), os_it);
//	getchar();
//}