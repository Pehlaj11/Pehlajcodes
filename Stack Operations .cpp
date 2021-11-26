#include<iostream>
using namespace std;

class Stack 
{
	private:
		int arr[5];
		int top;
	public:
		Stack()
		{
			top=-1;
			for (int i=0;i<=5;i++)
			{
				arr[i]=0;
			}
		}
		
		bool isEmpty()
		{
			if (top==-1)
			{
				cout<<"Stack is Empty"<<endl;
				return true;
			}
			else 
				return false;
	}
		bool isFull()
		{
			if (top==4)
			{
				cout<<"Stack is Full"<<endl;
				return true;
			}
			else
			{
				return false;
			}
	}
		void push(int val)
		{
			if (isFull())
			{
				cout<<"Stack overflow"<<endl;
				return;
			}
			else 
			{
				top++;
				arr[top]=val;
			}
		}
		
		int pop()
		{
			if (isEmpty())
			{
				cout<<"Stack is Empty"<<endl;
				return 0;
			}
			else 
			{
				int popvalue = arr[top];
				arr[top]=0;
				top--;
				return popvalue;
			}
		}
		int count()
		{
			cout<<(top+1);
		}
		
		int peek(int pos)
		{
			return arr[pos];
		}
		void change(int pos,int val)
		{
			arr[pos]=val;
			cout<<"Changed value is"<<val<<endl;
		}
		void Display ()
		{
			cout<<"Values in Stack are as :"<<endl;
			for (int i=4;i>-1;i--)
			{
				cout<<arr[i]<<endl;
			}
		}
	};
	int main()
	{
		Stack p;
		p.push(3);
		p.push(4);
		p.push(5);
		p.Display();
		p.pop();
		p.Display();
		
	}
