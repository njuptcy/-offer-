//#include<iostream>
//#include<vector>
//#include<queue>
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
//		if(pRoot == NULL)
//			return result;
//		int this_level = 1;
//		int next_level = 0;
//		queue<TreeNode*> q;
//		q.push(pRoot);
//		vector<int> line;
//		while(!q.empty())
//		{
//			TreeNode* cur = q.front();
//			q.pop();
//			line.push_back(cur->val);
//			if(cur->left != NULL)
//			{
//				q.push(cur->left);
//				next_level++;
//			}
//			if(cur->right != NULL)
//			{
//				q.push(cur->right);
//				next_level++;
//			}
//			this_level--;
//			if(this_level == 0)
//			{
//				result.push_back(line);
//				line.clear();
//				this_level = next_level;
//				next_level = 0;
//			}
//		}
//		return result;
//	}
//
//};
//
//int main()
//{
//}