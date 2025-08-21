#include<iostream>
using namespace std;
class Stdnt{
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
	
		void EnterInfoArray ()
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

	
		
};
class DynamicArray:public Stdnt
{
	public:
		int count;
		Stdnt *array;
		int size;
		Stdnt S;
	DynamicArray()
	{
		array = new Stdnt[1];
		size  = 1;
		count = 0;
	}
	~DynamicArray()
	{
		delete []array;
	}
	void AddElementAtEnd( ){
		resizeFunction();
		S.EnterInfoArray();
		array[count] = S;
		count++;
		
	}
	void resizeFunction(){
		if (count == size )
		{
		Stdnt *tempArray = new Stdnt [size * 2];
		for (int i=0 ; i<count ; i++)
		{
			tempArray[i]=array[i];
			}	
		delete [] array;
		array = tempArray;
		size = size * 2 ; 
		}
	}
	
	void AddElementAtIndex( int insertIndex)
	{	resizeFunction();
		for (int i=count-1; i>=insertIndex ; i--){
			array[i+1] = array [i];
		}
		S.EnterInfoArray();
		array [insertIndex] = S;
		count++;
	}
	
	void RemoveAtEnd ()
	{
		if (count > 0)
		{
			array[count-1]=array[count];
			count--;
		}
	}
	void RemoveAtIndex (int deleteindex)
	{
		resizeFunction();
	for (int i=deleteindex;i<=count-1;i++){
		array[i]=array[i+1];
		
		count--;
	}
	}
	void PrintingArray()
	{
		for (int i=0 ;  i<count ; i++)
				{
	
			cout<<"\n Name				=  "<<array[i].name;
			cout<<"\n Father Name		=  "<<array[i].fatherName;
			cout<<"\n Roll Number       =  "<<array[i].RollNo;
			cout<<"\n Reg Number		=  "<<array[i].RegNo;
			cout<<"\n Semester			=  "<<array[i].semester;	
			cout<<"\n Marks				=  "<<array[i].marks;
			cout<<"\n CGPA				=  "<<array[i].cgpa;
			cout<<"\n Department		=  "<<array[i].Department;
			cout<<"\n University		=  "<<array[i].University;
	
					}
	}
	
	
};
