// Implementing a Queue using an Array
    // Insertion in a Queue
    // Searching in a Queue
    // Deletion in a Queue

#include <iostream>
using namespace std;

void push(int a, int* arr, int* rear, int* front) // Function to insert element in a Queue
{
  arr[*rear] = a;
  *rear = *rear + 1;
}

void print_queue(int* arr, int n, int* rear, int* front) // Function to print Queue
{ 
  cout << "Your queue is: ";
  for(int i=*front; i<*rear; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void search(int a, int* arr, int n) // Function to search if element is in Queue
{ 
  int c=0;
  for(int i=0; i<n; i++)
  {
    if(arr[i] == a)
    {
        c++;
        cout << "Your element is in queue." << endl;
        break;
    }
  }
  if(c==0)
  {
    cout << "Your element is not in the queue." << endl; 
  }
}

void delete_element(int* arr, int num, int* rear, int* front) // Function to pop n elements from a Queue
{
 while(num!=0)
 {
   *front = *front+1;
   num--;
 }
}

int main()
{
    int n = 0; // Counter variable to count number of elements in a Queue
    int *arr = new int; // Dynamic Allocation Of Array
    int f=0; // Set front pointer to 0 , (front pointer is always pointed to beginning of Queue)
    int r=0; // Set rear pointer to 0 , (rear pointer is always pointed to end of Queue)
    bool yes = true; 
    int element;
    char y;
    while(yes)
    {
      cout << "Do you want to add elements to queue? Y/N ";
      cin >> y;
      if(y=='Y') yes=true;
      else yes = false;
      if(yes==false)
      {
        break;
      }
      cout << "Enter the element you want to enter: ";
      cin >> element;
      n++;
      push(element, arr, &r, &f);
    }
    print_queue(arr, n, &r, &f);
    yes = true;
    while(yes && n>0)
    {
      cout << "Do you want to search an element in queue? Y/N ";
      cin >> y;
      if(y=='Y') yes=true;
      else yes = false;
      if(yes==false)
      {
        break;
      }
      cout << "Enter the element you want to search: ";
      cin >> element;
      search(element, arr, n);
    }
    int num;
    yes = true;
    while(yes && n>0)
    {
      cout << "Do you want to delete elements from queue? Y/N ";
      cin >> y;
      if(y=='Y') yes=true;
      else yes = false;
      if(yes==false)
      {
        break;
      }
      cout << "Enter the number of elements you want to delete: ";
      cin >> num;
      delete_element(arr, num, &r, &f);
    }
    print_queue(arr, n, &r, &f);
    delete(arr);
    return 0;
}
