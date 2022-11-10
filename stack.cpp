#include<bits/stdc++.h>
using namespace std;

class Stack
{
	public:
		int*arr;
		int top;
		int size;
	Stack(int size)
	{
		this->size=size;
		arr=new int[size];
		top=-1;
	}
	void push(int element)
	{
		if(size-top>1)
		{
			top++;
			arr[top]=element;
		}
		else
		{
			cout<<"stack overflow";
		}
	}
	void pop ()
	{
		if(top>=0)
		{
			top--;
		}
		else 
		{
			cout<<"stack underflow no element is present";
		}
	}
	int peek()
	{
		if(top>=0)
		{
			return arr[top];
		}
		else
		{
			cout<<"stack is Empty:"<<endl;
			return -1;
		}
	}
	bool isempty()
	{
		if (top==-1)
		{
			cout<<"stack is empty:"<<endl;
		}
		else 
		{
			cout<<"stack is not empty:"<<endl;
		}
	}
};
int main()
{
	Stack st(5);
	st.push(34);
	st.push(89);
	cout<<st.peek()<<endl;
	st.pop();
	cout<<st.peek()<<endl;
	st.pop();
	cout<<st.peek()<<endl;
	st.isempty();
	return 0;	
}
