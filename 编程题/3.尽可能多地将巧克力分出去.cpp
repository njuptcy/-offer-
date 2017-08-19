////有巧克力n块，重量分别为h1 h2...
////有小朋友m个，需要巧克力的重量为 w1 w2...
////每个人只能分到一块巧克力，一块巧克力只能分给一个人
////如何分，使得分到巧克力的小朋友的人数最多
//
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//void get_input(vector<int> &h, vector<int> &w)
//{   
//	int n, m;
//	cin >> n;
//	h.resize(n);
//	for(int i = 0; i < n; i++)
//	{
//		cin >> h[i];
//	}
//	cin >> m;
//	w.resize(m);
//	for(int i = 0; i < m; i++)
//	{
//		cin >> w[i];
//	}
//}
//
////bool is_exit()
////{
////	char input[10];
////	while(true)
////	{
////		cin >> input;
////		if(strcmp(input,"exit") == 0)
////		{
////			return true;
////		}
////	}
////	return false;
////}
//int main()
//{
//	
//	vector<int> h;
//	vector<int> w;
//	get_input(h,w);
//	sort(h.begin(), h.end());
//	sort(w.begin(), w.end());
//
//	int i = 0, j = 0;
//	while(i < h.size() && j < w.size())
//	{
//		if(h[i] >= w[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	cout << j << endl;
//	/*getchar();
//	getchar();*/
//	//is_exit();
//}