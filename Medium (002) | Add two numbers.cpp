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
    ListNode* createNode(){
        ListNode* ptr = new ListNode();
        ptr->next=NULL;
        ptr->val=0;
        return ptr;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ptr1 = l1;
        ListNode *ptr2 = l2;
        ListNode *l3 = NULL;
        ListNode *ptr3 = NULL;
        int s,d,c=0;
        while(ptr1 != NULL || ptr2 != NULL){
            
            if(ptr1!=NULL & ptr2!=NULL){
                s = ptr1->val+ptr2->val+c;
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
                
            else if(ptr1!=NULL){
                s = ptr1->val+c;
                ptr1=ptr1->next;
            }
                
            else if(ptr2!=NULL){
                 s = ptr2-> val+c;
                 ptr2=ptr2->next;
             }
                
            d = s%10;
            c = s/10;
            //cout<<s<<" "<<d<<" "<<c<<"\n";
            
            ListNode *temp = createNode();
            temp->val=d;
            temp->next=NULL;
            //cout<<"Node created with value "<<temp->val<<"\n";
            if(l3 == NULL){
                //cout<<"head node created\n";
                l3=temp;
                ptr3=temp;
            }
            else 
            {
                ptr3->next=temp; 
                ptr3=temp;
            }
            
            
        } 
        if (c!=0){
           ListNode *temp = createNode();
            temp->val=c;
            temp->next=NULL; 
             ptr3->next=temp; 
             ptr3=temp;
        }
        return l3;
    }
    

};
