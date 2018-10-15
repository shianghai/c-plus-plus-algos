#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
int main()
{   int grader(int);
    int a;
	struct students
	{
		char id[50];
		char name[50];
		char  age[50];
		char gender[50];
		int score;
		char grade;
		
    };
struct students student1;
struct students student2;
struct students student3;
struct students student4;
struct students student5;

cout<<"input details for students \n";
for(int i=1; i<6; i++)
{
	if(i==1)
	{
	cout<<"student"<<i<<endl;
	cout<<" id: ";
	cin>>student1.id;
	cout<<" name: ";
	cin>>student1.name;
	cout<<" age: ";
	cin>>student1.age;
	cout<<" score: ";
	cin>>student1.score;
    }
    if(i==2)
    {   cout<<"student"<<i<<endl;
    	cout<<" id: ";
	    cin>>student2.id;
    	cout<<" name: ";
	    cin>>student2.name;
    	cout<<" age: ";
    	cin>>student2.age;
    	cout<<" score: ";
    	cin>>student2.score;
	}
	if(i==3)
   { cout<<" student"<<i<<endl;		
    cout<<" id: ";
	cin>>student3.id;
	cout<<" name: ";
	cin>>student3.name;
	cout<<" age: ";
	cin>>student3.age;
	cout<<" score: ";
	cin>>student3.score;
	}
	if(i==4)
	{cout<<"student"<<i<<endl;
	cout<<" id: ";
	cin>>student4.id;
	cout<<" name: ";
	cin>>student4.name;
	cout<<" age: ";
	cin>>student4.age;
	cout<<" score: ";
	cin>>student4.score;
	}
	if(i==5)
	{ cout<<"student"<<i<<endl;
	cout<<" id: ";
	cin>>student5.id;
	cout<<" name: ";
	cin>>student5.name;
	cout<<" age: ";
	cin>>student5.age;
	
	cout<<" score: ";
	cin>>student5.score;
	}
cout<<"\n";
}  student1.grade= grader(student1.score);
   student2.grade= grader(student2.score);
   student3.grade= grader(student3.score);
   student4.grade= grader (student4.score);
   student5.grade= grader(student5.score);


	ofstream output;
	output.open("all_students.txt");
	output<<"ID\t NAME\t AGE\t GENDER\t SCORE\t GRADE\n"
	<<"***********************************************************\n";
	output<<student1.id<<"\t"<<student1.name<<"\t"<<student1.age<<"\t"<<student1.score<<"\t"<<student1.grade<<"\n"
	<<student2.id<<"\t"<<student2.name<<"\t"<<student2.age<<"\t"<<student2.score<<"\t"<<student2.grade<<"\n"
	<<student3.id<<"\t"<<student3.name<<"\t"<<student3.age<<"\t"<<student3.score<<"\t"<<student3.grade<<"\n"
	<<student4.id<<"\t"<<student4.name<<"\t"<<student4.age<<"\t"<<student4.score<<"\t"<<student4.grade<<"\n"
	
	<<student5.id<<"\t"<<student5.name<<"\t"<<student5.age<<"\t"<<student5.score<<"\t"<<student5.grade<<"\n";
	output.close();
	

	
}
	int grader(int a)
	{  
		if(79<a<101)
		{
		    return('A');
	    }
		else if(69<a<80)
		{
			return('B');
		}
		else if(59<a<60)
		{
			return('C');
		}
		else if (49<a<50)
		{
			return('D');
		}
		else if (39<a<40)
		{
			return('E');
		}
		else 
		{
			return('F');
		}
}
