#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int answer=rand()%1000+1,guess;
	cout<<"I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess¡G";
	while(cin>>guess)
	{
		int check=1;
		if(answer>guess)
			cout<<"Too low. Try again."<<endl;
		else if(answer<guess)
			cout<<"Too high. Try again."<<endl;
		else
		{
			cout<<"Excellent! You guessed the number!\nWould you like to play again (y or n)?";
			char choose;
			while(cin>>choose)
			{
				if(choose=='y')
				{
					answer=rand()%1000+1;
					cout<<"Please type the number you guess¡G";
					break;
				}
				else if(choose=='n')
				{
					check=0;
					break;
				}
				else
					cout<<"Come on bro! Please input again¡G";
			}
		}
		if(check==0)
			break;
	}
	return 0;
}
