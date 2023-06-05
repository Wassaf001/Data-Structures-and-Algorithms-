// Implementing a Queue using a LinkedList
   // Push Operation in Queue
   // Pop Operation in Queue
   // Searching in Queue
   // Printing a Queue

#include <iostream>
using namespace std;

class Node // Implementing a Node of LinkedList
{
  public:
    int data;
    Node* next;

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class LinkedList // Implementation of LinkedList using Node to function as a singly-ended queue
{ 
    private:
      Node* head;
    public:
      LinkedList() // Constructor Call
      {
        head = NULL;
      }
      void push(int d) // Push into Queue 
      {
        Node* t = new Node(d);
        if(head==NULL)
        {
            head = t;
            return;
        }
        Node* temp = head;
        while(temp->next!=NULL)
        {
          temp = temp -> next;
        }
        temp -> next = t;
      }
      void search(int d) // Search in the Queue
      {
       if(head==NULL)
       {
        cout << "Your Queue is empty." << endl;
        return;
       }
       Node* temp = head;
       int c=0;
       while(temp!=NULL)
       {
        if(temp -> data == d)
        {
            cout << "Your element is in queue." << endl;
            c++;
        }
        temp = temp -> next;
       }
       if(c==0)
       {
        cout << "Your element is not in queue." << endl;
       }
      }
      void pop(int num, int* n) // Pop Operation in Queue
      {
        Node* temp = head;
        while(num!=0)
        {
          head = head -> next;
          *n = *n-1;
          num--;
        }
        display();
        cout << endl;
      }
      void display() // Printing the Queue
      {
        Node* temp = head;
        if(head==NULL)
        {
            cout << "Queue is Empty." << endl;
            return;
        }
        cout << "Your Queue is: ";
        while(temp!=NULL)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
      }
};

int main()
{
  LinkedList l;
  int element;
  bool yes=true;
  char y;
  int n=0;
  while(yes)
  {
   cout << "Do you want to enter element into queue? Y/N ";
   cin >> y;
   if(y=='N')
   {
    yes = false;
    break;
   }
   else{
     yes = true;
     cout << "Enter the element you want to enter: ";
     cin >> element;
     n++;
     l.push(element);
   }
  }
  l.display();
  cout << endl;
  yes = true;
  while(yes)
  {
   cout << "Do you want to search element in queue? Y/N ";
   cin >> y;
   if(y=='N')
   {
    yes = false;
    break;
   }
   else{
     yes = true;
     cout << "Enter the element you want to search: ";
     cin >> element;
     l.search(element);
   }
  } 
  yes = true;
  int num;
  while(yes)
  {
   if(n==0)
   {
    break;
   }
   cout << "Do you want to pop elements from queue? Y/N ";
   cin >> y;
   if(y=='N')
   {
    yes = false;
    break;
   }
   else{
     yes = true;
     cout << "Enter the number of elements(i.e. less than or equal to " << n << ") you want to pop: ";
     cin >> num;
     l.pop(num, &n);
   }
  }
  return 0;
}
