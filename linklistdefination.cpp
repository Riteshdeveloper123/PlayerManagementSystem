#include"linklist.h"
#include<string.h>

linklist::linklist() 
{
	start='\0';
} 
/////////////////////////     construtor ends here 

void linklist::insertdata(player playerdata)       // Inserting the data at Buginning
{
	 node* temp=new node(playerdata);
	 
	 
	 	temp->setnext(start);
	 	start=temp;
	 	return;
 }	 
	 	 
////////////////////////////////////////////////////////////   // Inserting the data at Middle
void linklist::insertatmiddle(player playerdata,int position)
{
	    node* temp=new node(playerdata);
	    
	    if(position == 1)
	    {
	    	temp->setnext(start);
	    	start=temp;
	    	return;
		}
		else
		{
			   node*p=start;
			   int i=1;
	           while(i < position-1 && p->getnext() != '\0' )
	           {
	             	p=p->getnext();
	               	i++;
	           }
	 
	           if(i == position-1)
	           {
	           	  temp->setnext(p->getnext());
	              p->setnext(temp);
	              return;
			   }
			   else
			   {
			   	   cout<<"\n You Enter Invalid Middel Position. Please check and Insert Valid position";
			   	   cout<<"\n";
			   	   
			   	  
			   }
	            
			  
		}
}
//////////////////////////////////////////////////    // Inserting the data at End
void linklist::insertatend(player playerdata)
{
	    node* temp=new node(playerdata);
	
	   if(start == '\0')
	   {
	   	  start=temp;
	   	  return;
	   }
	   else
	   {
	   	    node*p=start;
	   	    while(p->getnext() != '\0')
	   	    {
	   	    	p=p->getnext();
			}
			
			p->setnext(temp);
	   	   
	   }
	 
}

/////////////////////////////////////////// 
       
void linklist::deletedata(int position)      // delete the data 
{
	
	 if(start == '\0')
		    {
		    	cout<<"\n There is no Node to delete. List is empty";
		    	cout<<"\n";
			}
			else
			{    
			     node*p=start;
				 if(position == 1)
				 {
				 	 start=start->getnext();
				 	 cout<<"\n"<<p->getdata()<<"is deleted";
				 	 delete p;
				 	 return;
				 }
				 else
				 {
				 	    int i=1;
				        while( i<position-1 && p->getnext() != '\0')
			          	 {
				           	p=p->getnext();
				 	          i++;
				         }
				 
				         if(i == position-1)
				        {
				 	         node*q=p->getnext();
				             p->setnext(q->getnext());
				             cout<<"\n"<<q->getdata()<<"is deleted";
				             delete q;
				             return;
				        }
				        else
				        {
				 	       cout<<"\n You Enter Invalid Position. Please Insert Valid Position for Delete the Node";
				 	       cout<<"\n";
				        }		 	
				 	
				 }
				
			}
	
}
////////////////////////////
	
void linklist::display()
{
	if(start == '\0' )
	{
		cout<<"\n No Node to display linklist is empty";
		cout<<"\n";
	}
	else
	{
		node*p=start;
		
		while(p != '\0' )
		{
			cout<<"\n "<<p->getdata();  //  << operator should be overloaded. 
			p=p->getnext();
		}
	}
	
}

///////////////////////////

linklist::~linklist()        // Destructor is calling
{
  node*p=start;
	    while(start != '\0')
	    {
	    	start=start->getnext();
	    	delete p;
	    	p=start;
	   	}
}

