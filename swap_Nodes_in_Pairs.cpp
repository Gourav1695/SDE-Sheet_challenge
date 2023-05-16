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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL|| head-> next==NULL){
            return head;
        }
        ListNode * temp;
        temp = head-> next;
        head->next = swapPairs(head-> next->next);
        temp->next=head;

        return temp;
    }
};



// time complexicty-> o(N)
// space complexicity-> O(N)
/*The time complexity of the swapPairs function is O(n), where n is the number of nodes in the linked list. This is because the function recursively processes each pair of nodes until the end of the list is reached. At each step, the function swaps two adjacent nodes and then calls itself for the remaining part of the list.

The space complexity of the swapPairs function is O(n) as well. This is because the function uses recursive calls, which consume additional space on the call stack. The maximum depth of the recursion is determined by the number of nodes in the linked list. Therefore, the space complexity is proportional to the number of nodes in the list.*/
