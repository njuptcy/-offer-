//#include<iostream>
//using namespace std;
//
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
//
//
//class Solution
//{
//private:
//	ListNode* meetNode(ListNode*pHead)
//	{
//		if (pHead == NULL)
//			return NULL;
//		ListNode *pSlow = pHead->next;
//		ListNode *pFast = NULL;
//		if (pSlow != NULL)
//			pFast = pSlow->next;
//		while (pFast != NULL && pSlow != NULL)
//		{
//			if (pSlow == pFast)
//				return pFast;
//			pSlow = pSlow->next;
//			pFast = pFast->next;
//			if (pFast != NULL)
//				pFast = pFast->next;
//		}
//		return NULL;
//	}
//public:
//	ListNode* EntryNodeOfLoop(ListNode* pHead)
//	{
//		ListNode *m_node = meetNode(pHead);
//		if (m_node == NULL)
//			return NULL;
//		int loop = 1;
//		ListNode *pNode1 = m_node;
//		while (pNode1->next != m_node)
//		{
//			loop++;
//			pNode1 = pNode1->next;
//		}
//		pNode1 = pHead;
//		while (loop--)
//		{
//			pNode1 = pNode1->next;
//		}
//		ListNode*pNode2 = pHead;
//		while (pNode1 != pNode2)
//		{
//			pNode1 = pNode1->next;
//			pNode2 = pNode2->next;
//		}
//		return pNode1;
//	}
//};