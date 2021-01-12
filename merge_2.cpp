#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<dos.h>
#include <bits/stdc++.h>
#include<windows.h>
void display();
void ok();
void ok2();

using namespace std;
struct student
{
 char name[20];
 char reg[15];
 char course[10];
 float cgpa;
};

fstream file;
student obj;

void add()
{system("Color 0B");
cout<<"\tOPENING FILE IN APPENDING MODE\n\n";
cout<<"\tOK! DONE\n\n";
 cout<<"Enter Name: ";
 cin>>obj.name;
 cout<<"Enter Registration Number: ";
 cin>>obj.reg;
 cout<<"Enter Course: ";
 cin>>obj.course;
 cout<<"Enter CGPA: ";
 cin>>obj.cgpa;

 file.open("database.txt",ios::app) ;
 file.write((char*)&obj,sizeof(obj));
 file.close();
}

void show_all()
{     //  clrscr();
system("Color E3");
 file.open("database.txt",ios::in);
 file.read((char*)&obj,sizeof(obj));
cout<<"\t\tDISPLAYING ALL STUDENT RECORD ENROLLMENT:\n";
cout<<"\t\t=========================================\n";
 while (file.eof()==0)
 {
  cout<<"Name: "<<obj.name<<endl;
  cout<<"Registration Number: "<<obj.reg<<endl;
  cout<<"Course: "<<obj.course<<endl;
  cout<<"CGPA: "<<obj.cgpa<<endl<<endl;

  file.read((char*)&obj,sizeof(obj));
 }
 file.close();

 getch();
}

void search()
{   system("Color A1");   // clrscr();
 float user;
 cout<<"Enter CGPA: ";
 cin>>user;
 file.open("database.txt",ios::in);
 file.read((char*)&obj,sizeof(obj));

 while (file.eof()==0)
 {
  if (obj.cgpa==user)
  {
   cout<<"Name: "<<obj.name<<endl;
   cout<<"Registration Number: "<<obj.reg<<endl;
   cout<<"Course: "<<obj.course<<endl;
   cout<<"CGPA: "<<obj.cgpa<<endl<<endl;
  }

  file.read((char*)&obj,sizeof(obj));
 }
 file.close();

 getch();
}

/*void edit()
{    system("Color 4C"); //  clrscr();

 char user[15];
 cout<<"Enter registration Number: ";
 cin>>user;

 file.open("database.txt",ios::in|ios::out);
 file.read((char*)&obj,sizeof(obj));

 while (file.eof()==0)
 {
  if (strcmp(obj.reg,user)==0)
  {
   cout<<"Name: "<<obj.name<<endl;
   cout<<"Registration Number: "<<obj.reg<<endl;
   cout<<"Course: "<<obj.course<<endl;
   cout<<"CGPA: "<<obj.cgpa<<endl<<endl;

   cout<<"\nEnter New course: ";
   cin>>obj.course;

   file.seekp(file.tellg()-sizeof(obj));
   file.write((char*)&obj,sizeof(obj));
   cout<<"\n\nFile Updated";
   break;
  }

  file.read((char*)&obj,sizeof(obj));
 }
 file.close();

 getch();
}
*/



void ok()
{   
	int option;
	
cout<<"><============================================================================================================================================================><\n";
	cout<<"\t\t\tWELCOME TO RECORD DEPARTMENT\n";
	cout<<"\t\tFETCHING DATA FROM FILE\a\n";
	cout<<"\t\tAll sets now make your choice:\n";
cout<<"><============================================================================================================================================================><\n";
 
 
 // clrscr();
  cout<<"Enter 1 to Enter Record\n";
  cout<<"Enter 2 to Show All Record\n";
  cout<<"Enter 3 to Search Record\n";
  cout<<"Enter 4 to Exit\n";
  cout<<"\n\nEnter Option: ";
  cin>>option;

  switch (option)
  {
   case 1:
    add();
    cout<<"\n\nRecord Entered\n";
    getch();
    break;
   case 2:
    show_all();
    break;
   case 3:
    search();
    break;
    case 4:
    	display();
    	break;
   default:
   	break;
    
  }
 }
 
 
 
 
 void ok2()
{
	system("Color 46");
	
	cout<<"\t\t\t||*        ||     ==========\n";
	cout<<"\t\t\t||  *      ||         ||\n";
	cout<<"\t\t\t||    *    ||         ||\n";
	cout<<"\t\t\t||     *   ||         ||\n";
	cout<<"\t\t\t||      *  ||         ||\n";
	cout<<"\t\t\t||        *||         ||\n";
	cout<<"\n\n\n\n\n\t\t\t    NOTICE WILL BE SHOWN HERE IF ANY!!!\n\n\n\n\n";
	Sleep(5000);
	display();
	
	
}

