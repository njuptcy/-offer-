//#include<iostream>
//#include<stack>
//#include<vector>
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
//	vector<vector<int> > Print(TreeNode* pRoot) 
//	{
//		
//		vector<vector<int> > result;
//		if (pRoot == NULL)
//			return result;
//		vector<int> line;
//		stack<TreeNode*> s[2];
//		s[0].push(pRoot);
//		int cur = 0;
//		int next = 1;
//		while(!s[0].empty() || !s[1].empty())
//		{
//			TreeNode*next_node = s[cur].top();
//			s[cur].pop();
//			line.push_back(next_node->val);
//			if(cur == 0)
//			{
//				if (next_node->left != NULL)
//					s[next].push(next_node->left);
//				if (next_node->right != NULL)
//					s[next].push(next_node->right);
//			}
//			else
//			{
//				if (next_node->right != NULL)
//					s[next].push(next_node->right);
//				if (next_node->left != NULL)
//					s[next].push(next_node->left);
//			}
//			if(s[cur].empty())
//			{
//				result.push_back(line);
//				line.clear();
//				cur = 1 - cur;
//				next = 1 - next;
//			}
//		}
//		return result;
//	}
//};