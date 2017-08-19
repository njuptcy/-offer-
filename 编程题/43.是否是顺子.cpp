//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Solution 
//{
//public:
//	bool IsContinuous(vector<int> numbers) 
//	{
//		if(numbers.size() < 5)
//		{
//			return false;
//		}
//		int zero;
//		int small = 0;
//		int gap = 0;
//		sort(numbers.begin(), numbers.end());
//		while(numbers[small] == 0)
//		{
//			small++;
//		}
//		zero = small;
//		int bef = small;
//		while(small < numbers.size() -1)
//		{
//			gap += numbers[small + 1] - numbers[small] - 1;
//			small++;
//			if (numbers[bef] == numbers[small])
//				return false;
//			bef = small;
//		}
//		if(gap <= zero)
//		{
//			return true;
//		}
//		return false;
//	}
//};
//
//int main()
//{
//	Solution s;
//	//vector<int> num = {1,2,4,5,0};
//	//vector<int> num = {1,1,0,0,0};
//	vector<int> num = {1,3,2,5,4};
//	bool res = s.IsContinuous(num);
//	cout << std::boolalpha << res << endl;
//	getchar();
//}