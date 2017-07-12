//#include<iostream>
//struct TreeNode
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//using namespace std;
//class Solution 
//{
//private:
//	bool balance_and_get_high(TreeNode* root , int &high)
//	{
//		if (root == NULL)
//		{
//			high = 0;
//			return true;
//		}
//		int left_high;
//		int right_high;
//
//		if(balance_and_get_high(root->left, left_high) && balance_and_get_high(root->right, right_high))
//		{
//			int diff = left_high - right_high;
//			if( diff <= 1 && diff >= -1)
//			{
//				high = left_high > right_high ? left_high : right_high;
//				high = high + 1;
//				return true;
//			}
//		}
//		return false;
//	}
//public:
//	bool IsBalanced_Solution(TreeNode* pRoot) 
//	{
//		int high;
//		return balance_and_get_high(pRoot, high);
//	}
//};
//
//int main()
//{
//}