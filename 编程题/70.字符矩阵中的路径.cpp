//#include<vector>
//#include<iostream>
//using namespace std;
//
//class Solution 
//{
//private:
//	/*bool *visit;
//	int row;
//	int col;*/
//	bool has_path_core(char*str, char *mat, int rows, int cols, 
//		int r, int c, std::vector<std::vector<bool> > &visit)
//	{
//		if (*str == mat[r*cols + c] && *(str + 1) == '\0')
//			return true;
//		/*if (*str == '\0')
//			return true;*/
//		if(*str != mat[r*cols + c])
//		{
//			return false;
//		}
//		visit[r][c] = true;
//		if(r-1 >= 0 && !visit[r-1][c])
//		{
//			if (has_path_core(str + 1, mat, rows, cols, r - 1, c, visit))
//				return true;
//		}
//		if(r+1 < visit.size() && !visit[r+1][c])
//		{
//			if (has_path_core(str + 1, mat, rows, cols, r + 1, c, visit))
//				return true;
//		}
//		if(c-1>=0 && !visit[r][c-1])
//		{
//			if (has_path_core(str + 1, mat, rows, cols, r, c - 1, visit))
//				return true;
//		}
//		if(c+1< visit[0].size() && !visit[r][c+1])
//		{
//			if (has_path_core(str + 1, mat, rows, cols, r, c + 1, visit))
//				return true;
//		}
//		visit[r][c] = false;
//		return false;
//	}
//public:
//	bool hasPath(char* matrix, int rows, int cols, char* str)
//	{
//		if(matrix == NULL || str == NULL || strlen(str) > rows*cols)
//		{
//			return false;
//		}
//		std::vector<std::vector<bool> > visit(rows, std::vector<bool>(cols));
//		for(auto it = visit.begin(); it != visit.end(); it++)
//		{
//			for(auto it2 = (*it).begin(); it2 != (*it).end(); it2++)
//			{
//				*it2 = false;
//			}
//		}
//		for(int i = 0; i < rows; i++)
//		{
//			for(int j = 0; j < cols; j++)
//			{
//				if (has_path_core(str, matrix, rows, cols, i, j, visit))
//					return true;
//			}
//		}
//		return false;
//	}
//};
//
//int main()
//{
//
//	char *mat = "AAAAAAAAAAAA";
//	char *str = "AAAAAAAAAAAA";
//	Solution s;
//	bool result = s.hasPath(mat, 3, 4,str);
//	cout << result << endl;
//	getchar();
//
//}