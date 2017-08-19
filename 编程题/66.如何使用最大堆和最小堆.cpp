//#include<iostream>
//#include<vector>
//#include<functional>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	//make_heap默认构造最大堆
//	//特别指定参数greater时，构建最小堆
//	//头文件：functional
//	vector<int> heap = {10,20,30,5,15};
//	make_heap(heap.begin(), heap.end());
//	cout << "Initial max heap:" << heap.front() <<endl;
//	for(auto it = heap.begin(); it != heap.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	make_heap(heap.begin(), heap.end(), greater<int>());
//	cout << "Initial min heap:" << heap.front() << endl;
//	for (auto it = heap.begin(); it != heap.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	getchar();
//}