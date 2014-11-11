#include "PersonLinkedList.h"


//check is the list empty
template <typename Ele>
bool PersonLinkedList<Ele>::IsEmpty(void)const
{
	if(head==NULL)
		return head;
}

//count number of nodes
template <typename Ele>
int PersonLinkedList<Ele>::Nodes()
{
	int numnode=0;
	while(current->next!=NULL)
	{
		numnode++;
		current=current->next;
	}
	return numnode;
}
//return first element of list
template <typename Ele>
const Ele& PersonLinkedList<Ele>::getFist()const
{
	return head->elem;
}
//returns last element of list
template <typename Ele>
const Ele& PersonLinkedList<Ele>::getLast()const
{
	while(current->next!=NULL)
	{
		current=current->next;
	}
	return current->elem;
}
//returns particular node of list
template <typename Ele>
const pn* PersonLinkedList<E>::pNode(pn *node,int n)const
{
	int count=0;
	while(current->next!=NULL)
	{
		length++;
		current=current->next;
	}
	if(n<=length)
	{
		do{count++; temp=head; temp=temp->next;}while(n!=count);
	}
	else
	{cout<<"There is no node of "<<n<<" index !!!!!";}
	return temp;					
}
//insert new node at front of list
template <typename Ele>
void PersonLinkedList<Ele>::insertFornt(const Ele& em)
{
	PersonNode<Ele> *x=new PersonNode<EL>;
	x->elem=em;
	x->next=head;
	head=x;
}
//insert new node after the provided index of list
template <typename Ele>
void PersonLinkedList<Ele>::insert(const Ele& em,int n)
{
	int count=0;
	while(current->next!=NULL)
	{length++;
		current=current->next;}
	if(n>length)
	{cout<<"There is no node of "<<n<<" index !!!!!";}

	else
	{
		do{count++; temp=head; temp=temp->next;}while(n!=count);
		PersonNode<Ele> *y=new PersonNode<EL>;
		y->elem=e;
		y->next=temp->next;
		temp->next=y;
	}
}
//insert new node at last of list
template <typename Ele>
void PersonLinkedList<Ele>::insertLast(const Ele& em)
{
	PersonNode<Ele> *z=new PersonNode<Ele>;
	z->elem=e;
	if(current==NULL)
	{current=z;}
	else 
	{
		while(current->next!=NULL)
		{current=current->next;}
		current->next=z;
		z->next=NULL;
	}
}
//delete from front
template <typename Ele>
void PersonLinkedList<Ele>::deleteFront()
{
	temp=head;
	head=temp->next;
	delete temp;
}
//delete from last 
template <typename Ele>
void PersonLinkedList<Ele>::deletelast()
{
	if(current==NULL)
	{delete current;}
	else
	{
		while(current->next!=NULL)
		{
			previous=current;
			current=current->next;
		}
		previous->next=NULL;
		delete current;
	}
}
//delete node from particular index of list
template <typename Ele>
void PersonLinkedList<Ele>::deleteNode(int n)
{
	while(current->next!=NULL)
	{
		length++;
		current=current->next;
	}
	if(n<=length)
	{
		temp=head;
		do{
			count++; previous=temp; temp=temp->next;
		  }while(n!=count);
	}
	else
	{cout<<"There is no node of "<<n<<" index !!!!!";}

	previous->next=temp->next;
	delete temp;
}

template <typename Ele>
void PersonLinkedList<Ele>::shuffleNodes(pn *nl,int n)
{

}