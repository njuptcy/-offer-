//#include<iostream>
//#include<vector>
//#include<cstring>
//#include<unordered_set>
//using namespace std;
//
//class Eight_queue
//{
//public:
//	Eight_queue(int n)
//	{
//		//until = 0;
//		col_row = n;
//		pos = vector<int>(col_row, -1);
//		solution_count = 0;
//		//num_count = vector<int>(col_row, 0);
//	}
//	void get_all()
//	{
//		get_all_pos_permutation(0);
//	}
//private:
//	int col_row;
//	vector<int> pos;
//	//vector<int> num_count;
//	//vector<int> diagonal;
//	unordered_set<int> col_occur;
//	unordered_set<int> diagonal_occur;
//	unordered_set<int> r_diagonal_occur;
//	int solution_count;
//	//int until;
//	void printf_by_pos()
//	{
//		for(int i = 0; i < col_row; i++)
//		{
//			for(int j = 0; j < col_row; j++)
//			{
//				if(j == pos[i])
//				{
//					cout << "Q";
//				}
//				else
//				{
//					cout << "X";
//				}
//			}
//			cout << endl;
//		}
//	}
//	void get_all_pos_permutation(int row)
//	{
//		if(row >= col_row)
//		{
//			solution_count++;
//			cout << solution_count << ":"<<endl;
//			printf_by_pos();
//			cout << "***************" << endl;
//			return;
//		}
//		for(int col = 0; col < col_row; col++)
//		{
//			int dia = row - col;
//			int rdia = row + col;
//			if (col_occur.find(col) != col_occur.end() || diagonal_occur.find(dia) != diagonal_occur.end()||
//				r_diagonal_occur.find(rdia) != r_diagonal_occur.end())
//			{
//				continue;
//			}
//			col_occur.insert(col);
//			diagonal_occur.insert(dia);
//			r_diagonal_occur.insert(rdia);
//			pos[row] = col;
//			get_all_pos_permutation(row+1);
//			col_occur.erase(col);
//			diagonal_occur.erase(dia);
//			r_diagonal_occur.erase(rdia);
//			/*int diagonal = col + row;
//			if (diagonal_occur.find(diagonal) != diagonal_occur.end())
//				continue;
//			diagonal_occur.insert(diagonal);
//			diagonal = col - row;*/
//		}
//	}
//	
//
//
//	//bool is_valid(int until)
//	//{
//	//	ensure not at same colume
//	//	int num_count[n];
//	//	memset(num_count, 0, sizeof(int)*n);
//	//	/*for (int i = 0; i < until; i++)
//	//	{
//	//		int index = pos[i];
//	//		num_count[index] ++;
//	//		if (num_count[index] > 1)
//	//			return false;
//	//	}*/
//	//	/*for(int i = 0; i < until; i++)
//	//	{
//	//		if (num_count[i] > 1)
//	//			return false;
//	//	}
//	//	if()*/
//	//}
//
//};
//
//int main()
//{
//	Eight_queue eq(8);
//	eq.get_all();
//	getchar();
//}
//
