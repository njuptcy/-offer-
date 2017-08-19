//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//
//class Solution 
//{
//private:
//	const int max_size;
//	char *str;
//	void serialize_core(TreeNode *root, int &index)
//	{
//		if (index == max_size)
//			return;
//		if(root == NULL)
//		{
//			str[index] = '#';
//			index++;
//			return;
//		}
//		string sval = to_string(root->val);
//		sval.push_back(',');
//		strcpy(&str[index], sval.c_str());
//		index = index + sval.size();
//		//str[index++] = ',';
//		//str[index] = root->val;
//		//index++;
//		serialize_core(root->left, index);
//		serialize_core(root->right,index);
//	}
//	TreeNode *deserialize_core(char *str, int &index)
//	{
//		if (str[index] == '#')
//		{
//			index++;
//			return NULL;
//		}
//		int val = 0;
//		while(str[index] != ',')
//		{
//			val *= 10;
//			val += (str[index] - '0');
//			index++;
//		}
//		index++;
//		TreeNode*node = new TreeNode(val);
//		//index++;
//		node->left = deserialize_core(str, index);
//		node->right = deserialize_core(str, index);
//		return node;
//	}
//public:
//	Solution(int max = 512):max_size(max)
//	{
//		str = new char[max_size];
//	}
//
//	~Solution()
//	{
//		delete[] str;
//	}
//
//	char* Serialize(TreeNode *root) 
//	{
//		int index = 0;
//		serialize_core(root, index);
//		str[index] = '\0';
//		return str;
//	}
//	TreeNode* Deserialize(char *str) 
//	{
//		if (str == NULL)
//			return NULL;
//		int index = 0;
//		TreeNode* result = deserialize_core(str, index);
//		return result;
//	}
//};
//
//
//int main()
//{
//
//	TreeNode node(10);
//	TreeNode node1(1);
//	TreeNode node2(2);
//	TreeNode node3(3);
//
//	node.left = &node1;
//	node.right = &node2;
//	node1.left = &node3;
//	Solution s;
//
//	char *result = s.Serialize(&node);
//	cout << result << endl;
//
//	cout << "**************" << endl;
//	TreeNode *deNode = s.Deserialize(result);
//	char *result2 = s.Serialize(deNode);
//	cout << result2 << endl;
//	getchar();
//	return 0;
//
//}