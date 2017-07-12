//#include<iostream>
//#include<string>
//using namespace std;
//
//
//const int max = 6;
//void get_all_permutation(int cur_left, string &result)
//{
//	if (cur_left == 0)
//	{
//		cout << result << endl;
//		return;
//	}
//	char num[2];
//	for(int i = 1; i <= max; i++ )
//	{
//		sprintf(num, "%d", i);
//		result.push_back(num[0]);
//		get_all_permutation(cur_left-1, result);
//		result.pop_back();
//	}
//}
//int main()
//{
//	string result;
//	get_all_permutation(2,result);
//	getchar();
//}