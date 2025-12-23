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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode    *tmp;
        ListNode    *tmpNode;

        if (!head || !head->next)
            return (head);
        tmp = head;
        tmpNode = tmp->next;
        while (tmp)
        {
            if (tmpNode && tmp->val == tmpNode->val)
            {
                tmp->next = tmpNode->next;
                tmpNode = tmp->next;
            }
            else
            {
                if (tmpNode)
                    tmpNode = tmpNode->next;
                tmp = tmp->next;
            }
        }
        return (head);
    }
};
