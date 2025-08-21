#include<iostream>
#include<conio.h>
#include <windows.h> 
#include<stdlib.h>
#include"SinglyHeaderFile.h"
#include"DoublyHeaderFile.h"
#include"CircularHeaderFile.h"
#include"StacksHeaderFile.h"
#include"QueueHeaderFile.h"
#include"ArrayHeaderFile.h"
using namespace std;
Singly s;
Doubly d;
Circular c;
Stacks S;		
Queue q;
DynamicArray DObj;
void SingularOptionsSingly();
void SingularOptionsCircular();
void SingularOptionsDoubly();
void SingularOptionsStacks();
void SingularOptionsQueue();
void SingularOptionsArray();
void ChoosingFunction()
{	int options;
	
	  system("cls");	
	  system("Color 0A");
	cout<<"\n\n\t\t===============Welcome to Main Menu============\n"<<endl;
	cout<<"\t\t\tPress 1.Singly linked list \n\t\t\tPress 2. Doubly linked list \n\t\t\tPress 3. Circular linked list\n";
	cout<<"\t\t\tPress 4. for Stacks \n\t\t\tPress 5. for Array \n\t\t\tPress 6. for Exit \n";
	cout<<"\n\t\t\t-=>>";
	cin>>options;
	
	switch (options)
	{
		
		case 1:
			SingularOptionsSingly();
			break;
		case 2:
			SingularOptionsDoubly();
			break;
		case 3:	
			SingularOptionsCircular();
			break;
		case 4:
			SingularOptionsStacks();
			break;
		case 5:
			SingularOptionsQueue();
			break;
		case 6:
			SingularOptionsArray();
			break;
		case 7:
			break;
		default:
			cout<<"\nInvalid Input"<<endl;
			break;
			
		}while (options!=7);
};
void SingularOptionsSingly()
{
		
	int options;
	do{
	system("cls");
	system("Color 0E");
	cout<<"\n\n\t\t-------Please Enter For Singly Linked List-------"<<endl;
			cout<<"\t1_Enter Singly Record at last \n\t2_Enter Singly Record at First\n\t3_Enter Singly at any specific position\n";
			cout<<"\t4_Search any Singly Record\n\t5_Remove any Singly Record\n\t6_Show Records\n\t7_Exit\n";
			cin>>options;
			switch (options)
			{
				case 1:
					s.CreateAtEnd();
					break;
				case 2:
					s.CreateAtStart();
					break;
				case 3:
					s.CreateAtAnyPosition();
					break;
				case 4:
					s.Searching();
					break;
				case 5:
					s.Deleting();
					break;
				case 6:
					cout<<"\n\t\t=======================================\n";
					cout<<"\t\t\tPrinting Records\n";
					cout<<"\n\t\t=======================================\n\n";
					
					s.PrintingRecords();
					getch();
					break;
				case 7:
					break;
				default :
					cout<<"\nInvalid Input"<<endl;
					break;
			}
			getch();
		}while(options!=7);
}
void SingularOptionsDoubly()
{
		
	
	int options;
	do{
			system("cls");
			system("Color 0C");
			cout<<"\n\n\t\t-------Please Enter for Doubly Linked list-------"<<endl;
			cout<<"\t1_Enter Student Record at last \n\t2_Enter Student Record at First\n\t3_Enter Student at any specific position\n";
			cout<<"\t4_Search any Student Record\n\t5_Remove any Student Record\n\t6_Show Records\n\t7_Exit\n";
			cin>>options;
			switch (options)
			{
			
				case 1:
					d.CreateAtEndDoubly();
					break;
				case 2:
					d.CreateAtStartDoubly();
					break;
				case 3:
					d.CreateAtAnyPositionDoubly();
					break;
				case 4:
					d.SearchingDoubly();
					break;
				case 5:
					d.DeletingDoubly();
					break;
				case 6:
					cout<<"\n\t\t=======================================\n";
					cout<<"\t\t\tPrinting Records\n";
					cout<<"\n\t\t=======================================\n\n";

					d.PrintingRecordsDoubly();
		
					break;
				case 7:
					break;
				default :
					cout<<"\nInvalid Input"<<endl;
					break;
			
			}
			getch();
			}while(options!=7);
}
void SingularOptionsCircular()
{			
			int options;
			do{
			system("cls");
			system("Color 0D");	
			cout<<"\n\n\t\t-------Please enter For Circular Linked List-------"<<endl;
			cout<<"\t1_Enter Student Record at last \n\t2_Enter Student Record at First\n\t3_Enter Student at any specific position\n";
			cout<<"\t4_Search any Student Record\n\t5_Remove any Student Record\n\t6_Show Records\n\t7_Exit\n";
			cin>>options;
			switch (options)
			{
				case 1:
					c.CreateAtEndCircular();
					break;
				case 2:
					c.CreateAtStartCircular();
					break;
				case 3:
					c.CreateAtAnyPositionCircular();
					break;
				case 4:
					c.SearchingCircular();
					break;
				case 5:
					c.DeletingCircular();
					break;
				case 6:
					cout<<"\n\t\t=======================================\n";
					cout<<"\t\t\tPrinting Records\n";
					cout<<"\n\t\t=======================================\n\n";

					c.PrintingRecordsCircular();
					break;
				case 7:
					break;
				default :
					cout<<"\nInvalid Input"<<endl;
					break;
			}
			getch();
		}while (options!=7);
}

