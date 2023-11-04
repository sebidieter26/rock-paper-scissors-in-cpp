#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


class MyClass 
{
public:
	
	int random;
	int pick; 

	string rock = "Rock"; 
	string paper = "Paper";
	string scissors = "Scissors";
	
	
	void playerPick()
	{
		cout << "Pick your fighter : " << endl;
		cout << "1. " << rock << endl;
		cout << "2. " << paper << endl;
		cout << "3. " << scissors << endl;
		cout << "Write down the number assigned to your desired fighter:(e.g. 3, if you want to choose Scissors) " << endl;
		cin >> pick;
		

			switch (pick)
			{
			case 1:
				cout << "You chose: " << rock << endl;
				break;
			case 2:
				cout << "You chose: " << paper << endl;
				break;
			case 3:
				cout << "You chose: " << scissors << endl;
				break;
			default:
				cout << "Invalid choice!" << endl;
				exit(1);
				break;
			}
	}
	void randomPick()
	{
		random = RandomNumber();
		cout << "Wait for the CPU to pick its fighter.. " << endl;
		
		switch (random)
		{
		case 1:
			cout << "CPU chose: " << rock << endl;
			break;
		case 2:
			cout << "CPU chose: " << paper << endl;
			break;
		case 3:
			cout << "CPU chose: " << scissors << endl;
			break;
		default:
			cout << "Invalid choice!" << endl;
			break;
		}

	}
	
	int RandomNumber()
	{
		srand(time(0));
		return(rand() % 3) + 1;
	}

	void evaluate()
	{

		if (pick == random)
		{
			cout << "Draw !" << endl;
		}

		else if ((pick == 1 && random == 3) || (pick == 2 && random == 1) || (pick == 3 && random == 2))
		{
			cout << "You win !" << endl;
		}
		else 
		{
			cout << "CPU wins !" << endl;
		}
	}

private: 

};



int main()
{
	MyClass MyObj;
	MyObj.playerPick(); 
	MyObj.randomPick();
	MyObj.evaluate();

	return 0;
}

