//Sol1 - Using fast & slow pointers
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        if(fast->next)return slow->next;
        return slow;
    }
};


//Sol2 - Calculating length first
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len=0;
        ListNode *temp = head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        int mid=len/2;
        while(mid--){
            head=head->next;
        }
        return head;
        //3      0 1 2                  3/2=1
        //4      0 1 2 3                4/2=2
    }
};
