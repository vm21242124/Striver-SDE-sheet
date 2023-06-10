/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
 void insertAtTail(Node *&head,Node *&tail,int digit){
     Node *temp=new Node(digit);
     if(head==NULL){
         head=temp;
         tail=temp;
         return;
     }else{
         tail->next=temp;
         tail=temp;
     }
 }
 Node *add(Node*first,Node*second){
     Node *head=NULL;
     Node *tail=NULL;
     int carray=0;
     while(first!=NULL||second!=NULL||carray!=0){
         int val1=0,val2=0;
         if(first!=NULL){
             val1=first->data;
         }
         if(second!=NULL){
             val2=second->data;
         }
         int sum=carray+val1+val2;
         int digit=sum%10;
         insertAtTail(head,tail,digit);
         carray=sum/10;
         if(first!=NULL)first=first->next;
         if(second!=NULL)second=second->next;
         
     }
     return head;

 }

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    return add(num1,num2);
}
