#include"playerheder.h"
#include<string.h>

	player::player()              // Default Construtor of player
	{
	strcpy(this->name,"no");
    this->runs=0;
    this->wickets=0;
    this->strikrate=0.0;
    this->matches_played=0;
    this->age=0;
		
	}


player::player(char* nam, int run, int wic, double srate, int matchplayed, int ag)    // Parameterised constructor of player
{
    strcpy(this->name,nam);
    this->runs=run;
    this->wickets=wic;
    this->strikrate=srate;
    this->matches_played=matchplayed;
    this->age=ag;
}
///////////////////////////////////
void player::setname(char* nm )          // Setter function
{
	strcpy(this->name,nm);	
}
//////////////////////////////////
void player::setruns(int run)
{
	this->runs=run;
}
////////////////////////////////
void player::setwickets(int wic)
{
	this->wickets=wic;
}
////////////////////////////////////
void player::setstrikrate(double str)
{
	this->strikrate=str;
}
////////////////////////////////////
void player::setmatches_played(int mat)
{
	this->matches_played=mat;
}
/////////////////////////////////
void player::setage(int ag)
{
	this->age=ag;
}
///////////////////////////////           // setters ends here 

char* player::getname()                   // getter Function
{
	return this->name;
}
int player::getruns()
{
	return this->runs;
	
}
int player::getwickets()
{
	return this->wickets;
}
double player::getstrikerate()
{
	return this->strikrate;
}
int player::getmatches_played()
{
	return this->matches_played;
}
int player::getage()
{
	return this->age;
}

ostream& operator<<(ostream& out, const player& p2)      // << operator overloading 
{

//	out<<p2.getname()<<p2.getruns()<<p2.getwickets()<<p2.getstrikerate()<<p2.getmatches_played()<<p2.getage();

     out<<"\n Name Of player is "<<p2.name;
	 out<<"\n Runs of player is "<<p2.runs;
	 out<<"\n Wickets of player is "<<p2.wickets;
	 out<<"\n Strikerate of player is "<<p2.strikrate;
	 out<<"\n Total matches of player is "<<p2.matches_played;
	 out<<"\n Age of player is "<<p2.age;
	 out<<"\n";
	
	return out;
}

// friend ostream & operator << (ostream& , const player& );

void player::display()
{
	cout<<this->name;
	cout<<this->runs;
	cout<<this->wickets;
	cout<<this->strikrate;
	cout<<this->matches_played;
	cout<<this->age;
}


