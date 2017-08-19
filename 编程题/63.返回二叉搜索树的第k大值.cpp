//#include<iostream>
//using namespace std;
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//
//class Solution {
//private:
//	TreeNode* KthNode_core(TreeNode* pRoot, int &k)
//	{
//		TreeNode *result = NULL;
//		if (pRoot->left != NULL)
//		{
//			result = KthNode_core(pRoot->left, k);
//		}
//		if(k == 0)
//		{
//			return result;
//		}
//		else
//		{
//			k--;
//			if (k == 0)
//				return pRoot;
//		}
//	/*	k--;
//		if (0 == k && result == NULL)
//			return pRoot;*/
//		if (pRoot->right != NULL)
//		{
//			result = KthNode_core(pRoot->right, k);
//		}
//		return result;
//	}
//public:
//	TreeNode* KthNode(TreeNode* pRoot, int k)
//	{
//		if (pRoot == NULL)
//			return NULL;
//		return KthNode_core(pRoot, k);
//	}
//};
//
//int main()
//{
//		TreeNode node(10);
//		TreeNode node1(1);
//		TreeNode node2(2);
//		TreeNode node3(3);
//	
//		node.left = &node1;
//		node.right = &node2;
//		node1.left = &node3;
//
//		Solution s;
//		TreeNode *result = s.KthNode(&node, 4);
//		cout << result->val << endl;
//		getchar();
//}