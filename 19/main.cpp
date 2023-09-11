class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> nodes;
        ListNode* temp = head;
        while (temp)
        {
            nodes.push_back(temp);
            temp = temp->next;
        }
        if (nodes.size()==1) return NULL;
        if (nodes.size()-n<=0) return nodes[1];
        ListNode* node = nodes[nodes.size()-1-n];
        node->next = node->next->next;
        return head;
    }
};