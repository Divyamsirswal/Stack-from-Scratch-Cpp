#include<bits/stdc++.h>
using namespace std;

class Stack{
	int *p;
	int mxSize;
	int arrSize;
		public:
			Stack(int d){
				p = new int[d];
				mxSize=d;
				arrSize=0;
			}
			
			void push(int d){
				if(arrSize==mxSize){
					cout<<"Stack is full!"<<endl;
					return;
				}
				p[arrSize]=d;
				cout<<"Element "<<d<<" Pushed in Stack!"<<endl;
				arrSize++;
			}
			
			void pop(){
				if(arrSize==0){
					cout<<"Cannot pop! Stack is empty!"<<endl;
					return;
				}
				cout<<"Element Popped!"<<endl;
				arrSize--;

			}
		
			int top(){
				if(arrSize==0){
					cout<<"Stack is empty! Cannot give top element "<<endl;
					return -1;
				}
				cout<<"Top Element is : "<<p[arrSize-1]<<endl;
				return  p[arrSize-1];	
			}
			
			int size(){
				cout<<"Stack size : "<<arrSize<<endl;
				return arrSize; 	
			}
			
			void empty(){
				if(arrSize==0){
					cout<<"Stack is Empty!"<<endl;
					return;
				}
				else {
					cout<<"Stack is not Empty!"<<endl;
					return;
				}
			}
};


int main(){
	Stack s(5);
	s.empty();
	s.push(9);
	s.push(10);
	s.push(11);
	s.push(12);
	s.push(13);
	s.pop();
	s.size();
	s.top();
	s.empty();
}
