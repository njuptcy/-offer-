////���ɿ���n�飬�����ֱ�Ϊh1 h2...
////��С����m������Ҫ�ɿ���������Ϊ w1 w2...
////ÿ����ֻ�ֵܷ�һ���ɿ�����һ���ɿ���ֻ�ָܷ�һ����
////��η֣�ʹ�÷ֵ��ɿ�����С���ѵ��������
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