/////////////////////////////////////////////////////////    // Who is score Maximum runs 
void linklist::maxruns()
{
	 if(start == '\0')
	 {
	 	cout<<"\n Linkedlist is Empty. No Node to to perform operation";
	 	cout<<"\n";
	 	return;
     }
     else
     {
     	  int maxiruns=0;
     	  char player_name[20];
     	  
     	  node*p=start;
     	  node*q=start;
     	  
     	  while(p->getnext() != '\0')
     	  {
     	  	  if(q->data.getruns() > maxiruns )
     	  	  {
     	  	  	 maxiruns=q->data.getruns();
     	  	  	 strcpy(player_name,q->data.getname());
     	  	  
     	  	  }
     	  	  
     	  	 p=p->getnext();
     	  	 q=q->getnext();
		  }
		  
		   if(q->data.getruns() > maxiruns )
     	  	  {
     	  	  	 maxiruns=q->data.getruns();
     	  	  	 strcpy(player_name,q->data.getname());
     	  	  }
		  
		  cout<<"\n Name of player is "<<player_name;
		  cout<<"\n  He Score Maximum Runs in Tournament is "<<maxiruns<<" Runs";
		  cout<<"\n";	  
	 }
	 
}
////////////////////////////////////////////////////    whoes take maximum wicket  
void linklist::maxwickets()  
{
	 if(start == '\0')
	 {
	 	cout<<"\n Linkedlist is Empty. No Node to to perform operation";
	 	cout<<"\n";
	 	return;
     }
     else
     {
     	  int maxiwickets=0;
     	  char player_name[20];
     	  
     	  node*p=start;    // taking tempery node here 
     	  node*q=start;
     	  
     	  while(p->getnext() != '\0')
     	  {
     	  	  if(q->data.getwickets() > maxiwickets )
     	  	  {
     	  	  	 maxiwickets=q->data.getwickets();
     	  	  	 strcpy(player_name,q->data.getname());
     	  	  
     	  	  }
     	  	  
     	  	 p=p->getnext();
     	  	 q=q->getnext();
		  }
		  
		   if(q->data.getwickets() > maxiwickets )
     	  	  {
     	  	  	maxiwickets=q->data.getwickets();
     	  	  	 strcpy(player_name,q->data.getname());
     	  	  }
		  
		  cout<<"\n Name of player is "<<player_name;
		  cout<<"\n  He Took  Maximum wickets in Tournament is "<<maxiwickets<<" Wickets";
		  cout<<"\n";	  
	 }
	
}
///////////////////////////////////////////////////////      // Whoes Strike rate is Most 
void  linklist::maxstrikerate()   
{
	  if(start == '\0')
	 {
	 	cout<<"\n Linkedlist is Empty. No Node to to perform operation";
	 	cout<<"\n";
	 	return;
     }
     else
     {
     	  double maxistrikerate=0.0;
     	  char player_name[20];
     	  
     	  node*p=start;    // taking tempery node here 
     	  node*q=start;
     	  
     	  while(p->getnext() != '\0')
     	  {
     	  	  if(q->data.getstrikerate() > maxistrikerate )
     	  	  {
     	  	  	 maxistrikerate=q->data.getstrikerate();
     	  	  	 strcpy(player_name,q->data.getname());
     	  	  
     	  	  }
     	  	  
     	  	 p=p->getnext();
     	  	 q=q->getnext();
		  }
		  
		   if(q->data.getstrikerate() > maxistrikerate )
     	  	  {
     	  	  	maxistrikerate=q->data.getstrikerate();
     	  	  	 strcpy(player_name,q->data.getname());
     	  	  }
		  
		  cout<<"\n Name of player is "<<player_name;
		  cout<<"\n  His  Maximum strikrate in Tournament is "<<maxistrikerate<<" strikerate";
		  cout<<"\n";	  
	 }
	
}   
/////////////////////////////////////////////        // Whoes played maximum matches 
void linklist::maxmatchplayed()
{
	  if(start == '\0')
	 {
	 	cout<<"\n Linkedlist is Empty. No Node to to perform operation";
	 	cout<<"\n";
	 	return;
     }
     else
     {
     	  int maximatch=0;
     	  char player_name[20];
     	  
     	  node*p=start;    // taking tempery node here 
     	  node*q=start;
     	  
     	  while(p->getnext() != '\0')
     	  {
     	  	  if(q->data.getmatches_played() > maximatch )
     	  	  {
     	  	  	 maximatch=q->data.getmatches_played();
     	  	  	 strcpy(player_name,q->data.getname());
     	  	  
     	  	  }
     	  	  
     	  	 p=p->getnext();
     	  	 q=q->getnext();
		  }
		  
		   if(q->data.getmatches_played()> maximatch )
     	  	  {
     	  	     maximatch=q->data.getmatches_played();
     	  	  	 strcpy(player_name,q->data.getname());
     	  	  }
		  
		  cout<<"\n Name of player is "<<player_name;
		  cout<<"\n  He playes Maximum matches  in Tournament is "<<maximatch<<" Matches";
		  cout<<"\n";	  
	 }
}
////////////////////////////////////////////         // whoes Age is most 
void linklist::maxage()                             
{
	  if(start == '\0')
	 {
	 	cout<<"\n Linkedlist is Empty. No Node to to perform operation";
	 	cout<<"\n";
	 	return;
     }
     else
     {
     	  int maxiage=0;
     	  char player_name[20];
     	  
     	  node*p=start;    // taking tempery node here 
     	  node*q=start;
     	  
     	  while(p->getnext() != '\0')
     	  {
     	  	  if(q->data.getage() > maxiage )
     	  	  {
     	  	  	 maxiage=q->data.getage();
     	  	  	 strcpy(player_name,q->data.getname());
     	  	  
     	  	  }
     	  	  
     	  	 p=p->getnext();
     	  	 q=q->getnext();
		  }
		  
		   if(q->data.getage() > maxiage)
     	  	  {
     	  	     maxiage=q->data.getage();
     	  	  	 strcpy(player_name,q->data.getname());
     	  	  }
		  
		  cout<<"\n Name of player is "<<player_name;
		  cout<<"\n  He is older player in Team His Age is "<<maxiage;
		  cout<<"\n";	  
	 }
	
}

