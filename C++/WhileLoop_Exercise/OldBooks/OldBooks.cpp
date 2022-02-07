#include <iostream>
#include <string>

using namespace std;

int main()
{
	string favoriteBook;
	getline(cin, favoriteBook);
	
	int counter = 0;
	bool foundBook = false;

	string nextBook;
	getline(cin, nextBook);

	while (nextBook != "No More Books")
	{
		if (nextBook == favoriteBook)
		{
			foundBook = true;
			break;
		}

		counter++;
		getline(cin, nextBook);
	}
	if (foundBook)
	{
		cout << "You checked " << counter << " books and found it." << endl;
		return 0;
	}
	else
	{
		cout << "The book you search is not here!" << endl;
		cout << "You checked " << counter << " books." << endl;
		return 0;
	}
}