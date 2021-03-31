#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int num=0, even=0, odd=0, i = 0;
	char stop = 'a';

    cout << "Enter a list of integers followed by the '$' sign: " << endl;                 
    cin >> num;
	stop = num;

		while(stop != '$')
		{
			if(num % 2 == 0) //If the number is even
				even = even + num; //Add it to the current sum of even integers
			else if(num % 2 != 0) //if the number is odd
				odd = odd + num; //Add it to the current sum of odd integers
			else
			{
				i = 1; //Otherwise, make i equal to 1
			}

			cin >> num;
			stop = num;
		}

	if(i == 1)
		cout << "Please enter only integers" << endl;
	else if(i == 0)
	{
		cout << "The sum of the even integers is: " << even << endl;
		cout << "The sum of the odd integers is: " << odd << endl;
	}

	return 0;
}