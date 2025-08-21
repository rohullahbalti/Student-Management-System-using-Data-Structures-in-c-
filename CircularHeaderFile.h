#include<iostream>
#include<stdlib.h>
using namespace std;
class Stuudent
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

class Circular : public Stuudent
{
	public:
	Circular *add;	
	Circular *temporary;
	Circular *header;
	Circular *laast;
	Circular *temporary2;
	void EnterInfoCircular ()
{
		cout<<"\n Enter RollNo          :  ";
		cin>>temporary->RollNo;
		cout<<"\n Enter Registration No :  ";
		cin>>temporary->RegNo;
		cout<<"\n Enter Name			:  ";
		cin>>temporary->name;
		cout<<"\n Enter Father Name		:  ";
		cin>>temporary->fatherName;
		cout<<"\n Enter Semester		:  ";
		cin>>temporary->semester;
		cout<<"\n Enter Marks           :  ";
		cin>>temporary->marks;
		cout<<"\n Enter CGPA			:  ";
		cin>>temporary->cgpa;
		cout<<"\n Enter Department		:  ";
		cin>>temporary->Department;
		cout<<"\n Enter University Name :  ";
		cin>>temporary->University;
}
	void PrintingRecordsCircular ()
{
	temporary = header;
	do
	{
	cout<<"\n Name				=  "<<temporary->name;
	cout<<"\n Father Name		=  "<<temporary->fatherName;
	cout<<"\n Roll Number       =  "<<temporary->RollNo;
	cout<<"\n Reg Number		=  "<<temporary->RegNo;
	cout<<"\n Semester			=  "<<temporary->semester;	
	cout<<"\n Marks				=  "<<temporary->marks;
	cout<<"\n CGPA				=  "<<temporary->cgpa;
	cout<<"\n Department		=  "<<temporary->Department;
	cout<<"\n University		=  "<<temporary->University;
	
	temporary = temporary->add;
	}while (temporary != header);
	

}
void CreateAtEndCircular()
{	int choice=1;
	laast=0;
	while (choice==1)
	{
		temporary=new Circular;
		EnterInfoCircular();
		if (laast==0){
			header = laast = temporary;
		}
		else{
			laast->add=temporary;
			laast=temporary;
		}
		cout<<"Enter 1 to continue :  ";
		cin>>choice;
		
		
	}
	laast->add=header;

}
void CreateAtStartCircular()
{	
		cout<<"\n --------------Insertion At start--------------\n"<<endl;
		int choice=1;
		while (choice==1)
		{
		temporary=new Circular;
		EnterInfoCircular();
		
		temporary->add=header;
		header=temporary;	
	
		cout<<"\nEnter 1 to continue : ";
		cin>>choice;
		}
		laast->add=header;
		}

void CreateAtAnyPositionCircular()
{
	int choice=1;
	int location;
		
	while (choice==1)
	{	
		cout<<"\nEnter Location where do you want to insert value : ";
		cin>>location;
		temporary2=header;

		while ( location-1 > 0 )
		{
			temporary2= temporary2->add;
			location--;
		}
		temporary = new Circular;
		
		EnterInfoCircular();
		
		temporary->add=temporary2->add;
		temporary2->add=temporary;
		cout<<"\nEnter 1 to continue : ";
		cin>>choice;
		
		
	}
}

void SearchingCircular ()
{
	temporary=header;
	int searchKey;		
	cout<<"\n Enter Roll number to be Search 			:  ";
	cin>>searchKey;
	int flag=0;
	do	{
	
		if (temporary->RollNo==searchKey)
		{
			flag = 1;
			cout<<"\n Element Found at : "<<temporary<<endl<<endl;
			break;
		}
		else 
		{
			temporary=temporary->add;
		}
		
	}while ( temporary != header);

	if (flag == 0)
	{
		cout<<"\nElement not Found "<<endl;
	}
}

void DeletingCircular ()
{
	int deleteKey;
	cout<<"\nEnter the Roll Number to be deleted		:  ";
	cin>>deleteKey;
	temporary=header;
	
	
	int flag=0;
	
	if (temporary->add !=header){
	do
	{
		if (temporary->add->RollNo==deleteKey)
		{
			flag = 1;
			cout<<"\n Element Found at : "<<temporary<<endl;
			temporary->add=temporary2->add;
			free (temporary2);
			break;
		}
		else 
		{
			temporary=temporary->add;
			temporary2=temporary->add;
		}
		
	}while ( temporary->add->add != header);
	
	if (flag == 0)
	{
		cout<<"\nElement not Found "<<endl;
	}
	}
	
	else
	{
		header=temporary2->add;
		free (temporary2);
		cout<<"\nThere is no more element in the linked list"<<endl;
		
	}
	laast->add = header;

}
};


