//#include<iostream>
//#include<deque>
//#include<vector>
//using namespace std;
//
//class Solution 
//{
//public:
//	vector<vector<int> > FindContinuousSequence(int sum) 
//	{
//		int small = 1;
//		int big = 2;
//		int cur_sum = small + big;
//		deque<int> q;
//		q.push_back(small);
//		q.push_back(big);
//		vector<vector<int> > result;
//		//vector<int> result;
//		//result.push_back(small);
//		//result.push_back(big);
//		
//		while(small < (sum+1)/2)
//		{
//			if(cur_sum > sum)
//			{
//				cur_sum -= small;
//				small++;
//				q.pop_front();
//			}
//			else if(cur_sum < sum)
//			{
//				big++;
//				cur_sum += big;
//				q.push_back(big);
//			}
//			else
//			{
//				result.emplace_back(q.begin(), q.end());
//				big++;
//				cur_sum += big;
//				q.push_back(big);
//			}
//		}
//		return result;
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<vector<int> > result = s.FindContinuousSequence(10);
//	for(auto it = result.begin(); it != result.end(); it++)
//	{
//		for(auto it2 = (*it).begin(); it2 != (*it).end(); it2++)
//		{
//			cout << *it2 << " ";
//		}
//		cout << endl;
//	}
//
//	getchar();
//	return 0;
//}