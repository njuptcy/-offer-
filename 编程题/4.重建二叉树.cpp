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
//
//		while( *it != pre[0])
//		{
//			it++;
//		}
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
//void pre_order(TreeNode *root)
//{
//	using std::cout;
//	using std::endl;
//	if(root == NULL)
//	{
//		return;
//	}
//	cout << root->val<<" ";
//	pre_order(root->left);
//	pre_order(root->right);
//	return ;
//}
//
//void in_order(TreeNode * root)
//{
//	using std::cout;
//	if(root->left != NULL)
//	{
//		in_order(root->left);
//	}
//	cout << root->val<<"  ";
//	if(root->right != NULL)
//	{
//		in_order(root->right);
//	}
//}
//
//
//int main()
//{
//	int pre[] = {1,2,4,7,3,5,6,8};
//	int in[] = {4,7,2,1,5,3,8,6};
//	vector<int> v_pre(&pre[0], &pre[0] + sizeof(pre)/sizeof(pre[0]) );
//	vector<int> v_in(&in[0], &in[0] + sizeof(in)/sizeof(in[0]) );
//	Solution s;
//	TreeNode *root = s.reConstructBinaryTree(v_pre, v_in);
//	pre_order(root);
//	std::cout << "******************" << endl;
//	in_order(root);
//	getchar();
//
//}