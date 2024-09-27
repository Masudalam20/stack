#include<iostream>

using namespace std;

class Stack
{
private:
    int top;
    int arr[5];

    public:
        Stack()
        {
            top= -1;
            for(int i=0;i<5;i++)
            {
                arr[i]=0;
            }
        }
        bool isEmpty()
        {
            if(top== -1)
                return true;
            else
                return false;
        }

         bool isFull()
        {
            if(top== 4)
                return true;
            else
                return false;
        }
        void push(int value)
        {
            if(isFull())
            {

                cout<<arr[0]<<" replaced by " <<value<<endl;
                arr[0]=value;
            }
            else
            {
                top++;
                arr[top]=value;
            }
        }
        int pop()
        {
            if(isEmpty())
            {
                cout<<"stack underflow"<<endl;
                return 0;
            }
            else
            {
                cout<<arr[top]<<" popped"<<endl;
                int popValue= arr[top];
                arr[top]=0;
                top--;

                return popValue;
            }
        }
        int peek()
        {
            if(isEmpty())
            {
                cout<<"stack underflow"<<endl;
                return 0;
            }
            else
            {
                cout<<arr[top]<<" is the top item"<<endl;
                return arr[top];
            }
        }

        void display()
        {
            cout<<"StacK is :"<<endl;
            for(int i=4;i>=0;i--)
            {
                cout<<arr[i]<<endl;
            }
        }
};

int main()
{
    Stack s;


    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.pop();
    s.peek();
    s.push(70);
    s.peek();
s.display();
    return 0;

}
