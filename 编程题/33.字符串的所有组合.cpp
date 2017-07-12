//#include<iostream>
//#include<string>
//using namespace std;
//
//void combination(char *pChar, string &result , int m, int tar_size)
//{
//	if( strlen(pChar) < m )
//	{
//		return;
//	}
//	if(result.size() == tar_size)
//	{
//		cout << result << endl;
//		return;
//	}
//	result.push_back(*pChar);
//	combination(pChar+1,result, m-1, tar_size);
//	result.pop_back();
//	combination(pChar+1,result,m, tar_size);
//}
//
//int main()
//{
//	//char *cond = "abc";
//	char *cond = "a";
//	string result;
//	int tar_size = 0;
//	combination(cond, result, tar_size, tar_size);
//	getchar();
//
//}