//#include<iostream>
//#include<unordered_map>
//using namespace std;
//class Solution 
//{
//public:
//	int FirstNotRepeatingChar(string str) 
//	{
//		unordered_map<char, unsigned int> count_map;
//		for(int i = 0; i < str.size();i++)
//		{
//			count_map[str.at(i)]++;
//		}
//		/*for(auto it = count_map.begin(); it != count_map.end(); it++)
//		{
//			cout << it->first <<" "<<it->second << endl;
//		}*/
//		for(int i = 0; i < str.size(); i++)
//		{
//			auto it = count_map.find(str.at(i));
//			{
//				if (it == count_map.end())
//					continue;
//				if(it->second == 1)
//				{
//					return i;
//				}
//			}
//		}
//		return -1;
//	}
//};
//int main()
//{
//	Solution s;
//	int index = s.FirstNotRepeatingChar("akbdcdfefdadfsdef");
//	cout << index << endl;
//	getchar();
//
//}