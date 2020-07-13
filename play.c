#include<iostream>
using namespace std;
class play
{	
	private:
		int playcode;
		char title[20];
	        float duration;
		int no_of_episode;
	public:
		void newplay()
		{
			cout<<"\nEnter the playcode ";
			cin>>playcode;
			cout<<"\nEnter the title ";
			cin>>title;
		}
		void moreinfo(float d,int e)
		{
			duration=d;
			no_of_episode=e;
			cout<<"\nInformation updated sucessfully";
		}
		void display()
		{
			cout<<"\nYour play code "<<playcode;
			cout<<"\nYour title "<<title;
			cout<<"\nDuration "<<duration;
			cout<<"\nNumber of episode "<<no_of_episode;
		}

}p1;
int main()
{
	int e;
	float d;
	p1.newplay();
	cout<<"\nEnter the play duration ";
	cin>>d;
	cout<<"\nEnter the number of episode ";
	cin>>e;
	p1.moreinfo(d,e);
	p1.display();
	cout<<"\n";
	return 0;
}
