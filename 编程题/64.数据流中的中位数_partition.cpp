//#include<iostream>
//#include<vector>
//#include<numeric>
//using namespace std;
//class Solution 
//{
//private:
//	vector<int> data;
//	int partition(int p, int r)
//	{
//		if(p > r)
//		{
//			return -1;
//		}
//		int j = p;
//		int i = p-1;
//		while(j < r)
//		{
//			if(data[j] < data[r])
//			{
//				i++;
//				swap(data[i], data[j]);
//			}
//			j++;
//		}
//		swap(data[i+1], data[r]);
//		return i + 1;
//	}
//public:
//	void Insert(int num)
//	{
//		data.push_back(num);
//	}
//	double GetMedian()
//	{
//		if(data.size()==0)
//		{
//			throw exception("No numbers are available");
//		}
//		int median = (data.size()-1) / 2;
//		int begin = 0;
//		int end = data.size() - 1;
//		int p = partition(begin, end);
//		while(p != median)
//		{
//			if(p < median)
//			{
//				begin = p+1;
//			}
//			else
//			{
//				end = p-1;
//			}
//			p = partition(begin, end);
//		}
//		int test = data.size() & 1;
//		if((data.size() & 1) == 0)
//		/*if(test == 0)*/
//		{
//			int median2 = median + 1;
//			begin = 0; 
//			end = data.size() - 1;
//			p = partition(begin, end);
//			while(p != median2)
//			{
//				if(p < median2)
//				{
//					begin = p+1;
//				}
//				else
//				{
//					end = p - 1;
//				}
//				p = partition(begin, end);
//			}
//			double result = (data[median] + data[median+1]) / 2.0;
//			//return (data[median] + data[median]) / 2;
//			return result;
//		}
//		else
//		{
//			return data[median];
//		}
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
//
//