void display()
{system("Color F0");
	string h[]={"HELLO there how are you","ooh hi so how you are doi'n","Ahh nice to meet you again "};
string x[]={"ohh great so you need an asssist from my side","ok so, how can i serve you","i can help you until the task is in my scope","truly speaking i contains only few function why not you try !MENU or !NOTI"};
string y[]={"Ahh i am as usual great ","i am just getting sick to talk to you :(","truly speaking not feeling great my cache memory are facing bottleneck!!!"};
string z[]={"its so brigth today","i just hate today's whether"};
string a[]={"ofcourse i can feel i am not a machine ","ask me later when you upgrade my AI"};
//string b[]={"",""};
string t,word;int f;
cout<<"HI I AM CLARA ;)\n";
getline(cin,t);
while(t!="bye")
{if(t=="!menu")
  ok();
else if(t=="!noti")
ok2();
else
srand(time(0));
transform(t.begin(), t.end(), t.begin(), ::tolower);
stringstream iss(t);

while(iss >> word){

f=0;

if((strcmp(word.c_str(),"hello")==0)||(strcmp(word.c_str(),"hi")==0))
{
	
   for(int i=0;i<3;i++)
     {  cout << h[rand()%3] << "\n"; 
        f=1;
        break;
     }

}





 else if((strcmp(word.c_str(),"help")==0)||(strcmp(word.c_str(),"do")==0))
{    
	for(int i=0;i<2;i++)
	{
		cout<<x[rand()%2]<<"\n";
		f=1;
		break;
	}
}



else if((strcmp(word.c_str(),"are")==0)||(strcmp(word.c_str(),"fine")==0))
{
	for(int i=0;i<3;i++)
	{
		cout<<y[rand()%3]<<"\n";
		f=1;
		break;
	}
}

else if((strcmp(word.c_str(),"whether")==0)||(strcmp(word.c_str(),"day")==0))
{
	for(int i=0;i<2;i++)
	{
		cout<<z[rand()%2]<<"\n";
		f=1;
		break;
	}
}

else if((strcmp(word.c_str(),"feel")==0)||(strcmp(word.c_str(),"think")==0)) 
{
	for(int i=0;i<2;i++)
	{
		cout<<a[rand()%2]<<"\n";
		f=1;
		break;
	}
}
 
//else if((strcmp(word.c_str(),"")==0)||(strcmp(word.c_str(),"")==0)) 
 
if(f==1)
break;
else
continue;

}
getline(cin,t);

}

}








int main()
{system("Color F0");
   cout<<"        ______  ________  ______"<<endl;
 cout<<"               ___________         "<<endl;
cout<<"     ____________       ____________ "<<endl;
cout<<"     ___________         ___________   "<<endl;
cout<<"     XXXXXXXXXXX         XXXXXXXXXXX    "<<endl;
  cout<<"    #############       #############    "<<endl;
cout<<"  |  XXXXXXXXXXX  _   _  XXXXXXXXXXX   |"<<endl;
cout<<"__| _____   ___            ___   _____ |__"<<endl;
cout<<"[_                X   X                 _]"<<endl;
cout<<"__|                                    |__"<<endl;
cout<<"[____          ____________          ____]"<<endl;
cout<<"              ||.||.||.||.||         "<<endl;
cout<<"              ||.||.||.||.||        "<<endl;
cout<<"              ||.||.||.||.||      "<<endl;
cout<<"              ||_||_||_||_||     "<<endl;
 cout<<"                ..........     "<<endl;
cout<<"             ________________ "<<endl;

// clrscr();

 //file.open("c:\database.txt",ios::out);
 //file.close();
 
 display();


 getch();
 return 0;
}
