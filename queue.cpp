//Implement queue using 2 stacks
#include<iostream>
#include<stack>

using namespace std;

class Queue
{
	stack <int> cont, tempCont;
	public:
		void enQueue(int item);
		int deQueue();
};

void Queue::enQueue(int item)
{
	cont.push(item);
}

int Queue::deQueue()
{
	if (cont.empty())
	{
		return 0;
	}
	while(!cont.empty())
	{
		tempCont.push(cont.top());
		cont.pop();
	}
	int returnItem = tempCont.top();
	tempCont.pop();
	//Retain the original container again
	while(!tempCont.empty())
	{
		cont.push(tempCont.top());
		tempCont.pop();
	}
	return returnItem;	
}

int main()
{
	Queue q1;
	q1.enQueue(1);
	q1.enQueue(2);
	q1.enQueue(3);
	q1.enQueue(4);
	int value = q1.deQueue();	
	cout << value << endl;
	int value2 = q1.deQueue();	
	cout << value2 << endl;
}