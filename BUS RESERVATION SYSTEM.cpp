#include<conio.h>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string.h>
using namespace std;
static int p=0 ;
class a
{
	char busn[5],driver[10],arrival[5],depart[5],from[10],to[10],seat[8][4][10];
	public:
		void install();
		void allotment();
		void empty();
		void show();
		void avail();
		void position(int i);
}
bus[10];
void vline(char ch)
{
	for(int i=80;i>0;i--)
	cout<<ch;
}
void a::install()
{
	cout<<"enter bus no:";
	cin>>bus[p].busn;
	cout<<"\n enter driver's name:";
	cin>>bus[p].driver;
	cout<<"\n arrival time:";
	cin>>bus[p].arrival;
	cout<<"\n departure:";
	cin>>bus[p].depart;
	cout<<"\n from: \t\t\t";
	cin>>bus[p].from;
	cout<<"\n to: \t\t\t";
	cin>>bus[p].to;
	bus[p].empty();
	p++;
	
}
void a::allotment()
{
	int seat;
	char number[5];
	top:
		cout<<"bus no:";
		cin>>number;
		int n;
	for(n=0;n<=p;n++)
	{
		if(strcmp(bus[n].busn,number)==0)
		break;
	}
	while(n<=p)
	{
		cout<<"\n seat number:";
		cin>>seat;
		if(seat>32)
	{
		cout<<"\n there are only 32 seats available in this bus.";
	}
	else
	{
		if(strcmp(bus[n].seat[seat/4][(seat%4)-1],"empty")==0)
	{
		cout<<"enter passangers name:";
		cin>>bus[n].seat[seat/4][(seat%4)-1];
		break;
	}
	else
	   cout<<"the seat no.is already reserved.\n";
	}
}
if(n>p)
{
	cout<<"enter correct bus no.\n";
	goto top;
}
}
void a::empty()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<4;j++)
	{
		strcpy(bus[p].seat[i][j],"empty");
	}
	}
}
void a::show()
{
	int n;
	char number[5];
	cout<<"enter bus.no:";
	cin>>number;
	for(n=0;n<=p;n++)
	{
		if(strcmp(bus[n].busn,number)==0)
		break;
	}
	while(n<=p)
	{
		vline('*');
		cout<<"bus.no:\t"<<bus[n].busn<<"\ndriver:\t"<<bus[n].driver<<"\t\t arrival time:\t"<<bus[n].arrival<<"\t\tdeparture time:"<<bus[n].depart<<"\n from:\t\t"<<bus[n].from<<"\t\t to:\t\t"<<bus[n].to<<endl;
		vline('*');
		bus[0].position(n);
		int a=1;
		for(int i=0;i<8;i++)
	{for(int j=0;j<4;j++)
	{
		a++;
		if(strcmp(bus[n].seat[i][j],"empty")!=0)
		cout<<"\n the seat no"<<(a-1)<<"is reserved for"<<bus[n].seat[i][j]<<".";
	}
	}
	break;
	}
	if(n>p)
	cout<<"enter correct bus no:";
}
 void a::position (int i)
{

	int s=0,p=0;
	for(int i=0;i<8;i++)
	{
		cout<<"\n";
		for(int j=0;j<4;j++)
	{
		s++;
		if(strcmp(bus[1].seat[i][j],"empty")==0)
	{
		cout.width(5);
		cout.fill(' ');
		cout<<s<<".";
		cout.width(10);
		cout.fill(' ');
		cout<<bus[1].seat[i][j];
		p++;
	}
	else
	{
		cout.width(5);
		cout.fill(' ');
		cout<<s<<".";
		cout.width(10);
		cout.fill(' ');
		cout<<bus[1].seat[i][j];
	}
	}
	}
	cout<<"\n\n there are "<<p<<" seats empty in bus no:"<<bus[1].busn;
}
void a::avail()
{
	for(int n=0;n<p;n++)
{
	vline('*');
	cout<<"bus.no : \t"<<bus[n].busn<<"\n driver: \t"<<bus[n].driver<<"\t\t arrival time: \t"<<bus[n].arrival<<"\t departure time:\t"<<bus[n].depart<<"\n from: \t\t"<<bus[n].from<<"\t\t to: \t\t"<<bus[n].to<<endl;
	vline('*');
	vline('_');
}
}
int main()
{
	system("cls");
	int w;
	while(1)
{
	cout<"\n\n\n\n";
	cout<<"\t\t\t 1.install \n\t\t\t"<<"2.reservation \n\t\t\t"<<"3.show \n\t\t\t"<<"4.buses availabe. \n\t\t\t"<<"5.exit";
	cout<<"\n\t\t enter your choice:->";
	cin>>w;
	switch(w)
	{
		case1: bus[p].install();
		break;
		case2: bus[p].allotment();
		break;
		case3: bus[0].show();
		break;
		case4: bus[0].avail();
		break;
		case5: exit(0);
	}
}
return 0;
}
