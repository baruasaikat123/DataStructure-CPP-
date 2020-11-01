//List(Doubly Linked List) in C++ STL
#include<bits/stdc++.h>
using namespace std;
void showList(list<int> g){

	cout << "List: ";
	for(auto it=g.begin();it!=g.end();it++){

		cout << *it << " ";
	}
    cout << endl;
}
int main(){

	list<int> g;

	g.push_back(10);   //Add element at the end
	g.push_back(20);
	g.push_front(30);   //Add element at the front
	g.push_back(40);
	g.push_front(50);

	showList(g);
    
    cout << "Size = " << g.size() << endl;    //return the size of the list


	g.pop_front();    //remove element from front
	showList(g);
	g.pop_back();    //remove element from end
	showList(g);

	g.reverse();
	showList(g);    //reverse the list

	g.sort();         //sort the list in ascending order
	showList(g);    

	g.remove(10);   //remove the element 10
	showList(g);

	g.clear();    //clear the entire list
	showList(g);
    
	return 0;
}