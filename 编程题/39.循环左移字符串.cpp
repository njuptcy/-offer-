//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//
//class Solution 
//{
//public:
//	string LeftRotateString(string str, int n) 
//	{
//		
//		if (str.empty())
//			return "";
//		int n_mod = n % str.size();
//		string result;
//		result = str.substr(n_mod, str.size());
//		result.append(str.substr(0, n_mod));
//		return result;
//	}
//};
//
//int main()
//{
//	Solution s;
//	string str = "abcdef";
//	string str2 = "abc";
//	string result = s.LeftRotateString(str, 2);
//	cout << result << endl;
//	cout << s.LeftRotateString(str2, 3) << endl;
//	cout << s.LeftRotateString(str2, 4) << endl;
//	getchar();
//}