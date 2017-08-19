//#include<iostream>
//using namespace std;
//struct TreeNode 
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//
//class Solution {
//public:
//	bool isSymmetrical(TreeNode* pRoot)
//	{
//		return is_symmetrical_core(pRoot, pRoot);
//	}
//private:
//	bool is_symmetrical_core(TreeNode*p_root1, TreeNode*p_root2)
//	{
//		if (p_root1 == NULL && p_root2 == NULL)
//			return true;
//		else if (p_root1 == NULL || p_root2 == NULL)
//			return false;
//		else
//		{
//			if(p_root1->val == p_root2->val)
//			{
//				return is_symmetrical_core(p_root1->left, p_root2->right) &&
//					is_symmetrical_core(p_root1->right, p_root2->left);
//			}
//			else
//			{
//				return false;
//			}
//		}
//	}
//};