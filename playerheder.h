#include<iostream>
using namespace std;
#include<string.h>


class player
{
	char name[20];
	int  runs;
	int wickets;
	double strikrate;
	int matches_played;
	int age;
	
	public:
	
	player();
	player(char*,int,int,double,int,int);
	void setname(char*);
	void setruns(int);
	void setwickets(int);
	void setstrikrate(double);
	void setmatches_played(int);
	void setage(int);
	void display();
	
	char* getname();
	int getruns();
	int getwickets();
	double getstrikerate();
	int getmatches_played();
	int getage();
		
   friend ostream & operator << (ostream & , const player& );
		
};

// ostream& operator<<(ostream& , const player& );



