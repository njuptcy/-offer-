//#include<iostream>
//#include<vector>
//using namespace std;
//
// struct TreeNode 
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//class Solution {
//public:
//	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) 
//	{
//		if(0 == vin.size() || 0 == pre.size() )
//		{
//			return nullptr;
//		}
//		TreeNode *root = new TreeNode(pre[0]);
//		vector<int>::iterator it = vin.begin();
//		while( *it != pre[0])
//		{
//			it++;
//		}
//
//		vector<int> left_in(vin.begin(), it);
//		vector<int> right_in(it + 1, vin.end());
//		vector<int>::iterator right_pre_begin = pre.begin() + 1 + (it - vin.begin());
//		vector<int> left_pre(pre.begin() + 1, right_pre_begin);
//		vector<int> right_pre(right_pre_begin, pre.end());
//
//		root ->left = reConstructBinaryTree(left_pre, left_in);
//		root->right = reConstructBinaryTree(right_pre, right_in);
//		return root;
//
//	}
//};
//
//
//int main()
//{
//	int arr[10];
//
//	vector<int> temp(&arr[0], &arr[9]);
//
//	vector<int> temp2(&temp[0],&temp[9]);
//}