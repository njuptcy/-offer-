//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution 
//{
//public:
//	int LastRemaining_Solution(int n, int m)
//	{
//		if (n <= 0 || m <= 0)
//			return -1;
//		vector<int> f(n+1);
//		f[1] = 0;
//		//cout << f[1] << endl;
//		for(int i = 2; i <= n; i++)
//		{
//			f[i] = (f[i - 1] + m) % i;
//			//cout << f[i] << endl;
//		}
//		return f[n];
//	}
//};
//int main()
//{
//	Solution s;
//	s.LastRemaining_Solution(5,3);
//	getchar();
//}
