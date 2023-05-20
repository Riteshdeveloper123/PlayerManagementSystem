#include"node.h"

class linklist
{
	node* start;
	
	public:
		
	linklist();        // this is basic methods of link list methods 
	void insertdata(player);
	void insertatmiddle(player,int);
	void insertatend(player);
	void deletedata(int);
	void display();
	~linklist();
	
	void maxruns();
	void maxwickets();
	void maxstrikerate();
	void maxmatchplayed();
	void maxage();
	
	
};
