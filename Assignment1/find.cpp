#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <list>

using namespace std;

int main ()
{
	cout << "\n";
	cout << "Ali Ahmadnejad - Compiler Construction Assignment 1: \n";
	cout << "Tests " << endl;
	cout << "1 - a " << endl;
	cout << "2 - ab " << endl;
	cout << "3 - aa " << endl;
	cout << "4 - abc " << endl;
	cout << "5 - aa * aa " << endl;
	cout << "6 - aa or abb" << endl ;
	cout << endl;

	ifstream myfile;
	string line;
	vector <string> test_array;
	int test;
	int choice;
	int range;

	myfile.open("sample.txt");
	while (getline (myfile, line))
		test_array.push_back(line);

	for (int i=0; i<test_array.size(); i++)
	{
		cout << test_array[i] << ", ";
	}
	cout << endl;
	cout << endl;

	cout << "Write the number of the test you would like to run (1-6):" << endl;
	cin >> test;
	choice = test -1;
	//cout << "What is the range you want to search?" << endl;
	//cin >> range;

	cout << test_array[choice] << endl;
	string str = test_array[choice];

	if (test == 1)
	{
		int answer[3];
		std::string::iterator it = str.begin();
		int index = 0;
		int n = 0;
		int i = 0;
		while (*it != '\n')
		{
			i++;
			if (*it == 'a')
			{
				answer[n] = i;
				n++;
			}
			it++;

		}
		cout << "[";
		for (int i = 0; i < 3; i++)
		{
			cout << answer[i] << ", ";
		}
		cout << "]" << endl;
		cout << endl;
	}

	if (test == 2)
	{
		int answer[2];
		std::string::iterator it = str.begin();
		int index = 0;
		int n = 0;
		int i = 0;
		while (*it != '\0')
		{
			i++;
			if (*it == 'a')
			{
				label: if (*it == '\0')
					break;
				it++;
				i++;
				if (*it == 'b')
				{
					answer[n] = i;
					n++;
				}
				else if (*it == 'a')
				{
					goto label;
				}
			}
			it++;
		}
		cout << "[";
		for (int i = 0; i < 2; i++)
		{
			cout << answer[i] << ", ";
		}
		cout << "]" << endl;
		cout << endl;
	}

	if (test == 3)
	{
		int answer[4];
		std::string::iterator it = str.begin();
		int index = 0;
		int n = 0;
		int i = 0;
		while (*it != '\0')
		{
			i++;
			if (*it == 'a')
			{
				label2: if (*it == '\0')
					break;
				it++;
				i++;
				if (*it == 'a')
				{
					answer[n] = i;
					n++;
					goto label2;
				}
			}
			it++;
		}
		cout << "[";
		for (int i = 0; i < 4; i++)
		{
			cout << answer[i] << ", ";
		}
		cout << "]" << endl;
		cout << endl;
	}

	if (test == 4)
	{
		int answer[2];
		std::string::iterator it = str.begin();
		int index = 0;
		int n = 0;
		int i = 0;
		while (*it != '\0')
		{
			i++;
			if (*it == 'a')
			{
				label3: if (*it == '\0')
					break;
				it++;
				i++;
				if (*it == 'b')
				{
					if (*it == '\0')
					{
						break;
					}
					it++;
					i++;
					if (*it == 'c')
					{
						answer[n] = i;
						n++;
					}
					else if (*it == 'a')
					{
						goto label3;
					}
				}
			}
			else if (*it == 'a')
			{
				goto label3;

			}
			it++;
		}
		cout << "[";
		for (int i = 0; i < 2; i++)
		{
			cout << answer[i] << ", ";
		}
		cout << "]" << endl;
		cout << endl;
	}

	if (test == 5)
	{
		int answer[3];
		std::string::iterator it = str.begin();
		int index = 0;
		int n = 0;
		int i = 0;
		while (*it != '\0')
		{
			i++;
			if (*it == 'a')
			{
				if (*it == '\0')
				{
					break;
				}
				it++;
				i++;
				if (*it == 'a')
				{
					label4: if (*it == '\0')
						break;
					it++;
					i++;
					if (*it != 'a')
					{
						goto label4;
					}
					else if (*it == 'a')
					{
						if (*it == '\0')
						{
							break;
						}
						it++;
						i++;
						if (*it == 'a')
						{
							answer[n] = i;
							n++;
							goto label4;
						}
						else if (*it != 'a')
						{
							goto label4;
						}

					}

				}
			}
			it++;
		}
		cout << "[";
		for (int i = 0; i < 3; i++)
		{
			cout << answer[i] << ", ";
		}
		cout << "]" << endl;
		cout << endl;
	}

	if (test == 6)
	{
		int answer[5];
		std::string::iterator it = str.begin();
		int index = 0;
		int n = 0;
		int i = 0;
		while (*it != '\0')
		{
			i++;
			if (*it == 'a')
			{
				label5: if (*it == '\0')
				{
					break;
				}
				it++;
				i++;
				if (*it == 'b')
				{
					if (*it == '\0')
						break;
					it++;
					i++;
					if (*it == 'b')
					{
						answer[n] = i;
						n++;
					}
					else if (*it == 'a')
					{
						goto label5;
					}
				}
				else if (*it =='a')
				{
					answer[n] = i;
					n++;
					goto label5;	
				}
			}
			it++;
		}
		cout << "[";
		for (int i = 0; i < 5; i++)
		{
			cout << answer[i] << ", ";
		}
		cout << "]" << endl;
		cout << endl;
	}	
}