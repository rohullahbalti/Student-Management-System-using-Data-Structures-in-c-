#include<iostream>
#include<conio.h>
#define MAX 500
using namespace std;
class Stdent{
	public:
	int RollNo;
	string RegNo;
	string name;
	string fatherName ;
	string semester ;
	string Department ;
	string University ;
	int marks;
	float cgpa;
	
		
		void EnterInfo (){
	
		cout<<"\n Enter RollNo          :  ";
		cin>>RollNo;
		cout<<"\n Enter Registration No :  ";
		cin>>RegNo;
		cout<<"\n Enter Name			:  ";
		cin>>name;
		cout<<"\n Enter Father Name		:  ";
		cin>>fatherName;
		cout<<"\n Enter Semester		:  ";
		cin>>semester;
		cout<<"\n Enter Marks           :  ";
		cin>>marks;
		cout<<"\n Enter CGPA			:  ";
		cin>>cgpa;
		cout<<"\n Enter Department		:  ";
		cin>>Department;
		cout<<"\n Enter University Name :  ";
		cin>>University;
}
void PrintingRecords ()
{
	
	cout<<"\n Name				=  "<<name;
	cout<<"\n Father Name		=  "<<fatherName;
	cout<<"\n Roll Number       =  "<<RollNo;
	cout<<"\n Reg Number		=  "<<RegNo;
	cout<<"\n Semester			=  "<<semester;	
	cout<<"\n Marks				=  "<<marks;
	cout<<"\n CGPA				=  "<<cgpa;
	cout<<"\n Department		=  "<<Department;
	cout<<"\n University		=  "<<University;
	
	}
	
		
};
class Stacks:public Stdent
{
	public:
		Stdent s;
		int top;
		Stdent array[MAX];
	
		bool isEmpty()
		{
			if (top<0)
			{
				cout<<"Stack empty"<<endl;
				return true;
			}
			else
			{
				return false;
			}
		}
		
		void push()
		{
		
			if(top>=MAX-1)
			{
				cout<<"Stack Overflow"<<endl;
				
			}
			else
			{
				top = top+1;
				array [top] = s;
				
			}
		}
	
		Stdent pop()
		{
			if (isEmpty())
			{
				cout<<"stack Underflow"<<endl;
			
			}
			else
			{
				return array [top--];
				
			}
		}	
		

};

