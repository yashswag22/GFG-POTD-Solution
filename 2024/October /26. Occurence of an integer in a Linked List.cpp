class Solution {
  public:
    int count(struct Node* head, int key) {
       Node * temp = head;
       int count =0;
       while(temp != nullptr){
           if(temp->data == key)count++;
           temp = temp->next;
       }
       
       return count;
    }
};
