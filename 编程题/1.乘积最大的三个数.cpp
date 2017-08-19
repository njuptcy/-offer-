//
//#include<iostream>
//#include<limits>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//void get_input(vector<int> &input)
//{
//	int n;
//	cin >> n;
//	input.resize(n);
//	for(int i = 0; i < n;i++)
//	{
//		cin >> input[i];
//	}
//}
//
//int main()
//{
//	vector<int> input;
//	get_input(input);
//	vector<int64_t> max(3, numeric_limits<int>::min());
//	vector<int64_t> min(2, numeric_limits<int>::max());
//	for(auto it = input.begin(); it != input.end(); it++)
//	{
//		if(*it > max[2])
//		{
//			max[0] = max[1];
//			max[1] = max[2];
//			max[2] = *it;
//		}
//		else if(*it > max[1])
//		{
//			max[0] = max[1];
//			max[1] = *it;
//		}
//		else if(*it > max[0])
//		{
//			max[0] = *it;
//		}
//
//		if(*it < min[0])
//		{
//			min[1] = min[0];
//			min[0] = *it;
//		}
//		else if(*it < min[1])
//		{
//			min[1] = *it;
//		}
//	}
//	int64_t result = std::max(max[0]*max[1]*max[2] , max[2]*min[0]*min[1]);
//
//	cout << result << endl;
//	getchar();
//
//}