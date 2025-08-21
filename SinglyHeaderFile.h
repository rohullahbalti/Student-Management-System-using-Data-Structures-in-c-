#include<iostream>
#include<stdlib.h>
using namespace std;
class Student
{	public:
	
	int RollNo;
	string RegNo;
	string name;
	string fatherName ;
	string semester ;
	string Department ;
	string University ;
	int marks;
	float cgpa;
	
};
class Singly:public Student
{
	public:
	Singly *next;
	Singly *temp;
	Singly *head;
	Singly *last;
	Singly *temp2;
	

	void EnterInfo (){
		cout<<"\n Enter RollNo          	:  ";
		cin>>temp->RollNo;
		cout<<"\n Enter Registration No 	:  ";
		cin>>temp->RegNo;
		cout<<"\n Enter Name				:  ";
		cin>>temp->name;
		cout<<"\n Enter Father Name			:  ";
		cin>>temp->fatherName;
		cout<<"\n Enter Semester			:  ";
		cin>>temp->semester;
		cout<<"\n Enter Marks           	:  ";
		cin>>temp->marks;
		cout<<"\n Enter CGPA				:  ";
		cin>>temp->cgpa;
		cout<<"\n Enter Department			:  ";
		cin>>temp->Department;
		cout<<"\n Enter University Name 	:  ";
		cin>>temp->University;
}
void PrintingRecords ()
{
	temp = head;
	while (temp != 0)
	{
	cout<<"\n Name			=  "<<temp->name;
	cout<<"\n Father Name		=  "<<temp->fatherName;
	cout<<"\n Roll Number       	=  "<<temp->RollNo;
	cout<<"\n Reg Number		=  "<<temp->RegNo;
	cout<<"\n Semester				=  "<<temp->semester;	
	cout<<"\n Marks			=  "<<temp->marks;
	cout<<"\n CGPA			=  "<<temp->cgpa;
	cout<<"\n Department		=  "<<temp->Department;
	cout<<"\n University		=  "<<temp->University;
	
	temp = temp->next;
	}
	

}
void CreateAtEnd()
{	int choice=1;
	last=0;
	while (choice==1)
	{
		temp=new Singly;
		EnterInfo();
		if (last==0){
			head = last = temp;
		}
		else{
			last->next=temp;
			last=temp;
		}
		cout<<"Enter 1 to continue :  ";
		cin>>choice;
		
		
	}
	last->next=0;

}
void CreateAtStart( )
{	
		cout<<"\n --------------Insertion At start--------------\n"<<endl;
		int choice=1;
		while (choice==1)
		{
		temp=new Singly;
		EnterInfo();
		
		temp->next=head;
		head=temp;	
	
		cout<<"\nEnter 1 to continue : ";
		cin>>choice;
		}
		}

void CreateAtAnyPosition()
{
	int choice=1;
	int location;
	cout<<"\nEnter Location where do you want to insert value : ";
	cin>>location;	
	while (choice==1)
	{
		Singly *temp2;
		temp2=head;

		while ( location-1 > 0 )
		{
			temp2= temp2->next;
			location--;
		}
		temp = new Singly;
		
		EnterInfo();
		
		temp->next=temp2->next;
		temp2->next=temp;
		cout<<"\nEnter 1 to continue : ";
		cin>>choice;
		
		
	}
}


void Searching ( )
{
	temp=head;
	int searchKey;		
	cout<<"\n Enter Roll number to be Search 			:  ";
	cin>>searchKey;
	int flag=0;
	
	while ( temp != 0)
	{
		if (temp->RollNo==searchKey)
		{
			flag = 1;
			cout<<"\n Element Found at : "<<temp<<endl;
			break;
		}
		else 
		{
			temp=temp->next;
		}
		
	}
	if (flag == 0)
	{
		cout<<"\nElement not Found "<<endl;
	}
}

void Deleting ( )
{
	int deleteKey;
	cout<<"\nEnter the Roll Number to be deleted		:  ";
	cin>>deleteKey;
	temp=head;
	
	temp2=head;
	int flag=0;
	
	if (temp->next !=0){
	
	while ( temp->next->next != 0)
	{
		if (temp->RollNo==deleteKey)
		{
			flag = 1;
			cout<<"\n Element Found at : "<<temp<<endl;
			temp->next=temp2->next;
			free (temp2);
			break;
		}
		else 
		{
			temp=temp->next;
			temp2=temp->next;
		}
		
	}
	if (flag == 0)
	{
		cout<<"\nElement not Found "<<endl;
	}
	}
	
	else
	{
		head=temp2->next;
		free (temp2);
		cout<<"\nThere is no more element in the linked list"<<endl;
		
	}

}

};

