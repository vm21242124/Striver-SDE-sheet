

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node* removeKthNode(Node* head, int K)

{

    // Write your code here.

    if(K==0)return head;

    Node* first=head;

    Node* second=head;

    Node* ret=head;

    Node* s=head;

    int ss=0;

    while(s!=NULL)

    {

        s=s->next;

        ss++;

    }

    if(K==ss)return head->next;

    for(int i=1;i<=K;i++)

    {

        first=first->next;

    }

    while(first->next!=NULL)

    {

        first=first->next;

        second=second->next;

    }

    second->next=second->next->next;

    return ret;

}
