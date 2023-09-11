/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


class Solution {
public:

	size_t listSize(ListNode* node)
	{
		ListNode* cur_node = node;
		size_t list_size = 0;
		while (cur_node->next)
		{
			++list_size;
			cur_node = cur_node->next;
		}
		return list_size;
	}

	ListNode* middleNode(ListNode* head) {
		ListNode* cur_node = head;
		size_t list_size = listSize(cur_node);
		int mid = list_size / 2 + list_size % 2;

		while (mid > 0)
		{
			cur_node = cur_node->next;
            --mid;
		}
        return cur_node;

	}
};
