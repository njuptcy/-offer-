//#include<iostream>
//using namespace std;
//struct TreeLinkNode {
//	int val;
//	struct TreeLinkNode *left;
//	struct TreeLinkNode *right;
//	struct TreeLinkNode *next;
//	TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
//
//	}
//};
//
//class Solution {
//public:
//	TreeLinkNode* GetNext(TreeLinkNode* pNode)
//	{
//		if (pNode == NULL)
//			return NULL;
//		TreeLinkNode*next = NULL;
//		if(pNode->right != NULL)
//		{
//			next = pNode->right;
//			while(next->left!= NULL)
//			{
//				next = next->left;
//			}
//		}
//		else
//		{
//			TreeLinkNode * parent = pNode->next;
//			while(parent!= NULL && pNode != parent->left)
//			{
//				pNode = parent;
//				parent = pNode->next;
//			}
//			next = parent;
//		}
//		return next;
//	}
//};
//
//
