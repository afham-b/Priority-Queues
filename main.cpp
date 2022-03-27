//Afham Bashir 
#include "priorityqueue.h"
#include <iostream>
#include <string>
using namespace std;

int main () {

 string val; 
 size_t new_priority; 

	PriorityQueue<string> pq;

	pq.push("cat", 5);
//	cout << pq.front() << endl;
	pq.push("dog", 3);
//	cout << pq.front() << endl;
	pq.push("bird", 9);
//	cout << pq.front() << endl;
	pq.push("turtle", 7);
//	cout << pq.front() << endl;
	pq.push("chicken", 2);
//	cout << pq.front() << endl;

cout <<"\nCurrent Queue: "<<endl;
 while (!pq.empty())
		cout << pq.pop() << endl;

	pq.push("cat", 5);
//	cout << pq.front() << endl;
	pq.push("dog", 3);
//	cout << pq.front() << endl;
	pq.push("bird", 9);
//	cout << pq.front() << endl;
	pq.push("turtle", 7);
//	cout << pq.front() << endl;
	pq.push("chicken", 2);
//	cout << pq.front() << endl;


cout << "\nEnter string to reprioritize; " <<endl;
getline(std::cin, val);  
cout << "Enter new priority" <<endl;
cin>> new_priority; 
cout <<endl; 

pq.change_priority(val, new_priority); 
 
 cout <<"\nCurrent Queue: "<<endl; 
 while (!pq.empty())
		cout << pq.pop() << endl;


	return 0;
}