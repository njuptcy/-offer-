//#include<iostream>
//#include<vector>
//#include<functional>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	//make_heapĬ�Ϲ�������
//	//�ر�ָ������greaterʱ��������С��
//	//ͷ�ļ���functional
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