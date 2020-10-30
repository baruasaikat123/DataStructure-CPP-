//Stack Structure(LIFO):

#include<bits/stdc++.h>
using namespace std;

void showStack(stack<int> s){

    cout << "s: ";
    while(!s.empty()){    //check whether the stack is empty or not

        cout << s.top() << " ";   //top() --> return top element of the stack
        s.pop();       //pop() --> delete the top most element of the stack
    }
    cout << endl;
}
int main(){

	stack<int> s,s1,s2;
 
    //push

	s.push(10);
	s.push(20);    //.push(g) --> add the element 'g' at the top of the stack
	s.push(30);
	s.push(40);
    
    showStack(s);
    cout << "Size = " << s.size() << endl;  //.size() --> return the size of the stack

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    s2.push(3);
    s2.push(5);
    s2.push(7);
    s2.push(9);
    
    //swap

    s1.swap(s2);     // The swap() function is used to swap the content of the one stack with another stack of same type but the size may vary
    
    cout << "s1: ";
    while(!s1.empty()){

    	cout << s1.top() << " ";
    	s1.pop();
    }
    cout << endl;

    cout << "s2: ";
    while(!s2.empty()){

    	cout << s2.top() << " ";
    	s2.pop();
    }
    cout << endl;

	return 0;
}