#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
          //Complete this method
          Node* newNode= new Node(data);
          Node* firstNode = NULL;
          if (head != NULL) {
              firstNode = head;
              // find the first node has
              // which has the next = null
              while(firstNode->next != NULL){
                firstNode = firstNode->next;
              }
              // assign the next node address
              firstNode->next = newNode;
          }else{
              // Add the first node
              head = newNode;
          }          
          return head;
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}