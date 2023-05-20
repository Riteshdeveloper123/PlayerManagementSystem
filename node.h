#include"playerheder.h"


class node
{
 public:player  data;
    	node* next;
	
public :
	
	node();
	node(player&);
	void setdata(player&);
	player getdata();
	void setnext(node*);
	node* getnext();
	
};
