#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
	if (n == 0) return head;
	ListNode* result = head;

	ListNode* pIter = head;

	int size = 1;
	// Travel n steps
	int i = n;
	while (i-- && head->next != nullptr) {
		head = head->next;
		size++;
	}
	while (head->next != nullptr) {
		pIter = pIter->next;
		head = head->next;
		size++;
	}
	if (pIter == head) return nullptr;
	if (size == n) {
		result = result->next;
		delete pIter;
		return result;
	}
	if (n == 1) {
		pIter->next = nullptr;
		delete head;
	} else if (n > 1) {
		ListNode* toDel = pIter->next;
		pIter->next = toDel->next;
		delete toDel;
	}

	return result;
}
