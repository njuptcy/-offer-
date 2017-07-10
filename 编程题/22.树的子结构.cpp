//#include<vector>
//#include<iostream>
//using namespace std;
//
//struct TreeNode
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) 
//	{
//	}
//	
//};
//
//TreeNode* make_tree(int root_val, TreeNode*l, TreeNode*r)
//{
//	TreeNode *root = new TreeNode(root_val);
//	root->left = l;
//	root->right = r;
//	l = NULL;
//	r = NULL;
//	return root;
//}
//
//class Solution 
//{
//	bool subtree_core(TreeNode* pRoot1, TreeNode* pRoot2)
//	{
//		if (pRoot2 == NULL)
//			return true;
//		if (pRoot1 == NULL)
//			return false;
//		if (pRoot1->val != pRoot2->val)
//			return false;
//		return subtree_core(pRoot1->left, pRoot2->left) 
//			&& subtree_core(pRoot1->right, pRoot2->right);
//
//	}
//public:
//	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
//	{
//		if (pRoot2 == NULL)
//			return false;
//		if (pRoot1 == NULL)
//			return false;
//
//		if(pRoot1->val == pRoot2->val)
//		{
//			if(subtree_core(pRoot1, pRoot2))
//			{
//				return true;
//			}
//		}
//
//		if(HasSubtree(pRoot1->left, pRoot2))
//		{
//			return true;
//		}
//		if (HasSubtree(pRoot1->right, pRoot2))
//		{
//			return true;
//		}
//
//		return false;
//	}
//};
//
//TreeNode* node_arr[128];
//
//int fill_node_arr(TreeNode *p, int num)
//{
//	//bool has_child = false;
//	//int high;
//	int left_high = 0, righ_high = 0;
//	node_arr[num] = p;
//	if (p->left)
//	{
//		left_high = fill_node_arr(p->left, 2 * num + 1);
//		//has_child = true;
//	}
//	if (p->right)
//	{
//		righ_high = fill_node_arr(p->right, 2 * num + 2);
//		//has_child = true;
//	}
//	/*	if (has_child)
//	{
//
//	}*/
//	return (left_high > righ_high ? left_high : righ_high) + 1;
//
//}
//
//void printf_nodes(TreeNode *r)
//{
//	memset(node_arr, 0, sizeof(node_arr));
//	//tree_high = 1;
//	int tree_high = fill_node_arr(r, 0);
//	int layer_nodes = 1;
//	int index = 0;
//	for (int i = 0; i < tree_high; i++)
//	{
//		for (int j = 0; j < layer_nodes; j++)
//		{
//			if (node_arr[index] == 0)
//			{
//				std::cout << "X  ";
//			}
//			else
//			{
//				std::cout << node_arr[index]->val << "  ";
//			}
//			index++;
//		}
//		layer_nodes *= 2;
//		cout << endl;
//
//	}
//}
//
//
//
//int main()
//{
//	TreeNode *a = new TreeNode(4);
//	TreeNode *b = new TreeNode(7);
//	TreeNode *r = make_tree(2,a,b);
//	a = new TreeNode(9);
//	r = make_tree(8,a,r);
//	a = new TreeNode(7);
//	r = make_tree(8,r, a);
//
//	printf_nodes(r);
//
//
//	cout << endl;
//	cout << "******************" << endl;
//	a = new TreeNode(9);
//	b = new TreeNode(2);
//	TreeNode *r2 = make_tree(8, a, b);
//	printf_nodes(r2);
//	cout << endl;
//	cout << "******************" << endl;
//	Solution s;
//	cout << s.HasSubtree(r, r2) << endl;
//	getchar();
//
//	//TreeNode *r = new TreeNode(8);;
//}