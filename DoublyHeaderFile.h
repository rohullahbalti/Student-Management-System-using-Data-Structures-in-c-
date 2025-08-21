#include<iostream>
#include<stdlib.h>
using namespace std;
class student
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




class Doubly:public student
{
	public:
		Doubly *ptr;
		Doubly *pre;
	Doubly *temp1;
	Doubly *head1;
	Doubly *last1;
	Doubly *temp3;
	void EnterInfoDoubly ()
{
		cout<<"\n Enter RollNo          :  ";
		cin>>temp1->RollNo;
		cout<<"\n Enter Registration No :  ";
		cin>>temp1->RegNo;
		cout<<"\n Enter Name			:  ";
		cin>>temp1->name;
		cout<<"\n Enter Father Name		:  ";
		cin>>temp1->fatherName;
		cout<<"\n Enter Semester		:  ";
		cin>>temp1->semester;
		cout<<"\n Enter Marks           :  ";
		cin>>temp1->marks;
		cout<<"\n Enter CGPA			:  ";
		cin>>temp1->cgpa;
		cout<<"\n Enter Department		:  ";
		cin>>temp1->Department;
		cout<<"\n Enter University Name :  ";
		cin>>temp1->University;
}
void PrintingRecordsDoubly ()
{
	temp1 = head1;
	while (temp1 != 0)
	{
	cout<<"\n Name				=  "<<temp1->name;
	cout<<"\n Father Name		=  "<<temp1->fatherName;
	cout<<"\n Roll Number       =  "<<temp1->RollNo;
	cout<<"\n Reg Number		=  "<<temp1->RegNo;
	cout<<"\n Semester			=  "<<temp1->semester;	
	cout<<"\n Marks				=  "<<temp1->marks;
	cout<<"\n CGPA				=  "<<temp1->cgpa;
	cout<<"\n Department		=  "<<temp1->Department;
	cout<<"\n University		=  "<<temp1->University;
	
	temp1 = temp1->ptr;
	}
	

}
void CreateAtStartDoubly( )
{	
		cout<<"\n --------------Insertion At start--------------\n"<<endl;
	int choice=1;
	while (choice==1)
	{
		temp1 = new Doubly;
		EnterInfoDoubly();
		
		if (last1 == 0)
		{
			temp1 -> pre  =0;
			temp1 -> ptr =0;
			head1 = last1 = temp1;
			
		 } 
		 else
		 {
		 	temp1->ptr =head1;
		 	head1 -> pre=temp1;
		 	temp1 -> pre = 0;
		 	head1 = temp1;
		 }
		cout<<"\nEnter 1 to continue     : ";
		cin>>choice;
		
		
	}
}
	void CreateAtAnyPositionDoubly()
{
	int location;
	int choice=1;
	cout<<"\nEnter Location where do you want to insert value : ";
	cin>>location;	
	while (choice==1)
	{
		Doubly *temp3;
		temp3=head1;

		while ( location-1 > 0 )
		{
			temp3= temp3->ptr;
			location--;
		}
		temp1 = new Doubly;
		
		EnterInfoDoubly();
		
		temp1->ptr=temp3->ptr;
		temp3->ptr->pre=temp1;
		temp1->pre=temp3;
		temp3->ptr=temp1;
		
		cout<<"\nEnter 1 to continue : ";
		cin>>choice;
		
		
	}

}

void SearchingDoubly ()
{
	temp1=head1;
	int searchKey;		
	cout<<"\n Enter Roll number to be Search 			:  ";
	cin>>searchKey;
	int flag=0;
	
	while ( temp1 != 0)
	{
		if (temp1->RollNo==searchKey)
		{
			flag = 1;
			cout<<"\n Element Found at : "<<temp1<<endl;
			break;
		}
		else 
		{
			temp1=temp1->ptr;
		}
		
	}
	if (flag == 0)
	{
		cout<<"\nElement not Found "<<endl;
	}
}

void DeletingDoubly()
{
		int choice;
	int deleteKey;		
	cout<<"\n Enter Roll number to be deleted 			:  ";
	cin>>deleteKey;
		int flag=0;
		temp1 = head1;
			while (temp1!=0)
			{
				if (temp1->RollNo==deleteKey)
				{
					flag=1;
						
						
							temp1->pre->ptr=temp1->ptr;
							temp1->ptr->pre=temp1->pre;
							free (temp1);
						
					break;
				}
				else
				{
					temp1=temp1->ptr;
				}
			}
		
				if (flag==0)
			{
				cout<<"Element Not Found";
			}
			
}
void CreateAtEndDoubly()
{	
	int choice=1;
	last1=0;
	while (choice==1)
	{
		temp1 = new Doubly;
		EnterInfoDoubly();
		if (last1 == 0)
		{
			temp1 -> pre  =0;
			
			head1 = last1 = temp1;
			
		 } 
		 else
		 {
		 	last1 -> ptr = temp1;
		 	temp1 -> pre = last1;
		 	last1 = temp1 ;
		 
		 }
		cout<<"\nEnter 1 to continue     : ";
		cin>>choice;
		
		
	}
	last1->ptr=0;


	
}

	
};


