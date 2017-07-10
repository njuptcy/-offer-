//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution 
//{
//private:
//	int get_min(int p2, int p3, int p5, const vector<int> v)
//	{
//		int cur_2 = v[p2] * 2;
//		int cur_3 = v[p3] * 3;
//		int cur_5 = v[p5] * 5;
//
//		int min = cur_2 < cur_3?cur_2:cur_3;
//		min = cur_5 < min ? cur_5 : min;
//		return min;
//	}
//public:
//	int GetUglyNumber_Solution(int index)
//	{
//		if (index <= 0)
//			return 0;
//		vector<int> ugly_num(index);
//		ugly_num[0] = 1;
//		int pointer_to_2 = 0;
//		int pointer_to_3 = 0;
//		int pointer_to_5 = 0;
//		for(int i = 1; i < index ;i++)
//		{
//			int min = get_min(pointer_to_2, pointer_to_3, pointer_to_5, ugly_num);
//			ugly_num[i] = min;
//			while (ugly_num[pointer_to_2] * 2 <= min)
//				pointer_to_2++;
//			while (ugly_num[pointer_to_3] * 3 <= min)
//				pointer_to_3++;
//			while (ugly_num[pointer_to_5] * 5 <= min)
//				pointer_to_5++;
//		}
//		return ugly_num[index-1];
//	}
//};
//
//int main()
//{
//	Solution s;
//	int result = s.GetUglyNumber_Solution(5);
//	cout << result << endl;
//	getchar();
//}