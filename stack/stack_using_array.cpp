#include<iostream>
using namespace std ;
#define size 5
 int stack[size] , top =-1;


void push (int value);
int pop();
int peek();
void desplay();

int main(){
  

    return 0;
}
void push (int value){
    if(top ==size -1) {
        cout << "Stack is full!!" << endl;
        }else{
            top++;
            stack[top]=value;
        

        }
};
int pop()
{
    if(top==-1){
        cout<<"Stack is empty!!";
    }
    else{
        return stack[top--];
        }
};

int peek(){
    if(top==-1){
        cout<<"Stack is empty!!";
    }
    else{
        return stack[top];
    }
};
void desplay(){
       if(top==-1){
        cout<<"Stack is empty!!";
    } else{
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<endl;
        }
    }

};

