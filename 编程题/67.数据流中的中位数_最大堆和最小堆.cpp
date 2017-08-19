//#include<iostream>
//#include<algorithm>
//#include<functional>
//#include<vector>
//using namespace std;
//
////template<typename T>
//class Solution
//{
//private:
//	vector<int> max_heap;
//	vector<int> min_heap;
//	int index;
//public:
//	Solution():index(0)
//	{
//	}
//
//	void Insert(int num)
//	{
//	/*	int result = index & 1;
//		int result2 = (index & 1 == 0);
//		int result3 = (1 == 0);*/
//		//&的优先级低于==的优先级
//		//if(index & 1 == 0)
//		if((index & 1)==0)
//		{
//			if(!min_heap.empty()&&num > min_heap[0])
//			{
//				//swap(num, min_heap[0]);
//				//make_heap(min_heap.begin(), min_heap.end(), greater<int>());
//				pop_heap(min_heap.begin(), min_heap.end(), greater<int>());
//				swap(num, min_heap[min_heap.size()-1]);
//				push_heap(min_heap.begin(), min_heap.end(), greater<int>());
//			}
//			max_heap.push_back(num);
//			push_heap(max_heap.begin(), max_heap.end(), less<int>());
//		}
//		else
//		{
//	
//			if(!max_heap.empty() && num < max_heap[0])
//			{
//				//swap(num , max_heap[0]);
//				//make_heap(max_heap[]);
//				pop_heap(max_heap.begin(), max_heap.end(), less<int>());
//				swap(num, max_heap[max_heap.size()-1]);
//				push_heap(max_heap.begin(), max_heap.end(),less<int>());
//			}
//			min_heap.push_back(num);
//			push_heap(min_heap.begin(), min_heap.end(), greater<int>());
//		}
//		index++;
//		return;
//	}
//
//	double GetMedian()
//	{
//		if(index == 0)
//		{
//			throw exception("no data avaliable");
//		}
//		double result;
//		if((index & 1)== 0 )
//		{
//			//整数相除还是整数
//			result = (max_heap[0] + min_heap[0]) / 2.0;
//		}
//		else
//		{
//			result = max_heap[0];
//		}
//		return result;
//	}
//};
//
//
//void Test(char *testName, Solution &s, double expected )
//{
//	if(testName != NULL)
//	{
//		printf("%s begin:", testName);
//	}
//	if( abs(s.GetMedian() - expected) < numeric_limits<double>::epsilon())
//	{
//		printf("Passed.\n");
//	}
//	else
//	{
//		printf("FAILED.\n");
//	}
//}
//
//
//int main(int argc, char* argv[])
//{
//	Solution numbers;
//
//	printf("Test1 begins: ");
//	try
//	{
//		numbers.GetMedian();
//		printf("FAILED.\n");
//	}
//	catch (exception e)
//	{
//		printf("Passed.\n");
//	}
//
//	numbers.Insert(5);
//	Test("Test2", numbers, 5);
//
//	numbers.Insert(2);
//	Test("Test3", numbers, 3.5);
//
//	numbers.Insert(3);
//	Test("Test4", numbers, 3);
//
//	numbers.Insert(4);
//	Test("Test6", numbers, 3.5);
//
//	numbers.Insert(1);
//	Test("Test5", numbers, 3);
//
//	numbers.Insert(6);
//	Test("Test7", numbers, 3.5);
//
//	numbers.Insert(7);
//	Test("Test8", numbers, 4);
//
//	numbers.Insert(0);
//	Test("Test9", numbers, 3.5);
//
//	numbers.Insert(8);
//	Test("Test10", numbers, 4);
//
//	getchar();
//	return 0;
//}