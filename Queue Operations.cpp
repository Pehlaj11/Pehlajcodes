#include<iostream>
using namespace std;

class Queue 
{
	private:
		int arr[5];
		int front = -1;
		int rear = -1;
	public:
		Queue ()
		{
			front=-1;
			rear=-1;
			for (int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		}
		bool isEmpty ()
		{
			if (rear==-1 && front==-1)
			{
				return true;
			}
			else 
			{
				return false;
			}
		}
		bool isFull ()
		{
			if (rear==4)
			{
				cout<<"Queue is FULL";
				return true;
			}
			else 
			{
				return false;
			}
		}
		int Enqueue (int val)
		{
			if(isFull())
			{
				cout<<"Queue is FULL"<<endl;
				return 0;
			}
			else if (isEmpty())
			{
				rear=0;
				front=0;
				arr[rear]=val;
			}
			else
			{
				rear++;
				arr[rear]=val;
			}
		}
		int dequeue ()
		{
			int i;
			if (isEmpty())
			{
				
			}
			else if (rear==front)
			{
				i=arr[front];
				arr[front]=0;
				rear=-1;
				front=-1;
				return i;
			}
			else 
			{
				i=arr[front];
				arr[front]=0;
				front++;
				return i;
			}
		}
		void Display()
		{
			if (isEmpty())
			{
				cout<<"Queue is Empty"<<endl;
				return;
			}
			else if (isFull())
			{
				cout<<"Queue is Full"<<endl;
				return;
			}
			else 
			{
				for(int a=0;a<5;a++)
				{
					cout<<arr[a]<<endl;
				}
			}
		}
};

int main()

{
	Queue Q;
	Q.Enqueue(3);
	Q.Enqueue(4);
	Q.Enqueue(5);
	Q.Enqueue(6);
	Q.Display();
	cout<<endl;
	Q.dequeue();
	Q.Display();
	cout<<endl;
}
