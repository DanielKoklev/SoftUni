#include <iostream>
#include <string>
using namespace std;

int main()
{
	int allTournaments, startingPoints;
	cin >> allTournaments >> startingPoints;

	string tournamentRank;

	int allTournamentPoints = 0;
	int winTournaments = 0;

	for (int i = 0; i < allTournaments; i++)
	{
		cin >> tournamentRank;

		if (tournamentRank == "W") {
			startingPoints += 2000;
			allTournamentPoints += 2000;
			winTournaments++;
		}
		else if (tournamentRank == "F") {
			startingPoints += 1200;
			allTournamentPoints += 1200;
		}
		else if (tournamentRank == "SF") {
			startingPoints += 720;
			allTournamentPoints += 720;
		}
	}
	double winnerPercentage = (double)winTournaments / allTournaments * 100.0;
	int averagePoints = allTournamentPoints / allTournaments;


	cout << "Final points: " << startingPoints << endl;
	cout << "Average points: " << averagePoints << endl;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << winnerPercentage << "%" << endl;
}