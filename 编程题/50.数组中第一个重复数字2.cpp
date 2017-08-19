//#include<iostream>
//using namespace std;
//class Solution
//{
//public:
//	// Parameters:
//	//        numbers:     an array of integers
//	//        length:      the length of array numbers
//	//        duplication: (Output) the duplicated number in the array number
//	// Return value:       true if the input is valid, and there are some duplications in the array number
//	//                     otherwise false
//	bool duplicate(int numbers[], int length, int* duplication)
//	{
//		for(int i = 0; i < length; i++)
//		{
//			while(numbers[i] != i)
//			{
//				int index = numbers[i];
//				int temp = numbers[index];
//				if(temp == index)
//				{
//					*duplication = temp;
//					return true;
//				}
//				numbers[index] = numbers[i];
//				numbers[i] = temp;
//			}
//		}
//		return false;
//	}
//};
//int main()
//{
//	int array[] = { 2,1,3,1,4 };
//	Solution s;
//	int dup;
//	bool result = s.duplicate(array, sizeof(array)/sizeof(array[0]), &dup);
//	cout << std::boolalpha << result << " " << dup;
//	getchar();
//
//
//}