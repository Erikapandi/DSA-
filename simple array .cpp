#include<iostream>
using namespace std;
int main()
{
	string name[5] = {"kyle", "pau", "dave", "nin", "dorothy"};
	
	
	cout<<name[0] <<endl;
	cout<<name[1] <<endl;
	cout<<name[2] <<endl;
	cout<<name[3] <<endl;
	cout<<name[4] <<endl;
	cout<<endl;
	
	{
		cout<<"Enter a name you want to duplicate:" <<endl;
		name[0];
		cin>>name[0];
		
		cout<<name[0]<<endl;
		cout<<endl;
	}
	string elem;
	string a;
	cout<<name[0] <<endl;
	cout<<name[1] <<endl;
	cout<<name[2] <<endl;
	cout<<name[3] <<endl;
	cout<<name[4] <<endl;
	cout<<endl;
	
	cout<<"Enter a name you want to delete:"<<endl;
	cin>>elem;
	cout<<endl;
	
	if (elem == name[0])
	{
		cout<<name[1]<<endl;
		cout<<name[2]<<endl;
		cout<<name[3]<<endl;
		cout<<name[4]<<endl;
		cout<<endl;
		
	}
	else if (elem == name[1])
	{
		
		cout<<name[0]<<endl;
		cout<<name[2]<<endl;
		cout<<name[3]<<endl;
		cout<<name[4]<<endl;
		cout<<endl;
	}
	else if (elem == name[2])
	{
		cout<<name[0]<<endl;
		cout<<name[1]<<endl;
		cout<<name[3]<<endl;
		cout<<name[4]<<endl;
		cout<<endl;
		
	}
	else if (elem == name[3])
	{
		cout<<name[0]<<endl;
		cout<<name[1]<<endl;
		cout<<name[2]<<endl;
		cout<<name[4]<<endl;
		cout<<endl;
	}
	
	
}