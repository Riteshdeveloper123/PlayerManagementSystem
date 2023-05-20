
#include"linklist.h"

#include<string.h>


int main()
{
	linklist list;
	
	int choice=0;
	
	while(choice != 100)
	{
		cout<<"\n\t Welcome to our program please enter your choice";
		cout<<"\n\t 1. Insert the data at Biginning Position";
		cout<<"\n\t 2. Insert the data at Middle Position";
		cout<<"\n\t 3. Insert the data at End Position";
		cout<<"\n\t 4. Display The data";
		cout<<"\n\t 5. Delete The Data";
		cout<<"\n\t 6. If you want to find who is score maximum runs then press 6 ";
		cout<<"\n\t 7. If you want to find who is taking maximum wickets then press 7 ";
		cout<<"\n\t 8. If you want to find whoes  strikrate is maximum then press 8 ";
		cout<<"\n\t 9. If you want to find who is played maximum matches then press 9";
		cout<<"\n\t 10. If you want to find whoes age is maximum  then press 10";
		cout<<"\n\t 11. Enter 100 For Program Exist";
		
		cout<<"\n";
		cout<<"\n Enter your choice ";
		cin>>choice;
		
		
		switch(choice)
		{
			 case 1:
			 	{
			 		 char pname[20];
			 		 cout<<"\n Enter player name here";
			 		 cin>>pname;
			 		
			         int runs;
			 		 cout<<"\n Enter the Runs here";
			 		 cin>>runs;
			 		 int wickets;
			 		 cout<<"\n Enter the Wictects here";
			 		 cin>>wickets;
			 		 double strickrate;
			 		 cout<<"\n Enter the strikrate here";
			 		 cin>>strickrate; 
			 		 int number_of_match;
			 		 cout<<"\n Enter the number of matches here";
			 		 cin>>number_of_match;
			 		 int age;
			 		 cout<<"\n Enter the player age here";
			 		 cin>>age;
			 		 
			 		 player p1(pname,runs,wickets,strickrate,number_of_match,age);
			 		 
			 		 list.insertdata(p1);
			 		 cout<<"\n Data is Inserted at Biginning successfully";
			 		 cout<<"\n";
			 	     
				}
				 break;
				 
			 case 2:
			 	{
			 		 char pname[20];
			 		 cout<<"\n Enter player name here";
			 		 cin>>pname;
			 		 int runs;
			 		 cout<<"\n Enter the Runs here";
			 		 cin>>runs;
			 		 int wickets;
			 		 cout<<"\n Enter the Wictects here";
			 		 cin>>wickets;
			 		 double strickrate;
			 		 cout<<"\n Enter the strikrate here";
			 		 cin>>strickrate;
			 		 int number_of_match;
			 		 cout<<"\n Enter the number of matches here";
			 		 cin>>number_of_match;
			 		 int age;
			 		 cout<<"\n Enter the player age here";
			 		 cin>>age;
			 		 
			 		 player p1(pname,runs,wickets,strickrate,number_of_match,age);
			 		 
			 		 int position;
			 		 cout<<"\n Enter node position here";
			 		 cin>>position;
			 		 
			 		 list.insertatmiddle(p1,position);
			 		 
			 		 cout<<"\n Data is Inserted at Middle successfully";
			 		 cout<<"\n";
			 		 
			 	  }
				 break;
				 
			 case 3:
			 	{
			 		 char pname[20];
			 		 cout<<"\n Enter player name here";
			 		 cin>>pname;
			 		 int runs;
			 		 cout<<"\n Enter the Runs here";
			 		 cin>>runs;
			 		 int wickets;
			 		 cout<<"\n Enter the Wictects here";
			 		 cin>>wickets;
			 		 double strickrate;
			 		 cout<<"\n Enter the strikrate here";
			 		 cin>>strickrate;
			 		 int number_of_match;
			 		 cout<<"\n Enter the number of matches here";
			 		 cin>>number_of_match;
			 		 int age;
			 		 cout<<"\n Enter the player age here";
			 		 cin>>age;
			 		 
			 		 player p1(pname,runs,wickets,strickrate,number_of_match,age);
	
			 		 
			 		 list.insertatend(p1);
			 		 
			 		 cout<<"\n Data is Inserted at the End successfully";
			 		 cout<<"\n";
			 		  
			 		  
			    }
				 break;
				 
		    case 4:
			 	{
			 		list.display();
				}
				 break;
				 
			case 5:
			 	{
			 	   	int position;
			 		 cout<<"\n Enter node position here Which wants to Delete you";
			 		 cin>>position;
			 		 list.deletedata(position);
				}
				 break;
				 
		   case 6:
			 	{
			 		
			 		  list.maxruns();
			 		
				}
				 break;
				 
		   case 7:
			 	{
			 		 list.maxwickets();
				}
				break;
				
			case 8:
			 	{
			 	 	 list.maxstrikerate();
				}
				break;
				
			case 9:
			 	{
			 	 	 list.maxmatchplayed();
				}
				break;
				
			case 10:
			 	{
			 	 	 list.maxage(); 
				}
				break;
				 	 
		}
		
		
		
	}
}
