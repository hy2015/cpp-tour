#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <algorithm>
#include <ctime>

using namespace std;

class Player
{
public:
	Player(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;
	int m_Score;

};

void createPlayers(vector<Player>& players)
{
	players.push_back(Player("Alice", 0));
	players.push_back(Player("Bob", 0));
	players.push_back(Player("Charlie", 0));
	players.push_back(Player("Diana", 0));
	players.push_back(Player("Eve", 0));
}

void setScores(vector<Player>& players)
{
	for(vector<Player>::iterator it = players.begin(); it != players.end(); ++it)
	{
		deque<int> scores;

		// Generate 10 random scores for each player
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60; // Random score between 60 and 100	
			scores.push_back(score);
		}

		// Sort the scores and remove the highest and lowest
		sort(scores.begin(), scores.end());
		scores.pop_front(); // Remove lowest
		scores.pop_back(); // Remove highest

		//cout << "Scores for " << it->m_Name << ": " << endl;
		//for (int score : scores)
		//{
		//	cout << score << " ";
		//}
		//cout << endl;

		// Calculate the average of the remaining scores
		int totalScore = 0;
		for (int score : scores)
		{
			totalScore += score;
		}
		it->m_Score = totalScore / scores.size(); // Update player's score with the average
	}
	

}

void showScores(const vector<Player>& players)
{
	cout << "Player Scores:" << endl;
	for (const Player& player : players)
	{
		cout << "Player: " << player.m_Name << "\t, Score: " << player.m_Score << endl;
	}
}

int main() {
	
	// Random seed for reproducibility
	srand(static_cast<unsigned int>(time(NULL)));

	// 1. Create five players and store them in a vector
	vector<Player> players;
	createPlayers(players);

	//for(vector<Player>::iterator it = players.begin(); it != players.end(); ++it)
	//{
	//	cout << "Player: " << it->m_Name << "\t, Score: " << it->m_Score << endl;
	//}

	// 2. Set Score
	setScores(players);

	// 3. Display the players and their scores
	showScores(players);

	return 0;
}