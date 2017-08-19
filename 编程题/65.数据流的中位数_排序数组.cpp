//#include<iostream>
//#include<vector>
//using namespace std;
//
////template<typename T>
//class Solution
//{
//private:
//	vector<int> data;
//public:
//	void Insert(int num)
//	{
//		if (data.size() == 0)
//		{
//			data.push_back(num);
//			return;
//		}
//		int begin = -1; 
//		int end = data.size();
//		int median = 0;
//	/*	while(1)
//		{
//			median = (begin + end) / 2;
//			if(data[median] > num)
//			{
//				end = median - 1;
//			}
//			else
//			{
//				if(data[median + 1] > num)
//				{
//					break;
//				}
//				else
//				{
//					begin = median +1;
//				}
//			}
//		}*/
//
//		//if (data.size() <= 2)
//		//{
//		//	if (data.size() == 0)
//		//	{
//		//		data.push_back(num);
//		//	}
//		//	else
//		//	{
//		//		if ( data[begin] > num)
//		//		{
//		//			data.insert(data.begin, num);
//		//		}
//		//	}
//		//	return;
//		//}
//
//		do
//		{
//			median = (begin + end) / 2;
//			if(data[median] < num)
//			{
//				begin = median;
//			}
//			else
//			{
//				end = median;
//			}
//		} while (end - begin > 1);
//		auto it = data.begin() + end;
//		data.insert(it, num);
//	}
//
//
//	double GetMedian()
//	{
//		if (data.size() == 0)
//			throw exception("No number available.");
//		int median = (data.size() - 1) / 2;
//		if(data.size() & 1 == 1)
//		{
//			return data[median];
//		}
//		else
//		{
//			return (data[median] + data[median+1]) / 2.0;
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