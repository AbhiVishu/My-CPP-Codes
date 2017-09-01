#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

#define size 20

class book                //class definition
{        //private data members
	int bkno;
	char bktitle[size];
	float price;

	public:
	//public member function

	void input()                         //function definition
	{	textcolor(RED);
	cout<<"\n\n\n\t";
	cprintf("Please Enter Your Book Title :-    ");
	gets(bktitle);
	cout<<"\n\t";
	cprintf("Please Enter Your Book Number :-    ");
	cin>>bkno;
	cout<<"\n\t";
	cprintf("Please Enter Your Book Price :-    ");
	cin>>price;

	}
					      //function definition
	void show()
	{	textcolor(RED);
	cout<<"\n\n\n\t";
	cprintf("Book Title    :-         ");
	cout<<bktitle;
	cout<<"\n\t";
	cprintf("Book Number   :-         ");
	cout<<bkno;
	cout<<"\n\t";
	cprintf("Price         :-         ");
	cout<<price;


	}
	float get_price()
	{	return(price);
	}


};             //class definition ends

void main()
{
	clrscr();          //to clear screen
	cout<<"\n\t\t\t ";cprintf("WELCOME TO GYAN BOOKs");
	book brec;       //class variable(object) created
	char ans='y';
	fstream bookf;          //file in fstream class
	bookf.open("brecord.dat",ios::app|ios::in|ios::out|ios::binary);  //open file to write
	if(!bookf)
	{
	textcolor(RED);
	cout<<"\n\t";
	cprintf("Cannot OPEN the File!!");
	cout<<endl;
	}

	textcolor(RED);
	cout<<"\n\n\n\t\t";
	cprintf("ENTER the DETAILS  of BOOKS");
	cout<<endl;

	while(ans=='y'||ans=='Y')         //loop to enter record
	{
	brec.input();                     //function call

	bookf.write((char*)&brec,sizeof(brec));
	cout<<"\n\t";
	cprintf("Wanna ENTER More Records?(y/n).....");
	cin>>ans;
	}

	bookf.close();       //disconnect to Record   file

	bookf.open("brecord.dat",ios::in|ios::binary);     //open file to read

	textcolor(RED);
	cout<<"\n\t\t";
	cprintf("DETAILS OF BOOKS(PRICE>500)");
	cout<<endl;
	if(bookf)
	{	while(bookf.read((char*)&brec,sizeof(brec)))
		{       if((brec.get_price())>500)
			brec.show();            //to diplay Entered record
			long int p=bookf.tellg();
			if(p==(sizeof(brec)*5))
			{delay(1000);
			cout<<"\n\t\t\t";
			cprintf("DETAILS OF BOOKS(PRICE>500)");
			cout<<endl;
			}
		}
	}

	bookf.close();      //disconnect to brecord file
 getch();
}
