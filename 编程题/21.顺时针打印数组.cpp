//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//private:
//
//	void print_cycle2(vector<vector<int> > &matrix,
//		int start, vector<int> &result)
//	{
//		int rows = matrix.size() - 1;
//		int cols = matrix[0].size() - 1;
//		int end_x = rows - start;
//		int end_y = cols - start;
//
//		int j = start;
//		while(j<= end_y)
//		{
//			result.push_back(matrix[start][j]);
//			j++;
//		}
//		j = end_y;
//		int i = start + 1;
//		while(i<=end_x)
//		{
//			result.push_back(matrix[i][j]);
//			i++;
//		}
//
//		i = end_x;
//		j = end_y - 1;
//		if (start < end_x)
//		{
//			while (j >= start)
//			{
//				result.push_back(matrix[i][j]);
//				j--;
//			}
//		}
//
//		i = end_x - 1;
//		j = start;
//		if(start < end_y)
//		{
//			while(i>start)
//			{
//				result.push_back(matrix[i][j]);
//				i--;
//			}
//		}
//		
//
//	}
//	void print_cycle(vector<vector<int> > &matrix, 
//		int start_x, int start_y, vector<int> &result)
//	{
//		int rows = matrix.size()-1;
//		int cols = matrix[0].size()-1;
//		int end_x = rows - start_x;
//		int end_y = cols - start_y;
//
//		if(start_x == end_x)
//		{
//			for(int j = start_y ; j <= end_y;j++)
//			{
//				result.push_back(matrix[start_x][j]);
//			}
//			return;
//		}
//		if(start_y == end_y)
//		{
//			for (int i = start_x; i <= end_x; i++)
//			{
//				result.push_back(matrix[i][start_y]);
//			}
//			return;
//		}
//
//		int j = start_y;
//		while(j <= end_y)
//		{
//			//cout << matrix[start_x][j] << " ";
//			result.push_back(matrix[start_x][j]);
//			j++;
//		}
//		j--;
//		/*for(int j = start_y; j<=end_y; j++)
//		{
//			cout << matrix[start_x][j] << " ";
//		}*/
//		int i = start_x + 1;
//		while(i <= end_x)
//		{
//			//cout << matrix[i][j] << " ";
//			result.push_back(matrix[i][j]);
//			i++;
//		}
//		i--;
//
//		j = end_y - 1;
//		while(j>= start_y)
//		{
//			//cout << matrix[i][j] << " ";
//			result.push_back(matrix[i][j]);
//			j--;
//		}
//		j++;
//
//		i = end_x - 1;
//		while(i > start_x)
//		{
//			//cout << matrix[i][j] << " ";
//			result.push_back(matrix[i][j]);
//			i--;
//		}
//
//	}
//public:
//	vector<int> printMatrix(vector<vector<int> > matrix) 
//	{
//		int start_x = 0;
//		int start_y = 0;
//		int rows = matrix.size() - 1;
//		int cols = matrix[0].size() - 1;
//		vector<int> result;
//		while(start_x <= rows/2 && start_y <= cols/2)
//		{
//			//print_cycle(matrix, start_x, start_y, result);
//			print_cycle2(matrix, start_x, result); 
//			start_x++;
//			start_y++;
//		}
//		return result;
//	}
//
//};
//
//int main()
//{
//	Solution s;
//	int rows = 5;
//	int cols = 1;
//	vector<vector<int>> input(rows, vector<int>(cols));
//	for(int i = 0; i < rows; i++)
//	{
//		for(int j = 0; j < cols;j++)
//		{
//			input[i][j] = i*cols + j;
//		}
//	}
//	vector<int> result = s.printMatrix(input);
//	for(int i = 0; i < result.size(); i++)
//	{
//		cout << result[i] << " ";
//	}
//	getchar();
//}