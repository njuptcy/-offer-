//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution 
//{
//private:
//	int get_digit_sum(int num)
//	{
//		int sum = 0;
//		int r_digit;
//		while(num != 0)
//		{
//			r_digit = num % 10;
//			num = num / 10;
//			sum += r_digit;
//		}
//		return sum;
//	}
//	void moving_count_core(int &count ,vector<vector<bool>> &visit, int threshold, int cur_x, int cur_y)
//	{
//		if(cur_x < 0 || cur_x > visit.size() - 1 || cur_y <0 || cur_y>visit[0].size() - 1||visit[cur_x][cur_y] ||
//			(( get_digit_sum(cur_x) + get_digit_sum(cur_y)) > threshold ))
//		{
//			return;
//		}
//		count++;
//		visit[cur_x][cur_y] = true;
//		moving_count_core(count, visit, threshold, cur_x-1, cur_y);
//		moving_count_core(count, visit, threshold, cur_x+1, cur_y);
//		moving_count_core(count, visit, threshold, cur_x, cur_y-1);
//		moving_count_core(count, visit, threshold, cur_x, cur_y+1);
//	}
//public:
//	int movingCount(int threshold, int rows, int cols)
//	{
//		int count = 0;
//		vector<vector<bool> > visit(rows, vector<bool>(cols));
//		for(int i = 0; i < visit.size(); i++)
//		{
//			for(int j = 0; j < visit[0].size(); j++)
//			{
//				visit[i][j] = false;
//			}
//		}
//		moving_count_core(count, visit, threshold, 0,0);
//		return count;
//	}
//};
//
//int main()
//{
//	Solution s;
//	int count = s.movingCount(18,20,20);
//	cout << count << endl;
//	getchar();
//
//}