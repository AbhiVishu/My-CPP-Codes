#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>

#define size 20

class doctor                //class definition
{        //private data members
	int id;
	char name[size];
	char dept[size];

	public:
	//public member function
	void getdept()                        //function definition
	{       textcolor(RED);
	cout<<"\n\t";
	cprintf("Please Enter Your Department :-    ");
	gets(dept);
	}

	void indata()                         //function definition
	{	textcolor(RED);
	cout<<"\n\n\n\t";
	cprintf("Please Enter Your Name :-    ");
	gets(name);
	cout<<"\n\t";
	cprintf("Please Enter Your ID(Number) :-    ");
	cin>>id;

	}
					      //function definition
	void outdata()
	{	textcolor(RED);
	cout<<"\n\n\n\t";
	cprintf("Name :-             ");
	cout<<name;
	cout<<"\n\t";
	cprintf("ID   :-             ");
	cout<<id;
	cout<<"\n\t";
	cprintf("Department   :-     ");
	cout<< dept;


	}
	char* get_dept()
	{	return(dept);
	}


};             //class definition ends

void doc_Cardiac()                              //function definition
{
	ifstream docf1;                       //output stream created

	ofstream docf2("Cardiac.dat");        //input stream created

	doctor drec;                   //class variable(object) created

	docf1.open("Record.dat",ios::binary);


	if(docf1)
	{	while(docf1.read((char*)&drec,sizeof(drec)))
		{

			if(!(strcmpi(drec.get_dept(),"Cardiac")))
			{       docf2.open("Cardiac.dat",ios::app|ios::binary);
				docf2.write((char*)&drec,sizeof(drec)); //write into file
				docf2.close();   //disconnect to Cardiac from docf2
			}
		}
	}


	docf1.close();   //disconnect to Record from docf1


}


void main()
{
	clrscr();          //to clear screen
	cout<<"\n\t\t\t ";cprintf("WELCOME TO HOSPITAL SERVICES");
	doctor drec;       //class variable(object) created
	int k=0;
	char ans='y';

	fstream docf;          //file in fstream class

	docf.open("Record.dat",ios::app|ios::in|ios::out|ios::binary);  //open file to write

	if(!docf)
	{
	textcolor(RED);
	cout<<"\n\t";
	cprintf("Cannot OPEN the File!!");
	cout<<endl;
	}

	textcolor(RED);
	cout<<"\n\n\n\t\t";
	cprintf("ENTER the DETAILS  of DOCTORS");
	cout<<endl;

	do	 //loop to enter record
	{
	k++;
	drec.indata();                     //function call
	drec.getdept();                    //function call

	docf.write((char*)&drec,sizeof(drec));
	cout<<"\n\t";
	cprintf("Wanna ENTER More Records?(y/n).....");
	cin>>ans;
	}while(ans=='y'||ans=='Y') ;

	docf.close();       //disconnect to Record   file

	docf.open("Record.dat",ios::in|ios::binary);     //open file to read
	cout<<"\n\t\t\t";
	cout<<endl;
	if(docf)
	{	while(docf.read((char*)&drec,sizeof(drec)))
		{	drec.outdata();            //to diplay Entered record
			long int p=docf.tellg();
			if(p==(sizeof(drec)*3))
			{delay(1000);
			}
		}
	}

	docf.close();      //disconnect to Record file

	doc_Cardiac();                         //function call to doc_Cardiac()


 getch();
}


