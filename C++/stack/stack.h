#ifndef STACK_H
#define STACK_H /*Define a guard to prevent */



/**
 * Node - class where top of stack points  to it
 *
 * @item: value of element in stack
 *
 * @next: point to next element in stack
 */
template<typename type>
class Node
{
	public:
		type item;
		Node* next;
};


/**
 * Stack - class where we built our data structure
 *
 * @Top: pointer to top node 
 *
 * @siz: number of elements in stack
 *
 */

template<typename type>
class Stack
{
	Node<type>* Top;
	int siz;

	public:
	Stack()
	{
		this->Top = nullptr;
		this->siz = 0;
	}
	void push(type element)
	{
		Node<type>* temp = new Node<type>;

		if(temp)
		{
			temp->item = element;
			temp->next = Top;
			Top = temp;
			siz++;
		}
	}

	type pop()
	{
		Node<type>* temp = Top;
		type e = Top->item;

		Top = Top->next;
		delete temp;
		siz--;
		return (e);
	}
	
	int size()
	{
		return (this->siz);
	}

	bool empty()
	{
		return (!this->Top);
	}

	type top()
	{
		type e = Top->item;

		return (e);
	}

	void clear()
	{
		while (Top != nullptr)
		{
			Node<type>* temp = Top;
			
			Top = Top->next;
			delete temp;
			siz--;
		}
	}

};
#endif /*STACK_H*/

