#include <iostream>
#include <queue>

using namespace std;

void print_queue(queue<int> q)
{
  cout << "Your queue is: ";
  while(!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;
}

bool find(queue<int> q, int element)
{
  while(!q.empty())
  {
    if(q.front() == element)
    {
      return true;
    }
    q.pop();
  }
  return false;
}

int main()
{
    queue<int>q;
    queue<int>q1;
    char y;
    bool yes = true;
    int n=0;
    int element;
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
      q.push(element);
    }
    print_queue(q);
    yes = true;
    q1 = q;
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
      if(find(q1, element) == true)
      {
        cout << "Your element is present in the queue." << endl;
      }
      else
      {
        cout << "Your element is not present in the queue." << endl;
      }
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
      while(num!=0)
      {
        q.pop();
        num--;
      }
    }
    print_queue(q);
    return 0;
}
