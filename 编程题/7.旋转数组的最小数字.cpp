//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int minNumberInRotateArray(vector<int> rotateArray)
//	{
//		if (rotateArray.size() == 0)
//		{
//			return 0;
//		}
//		int left = 0;
//		int right = rotateArray.size() - 1;
//
//		if(rotateArray[right] > rotateArray[left])
//		{
//			return rotateArray[left];
//		}
//
//		while (right - left > 1)
//		{
//			int median = (left + right) / 2;
//			if (rotateArray[median] > rotateArray[left])
//			{
//				left = median;
//			}
//			else if (rotateArray[median] < rotateArray[left])
//			{
//				right = median;
//			}
//			else
//			{
//				if (rotateArray[median] == rotateArray[right])
//				{
//					int min = rotateArray[left];
//					for(int i = left + 1; i <= right; i++)
//					{
//						if( rotateArray[i] < min)
//						{
//							min = rotateArray[i];
//						}
//					}
//					return min;
//				}
//				else
//				{
//					left = median;
//				}
//			}
//		}
//		return rotateArray[right];
//	}
//};
//
//int main()
//{
//	//int arr[] = {3,4,5,1,2};
//	//int arr[] = {1,2,3,4,5};
//	int arr[] = {1,1,1,0,1};
//	vector<int> rotateArray(arr, arr + sizeof(arr)/sizeof(arr[0]));
//	Solution s;
//	int result = s.minNumberInRotateArray(rotateArray);
//	cout << result << endl;
//	getchar();
//}