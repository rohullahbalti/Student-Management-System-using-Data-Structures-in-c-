#include<iostream>
#define MAXI 50
using namespace std;
class Studnt{
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
	
		void EnterInfoQueue ()
{
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
void PrintingQueue ()
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
class Queue:public Studnt
{
	private:
	int front;
	int rear;
	public:

		
		Studnt array[MAXI];
		Studnt st;
		void Enqueue()
		{
			st.EnterInfoQueue();
			if (isFull())
			{
				cout<<"\nQueue overflow"<<endl;
			
			}
			else
			{
				array[rear]=st;
				rear++;
				
			}
			
		}
		Studnt Dequeue()
		{
			if(isEmpty())
			{
				cout<<"\nQueue Underflow "<<endl;
			
			}
			else
			{
				return array[front++];
			}
		}
		bool isEmpty()
		{
			return (rear==front);
		}
		bool isFull()
		{
			return (rear>MAXI-1);
		}
		
};

