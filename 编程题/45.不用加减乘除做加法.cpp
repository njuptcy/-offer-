//#include<iostream>
//#include<vector>
//
//using namespace std;
//class Fun
//{
//private:
//	static int sum;
//	static int n;
//public:
//	Fun()
//	{
//		sum += n;
//		n++;
//	}
//	static int get_sum()
//	{
//		return sum;
//	}
//	~Fun()
//	{
//		n--;
//		sum -= n;
//	}
//};
//int Fun::sum = 0;
//int Fun::n = 1;
//class Solution 
//{
//public:
//	int Sum_Solution(int n) 
//	{
//		vector<Fun> arr(n);
//		return Fun::get_sum();
//	}
//};
//
//int main()
//{
//	Solution s;
//	int result = s.Sum_Solution(100);
//	cout << result << endl;
//	getchar();
//}