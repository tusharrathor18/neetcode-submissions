class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* head = new ListNode(-1);
        ListNode* tail = head;

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        while(temp1 != NULL && temp2 != NULL){

            if(temp1->val <= temp2->val){
                tail->next = new ListNode(temp1->val);
                tail = tail->next;
                temp1 = temp1->next;
            }
            else{
                tail->next = new ListNode(temp2->val);
                tail = tail->next;
                temp2 = temp2->next;
            }
        }

        while(temp1 != NULL){
            tail->next = new ListNode(temp1->val);
            tail = tail->next;
            temp1 = temp1->next;
        }

        while(temp2 != NULL){
            tail->next = new ListNode(temp2->val);
            tail = tail->next;
            temp2 = temp2->next;
        }

        return head->next;
    }
};
