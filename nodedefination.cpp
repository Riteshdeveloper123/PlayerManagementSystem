#include"node.h"


   node::node(player& p)
	{
		this->data=p;
		next='\0';
	}
	void node::setdata(player& data)
	{
		this->data=data;
	}
	player node::getdata()
	{
		return this->data;
	}
	void node::setnext(node* nt)
	{
		next=nt;
	}
	node* node::getnext()
	{
		return next;
	}

