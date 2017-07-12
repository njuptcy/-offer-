//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution 
//{
//public:
//	string ReverseSentence(string str) 
//	{
//		string result;
//		string reverse(str.rbegin(), str.rend());
//		int begin = 0;
//		int index = reverse.find(' ');
//		while(index != string::npos)
//		{
//			string word = reverse.substr(begin, index);
//			//result.append(reverse.substr(begin, index + 1));
//			word = string(word.rbegin(), word.rend());
//			result.append(word);
//			result.push_back(' ');
//			begin = index + 1;
//			index = reverse.find(' ' , begin);
//		}
//		string word = reverse.substr(begin);
//		//result.append(reverse.substr(begin));
//		word = string(word.rbegin(), word.rend());
//		result.append(word);
//		return result;
//	}
//};
//
//int main()
//{
//	Solution s;
//	string str = "hello world";
//	string result = s.ReverseSentence(str);
//	cout << result << endl;
//	getchar();
//}