void SingularOptionsStacks()
{
		
					Stacks s;
					Stdent std;
					int n;
			int options;
			do{
			system("cls");
			system("Color 0B");	
			cout<<"\n\n\t\t-------Please enter For Stacks-------"<<endl;
			cout<<"\t1_Enter Student Record \n\t2_Show Records\n\t3_Exit\n";
			cin>>options;
			switch (options)
			{
				case 1:
						s.EnterInfo();
						s.push();
					break;
				case 2:
					
					while (!s.isEmpty())
					{
					cout<<"\n\t\t=======================================\n";
					cout<<"\t\t\tPrinting Records\n";
					cout<<"\n\t\t=======================================\n\n";

						std=s.pop();
						s.PrintingRecords();
							
					}
						
					break;
			 case 3:
				break;
			default:
				cout<<"Invalid input"<<endl;
				break; 
					
	}
	getch();
	}while(options!=3);
			
	
}
void SingularOptionsArray()
{
	
	
	int options;
	int index;
	do{	
	system("cls");
	system("Color 0B");
	cout<<"\n\n\t\t--------Please Enter for Array-----------"<<endl;
	cout<<"\t1_Insert Element at End\t\t2_InsertElement at any Index\n\t3_Remove at end\t\t\t4_Remove at Index\n\t5_Display\t\t\t6_Exit\n";
	cin>>options;
	switch (options)

	
	{
		case 1:
			DObj.AddElementAtEnd();
			break;
		case 2:	
			cout<<"\n\nEnter the index at which to be inserted : ";
			cin>>index;
			DObj.AddElementAtIndex(index);
			cout<<endl;
			break;
		case 3:
			DObj.RemoveAtEnd();
			cout<<"Deleted Succesfully"<<endl;
			break;
		case 4:
			cout<<"\nEnter the index to be deleted			 : ";
			cin>>index;
			DObj.RemoveAtIndex(index);
			cout<<"Deleted Succesfully"<<endl;
			break;
		case 5:
					cout<<"\n\t\t=======================================\n";
					cout<<"\t\t\tPrinting Records\n";
					cout<<"\n\t\t=======================================\n\n";

			cout<<"\nYour Array 		: ";
			DObj.PrintingArray();
			cout<<endl;
				break;
		case 6:
				break;
		default:
				cout<<"Invalid input"<<endl;
				break;		
			
	}
	getch();
}while (options!=6);
		
	
}
void SingularOptionsQueue()
{	
		Studnt st;
			int options;
			do{
			system("cls");
			system("Color 0B");
			cout<<"\t\t-------Please enter For QUEUE-------"<<endl;
			cout<<"\t1_Enter Student Record \n\t2_Show Records\n\t3_Exit\n";
			cin>>options;
			switch (options)
			{
				case 1:
						q.Enqueue();
					break;
				case 2:
					
					while (!q.isEmpty())
					{
					cout<<"\n\t\t=======================================\n";
					cout<<"\t\t\tPrinting Records\n";
					cout<<"\n\t\t=======================================\n\n";

						Studnt datas;
						datas=q.Dequeue();
						datas.PrintingQueue();
							
					}
						
					break;
			case 3:
				break;
			default:
				cout<<"Invalid input"<<endl;
				break; 
					
	}
	getch();
	}while(options!=3);
}
int main(){
	
	int choice=1;
	do
	{ 
	    Sleep(1000);
	    system("Color 0B");
		cout<<"\n\n\n\t\t\t\tProject\n";
		Sleep(1000);
		system("Color 0F");
		cout<<"\n\t\t\t\t=======================================\n";
		cout<<"\t\t\t\t\tStudent Management System\n";
		cout<<"\n\t\t\t\t=======================================\n";
		Sleep(1000);
		system("Color 0C");
		cout<<"\t\t\t\t\t ----------Group Members -------\n";
		Sleep(1000);
		system("Color 0B");
		cout<<"\t\t\t\tRohullah Iqbal";
		cout<<"\t\t\t\tUmair Khalid loon\n";
		cout<<"\t\t\t\tFurqan\n";
		cout<<"\t\t\t\tAli";
		cout<<"\t\t\t\tJaveria Mumtaz\n";
		Sleep(1000);
		system("Color 0D");
		cout<<"\n\t\t\t\tEnter 1 to Enter Main Menu		:  ";
		cin>>choice;
	    ChoosingFunction();
	}while (choice==1);
	return 0;
}
