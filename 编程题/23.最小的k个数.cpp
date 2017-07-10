//#include<iostream>
//#include<vector>
//#include<string>
//#include<set>
//#include<functional>
//using namespace std;
//class Solution 
//{
//public:
//	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) 
//	{
//		if (input.size() < k)
//			return vector<int>();
//		set<int,greater<int>> min_k;
//		for(decltype(input)::iterator it = input.begin(); it != input.end();it++)
//		{
//			if(min_k.size() < k)
//			{
//				min_k.insert(*it);
//			}
//			else
//			{
//				if(*it < *min_k.begin())
//				{
//					min_k.erase(min_k.begin());
//					min_k.insert(*it);
//				}
//			}
//		}
//		return vector<int>(min_k.rbegin(), min_k.rend());
//
//	}
//};
//int main()
//{
//
//
//}