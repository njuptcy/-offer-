//#include"list.h"
//#include<iostream>
//using namespace std;
////struct ListNode
////{
////	int val;
////	struct ListNode *m_pNext;
////	ListNode(int x) :
////		val(x), m_pNext(NULL) 
////	{
////	}
////};
//
//class Solution 
//{
//private:
//	ListNode* meetNode(ListNode*pHead)
//	{
//		if (pHead == NULL)
//			return NULL;
//		ListNode *pSlow = pHead->m_pNext;
//		ListNode *pFast = NULL;
//		if (pSlow != NULL)
//			pFast = pSlow->m_pNext;
//		while(pFast != NULL && pSlow != NULL)
//		{
//			if (pSlow == pFast)
//				return pFast;
//			pSlow = pSlow->m_pNext;
//			pFast = pFast->m_pNext;
//			if (pFast != NULL)
//				pFast = pFast->m_pNext;
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
//		while(pNode1->m_pNext != m_node)
//		{
//			loop++;
//			pNode1 = pNode1->m_pNext;
//		}
//		pNode1 = pHead;
//		while(loop--)
//		{
//			pNode1 = pNode1->m_pNext;
//		}
//		ListNode*pNode2 = pHead;
//		while(pNode1 != pNode2)
//		{
//			pNode1 = pNode1->m_pNext;
//			pNode2 = pNode2->m_pNext;
//		}
//		return pNode1;
//	}
//};
//
//
//
//// ==================== Test Code ====================
//void Test(char* testName, ListNode* pHead, ListNode* entryNode)
//{
//	Solution s;
//	if (testName != NULL)
//		printf("%s begins: ", testName);
//
//	if (s.EntryNodeOfLoop(pHead) == entryNode)
//		printf("Passed.\n");
//	else
//		printf("FAILED.\n");
//}
//
//// A list has a node, without a loop
//void Test1()
//{
//	ListNode* pNode1 = CreateListNode(1);
//
//	Test("Test1", pNode1, NULL);
//
//	DestroyList(pNode1);
//}
//
//// A list has a node, with a loop
//void Test2()
//{
//	ListNode* pNode1 = CreateListNode(1);
//	ConnectListNodes(pNode1, pNode1);
//
//	Test("Test2", pNode1, pNode1);
//
//	delete pNode1;
//	pNode1 = NULL;
//}
//
//// A list has multiple nodes, with a loop 
//void Test3()
//{
//	ListNode* pNode1 = CreateListNode(1);
//	ListNode* pNode2 = CreateListNode(2);
//	ListNode* pNode3 = CreateListNode(3);
//	ListNode* pNode4 = CreateListNode(4);
//	ListNode* pNode5 = CreateListNode(5);
//
//	ConnectListNodes(pNode1, pNode2);
//	ConnectListNodes(pNode2, pNode3);
//	ConnectListNodes(pNode3, pNode4);
//	ConnectListNodes(pNode4, pNode5);
//	ConnectListNodes(pNode5, pNode3);
//
//	Test("Test3", pNode1, pNode3);
//
//	delete pNode1;
//	pNode1 = NULL;
//	delete pNode2;
//	pNode2 = NULL;
//	delete pNode3;
//	pNode3 = NULL;
//	delete pNode4;
//	pNode4 = NULL;
//	delete pNode5;
//	pNode5 = NULL;
//}
//
//// A list has multiple nodes, with a loop 
//void Test4()
//{
//	ListNode* pNode1 = CreateListNode(1);
//	ListNode* pNode2 = CreateListNode(2);
//	ListNode* pNode3 = CreateListNode(3);
//	ListNode* pNode4 = CreateListNode(4);
//	ListNode* pNode5 = CreateListNode(5);
//
//	ConnectListNodes(pNode1, pNode2);
//	ConnectListNodes(pNode2, pNode3);
//	ConnectListNodes(pNode3, pNode4);
//	ConnectListNodes(pNode4, pNode5);
//	ConnectListNodes(pNode5, pNode1);
//
//	Test("Test4", pNode1, pNode1);
//
//	delete pNode1;
//	pNode1 = NULL;
//	delete pNode2;
//	pNode2 = NULL;
//	delete pNode3;
//	pNode3 = NULL;
//	delete pNode4;
//	pNode4 = NULL;
//	delete pNode5;
//	pNode5 = NULL;
//}
//
//// A list has multiple nodes, with a loop 
//void Test5()
//{
//	ListNode* pNode1 = CreateListNode(1);
//	ListNode* pNode2 = CreateListNode(2);
//	ListNode* pNode3 = CreateListNode(3);
//	ListNode* pNode4 = CreateListNode(4);
//	ListNode* pNode5 = CreateListNode(5);
//
//	ConnectListNodes(pNode1, pNode2);
//	ConnectListNodes(pNode2, pNode3);
//	ConnectListNodes(pNode3, pNode4);
//	ConnectListNodes(pNode4, pNode5);
//	ConnectListNodes(pNode5, pNode5);
//
//	Test("Test5", pNode1, pNode5);
//
//	delete pNode1;
//	pNode1 = NULL;
//	delete pNode2;
//	pNode2 = NULL;
//	delete pNode3;
//	pNode3 = NULL;
//	delete pNode4;
//	pNode4 = NULL;
//	delete pNode5;
//	pNode5 = NULL;
//}
//
//// A list has multiple nodes, without a loop 
//void Test6()
//{
//	ListNode* pNode1 = CreateListNode(1);
//	ListNode* pNode2 = CreateListNode(2);
//	ListNode* pNode3 = CreateListNode(3);
//	ListNode* pNode4 = CreateListNode(4);
//	ListNode* pNode5 = CreateListNode(5);
//
//	ConnectListNodes(pNode1, pNode2);
//	ConnectListNodes(pNode2, pNode3);
//	ConnectListNodes(pNode3, pNode4);
//	ConnectListNodes(pNode4, pNode5);
//
//	Test("Test6", pNode1, NULL);
//
//	DestroyList(pNode1);
//}
//
//// Empty list
//void Test7()
//{
//	Test("Test7", NULL, NULL);
//}
//
//int main(int argc, char* argv[])
//{
//	Test1();
//	Test2();
//	Test3();
//	Test4();
//	Test5();
//	Test6();
//	Test7();
//	getchar();
//	return 0;
//}