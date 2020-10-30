//Queue Structure:

#include<bits/stdc++.h>
using namespace std;

void showQueue(queue<int> q){

	cout << "Queue: ";
	while(!q.empty()){

		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}
int main(){

	queue<int> q;

	//push

	q.push(10);
	q.push(20);    //.push('g') --> add the element 'g' at the end of the queue
	q.push(30);
	q.push(40);

	//front and back

	cout << "Front: " << q.front() << " " << "Back: " << q.back() << endl;   //.front() --> return front element ||| .back() --> return back element of the queue
    
	showQueue(q);
	cout << "Size = " << q.size() << endl;

	//swap: same as stack.

	return 0;
}