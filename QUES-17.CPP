#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>         //exit
#include<ctype.h>
#include <graphics.h>


void main()
{
 clrscr();

	 char str[40],ch;
	 textcolor(BLUE);

	int w=0,a=0,d=0,s=0,v=0,lc=0,uc=0;

	cprintf("************** ");cprintf("PROGRAM TO COUNT THE ALPHABET, VOWELS, DIGITS,");cprintf("********** \n");
	cout <<"                ";cprintf("||||||| SPACE AND WORDS IN A TEXT FILE |||||||"); cout <<"\n";
	ofstream inp("file_2.txt");
	ofstream inp;

	inp.open("file_2.txt") ;

	if(inp)
	{       cprintf("-------------------------------------------------------------");
		cprintf("---------------------------------------------------------------------------------------------------");
		cout<<"\n\n\t\t";cprintf("Enter Data To Store In File    :-"); cout<<"\n\t\t";
		gets(str);
		inp<<str;

	}
	else
	{
		cout<<"\n\t\t";cprintf("File Not Found !!!"); cout<<"\t";
	}
	inp.close();
	ifstream oup;
	oup.open("file_2.txt");

	if(oup)
	{
		while(!oup.eof())
	{                                 //perfect
		ch=oup.get();
		if(isdigit(ch))
		d++;
		if(isspace(ch))
		s++;
		if(isalpha(ch))
		  a++;
		if(islower(ch))
		  lc++;
		if(isupper(ch))
		  uc++;
		else
		  switch (ch)
			{
			case 'a': case 'A'  :
			case 'e': case 'E'  :
			case 'i': case 'I'  :
			case 'o': case 'O'  :
			case 'u': case 'U'  : v++; break;

			default : continue;
			}

	}
	w=s+1;         //words = space + 1
	getch();
  }
 else
 {
 cout<<"\n\t\t";
 cprintf("File Not Found !!!");
 cout<<"\t";
 }
	oup.close();
 cout<<"\n\t\t|----------------------------------------------------------|";
 cout<<"\n\t\t|";cprintf("Total Words Are");cout<<w << "                 |";
 cout<<"\n\t\t|                                                          |";
 cout<<"\n\t\t|";cprintf("Total Vowels Are");cout<<v << "                |";
 cout<<"\n\t\t|                                                          |";
 cout<<"\n\t\t|";cprintf("Total Lower Case Chararcters Are");cout<<lc<< "|";
 cout<<"\n\t\t|                                                          |";
 cout<<"\n\t\t|";cprintf("Total Upper Case Chararcters Are");cout<<uc<< "|";
 cout<<"\n\t\t|                                                          |";
 cout<<"\n\t\t|";cprintf("Total Digits Are");cout<<d << "                |";
 cout<<"\n\t\t|                                                          |";
 cout<<"\n\t\t|";cprintf("Total Spaces Are");cout<<s << "                |";
 cout<<"\n\t\t|----------------------------------------------------------|";
 getch();
}