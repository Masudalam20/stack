#include<iostream>
using namespace std;
class Stack
{
private:
    int top;
    int arr[];

public:
    Stack()
    {
        top=-1;
        for(int i=0;i<5;i++)
        {
            arr[i]=0;
        }
    }

    bool isempty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isfull()
    {
        if(top==4)
            return true;

        else
            return false;
    }
    void push(int val)
    {
        if(isfull())
            cout<<"stack overflow"<<endl;

        else
        {
            top++;
            arr[top]=val;

        }
    }
    int pop()
    {
        if(isempty()){
            cout<<"stack underflow"<<endl;
            return 0;
        }

        else{
        cout<<arr[top]<<" popped"<<endl;

        int popvalue=arr[top];
        arr[top]=0;
        top--;
        return popvalue;
        }
    }

    int peek()
    {
        if(isempty())
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

};

int main()
{
    Stack s;
    s.push(10);
     s.push(20);
      s.push(30);
       s.push(40);
        s.push(50);
         //s.push(60);
         s.pop();
         s.peek();
         s.push(70);
         s.peek();
         return 0;
}

