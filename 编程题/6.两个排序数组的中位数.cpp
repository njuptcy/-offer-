//#include<iostream>
//#include<vector>
//using namespace std;
//
//inline double get_median(int begin, int end, vector<int>& arr)
//{
//	int median1 = (begin + end) / 2;
//	int median2 = (begin + end - 1) / 2;
//	return (arr[median1] + arr[median2]) / 2;
//	
//}
//
//
//double median(vector<int>& arr1, vector<int>& arr2)
//{
//	int begin1 = 0, end1 = arr1.size();	
//	int median1 = (begin1 + end1) / 2;
//	int begin2 = 0, end2 = arr2.size();
//	int median2 = (begin2 + end2) / 2;
//
//
//	while(true)
//	{
//
//		if((end1-begin1) == 1 && (end2 - begin1) == 1)
//		{
//			return (arr1[begin1] + arr2[begin2]) / 2.0;
//		}
//
//		if( begin1 >= end1 ) //Èôarr1Îª¿Õ
//		{
//			return get_median(begin2, end2, arr2);
//		}
//		if(begin2 >= end2)
//		{
//			return get_median(begin1, end1, arr1);
//		}
//
//
//		double median_v1 = get_median(begin1, end1, arr1);
//		double median_v2 = get_median(begin2, end2, arr2);	
//		if( median_v1 < median_v2 )
//		{
//			int left_len = median1 - begin1 + 1;
//			int right_len = end2 - median2 ;
//			int min_len = left_len < right_len ? left_len : right_len;
//			begin1 += min_len;
//			end2 -= min_len;
//		}
//		else if( median_v1 > median_v2   )
//		{
//			int left_len = median2 - begin2 + 1;
//			int right_len = end1 - median1 ;
//			int min_len = left_len < right_len ? left_len : right_len;
//			begin2 += min_len;
//			end2 -= min_len;
//		}
//		else
//		{
//			return median_v1;
//		}
//
//		median1 = (begin1 + end1) / 2;
//		median2 = (begin2 + end2) / 2;
//
//		//if(  begin1 >= end1   )
//		//{
//		//	return get_median(begin2, end2, arr2);
//		//}
//		//if(begin2 >= end2)
//		//{
//		//	return get_median(begin1, end1, arr1);
//		//}
//
//	}
//}
//
//
//int main()
//{
//	//1,4,5,5,7,8,9
//	/*int test1_1[] = {1,4,5,5,9};
//	int test1_2[] = {6,8};
//
//	vector<int> arr1(test1_1, test1_1 + 5);
//	vector<int> arr2(test1_2, test1_2 + 2);*/
//
//	vector<int> arr1{ 1 };
//	vector<int> arr2{ 2 };
//
//
//	double result = median(arr1 , arr2);
//	cout << result << endl;
//	getchar();
//
//
// 
//
//}