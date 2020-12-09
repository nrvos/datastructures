//============================================================================
// Name        : music-collection.cpp
// Author      : Noah
// Version     :
// Copyright   : Apache License 2.0
// Description : Stores and ranks a music collection
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Album.h"

using namespace std;

// Global variables
vector<Album> Collection;	//vector<Album*> Collection;
map<int,Album> Ranking;		//map<int,Album*> Ranking;

// Input music collection info from user
void musicInput(){
	// String to hold input temporarily
	string input;
	// Boolean for continuing loop
	bool loop = true;

	// Loop input until user is finished
	do{
		// Temporary album object
		Album temp;

		// Make sure it doesn't read anything already in buffer
		cin.ignore();

		// Title input
		cout << "\nEnter album title: ";
		getline(cin, input);
		temp.setTitle(input);

		// Artist input
		cout << "\nEnter album artist: ";
		getline(cin, input);
		temp.setArtist(input);

		// Genre input
		cout << "\nEnter album genre: ";
		getline(cin, input);
		temp.setGenre(input);

		// Year input
		cout << "\nEnter album year: ";
		getline(cin, input);
		temp.setYear(stoi(input));

		// Add album to Collection vector
		Collection.push_back(temp);
		//Collection.push_back(&temp);

		// Determine whether to continue loop
		cout << "\nContinue to input albums (y/n)? ";
		cin >> input;

		if(input=="n")
			loop = false;

	}while(loop==true);
}

// Display music collection (contents of Collection vector)
void displayCollection(){
	cout << "\nYour music collection:\n";

	// String to hold input temporarily
	string input = "";

	for(int i = 0; i < Collection.size(); ++i){
		cout << "\nTitle: " << Collection[i].title <<
				"\nArtist: " << Collection[i].artist <<
				"\nGenre: " << Collection[i].genre <<
				"\nYear: " << Collection[i].year << endl;
	}
	// Collection.at(i)->title;
}

// Rank music collection (using map Ranking)
void rankMusic(){
	cout << "\nRank your music collection:\n";

	// String to hold input temporarily
	string input;

	// Make sure it doesn't read anything already in buffer
	cin.ignore();

	for(int i = 0; i < Collection.size(); ++i){
		cout << "\nEnter a rank for " << Collection[i].title << " by " << Collection[i].artist << ": ";
		getline(cin, input);

		Ranking[stoi(input)] = Collection[i];
	}
}

// Display music collection rankings
void displayRanking(){
	cout << "\nYour music ranking:\n";

	for(const auto& rank : Ranking){
		cout << "#" << rank.first << ". " << rank.second.title << " by " << rank.second.artist
				<< " (" << rank.second.year << ") [" << rank.second.genre << "]" << '\n';
	}
}

/* Main menu located here */
int main() {
	// Menu function variables
	int menuOption;
	bool run = true;

	// Welcome user at start of program
	cout << "Welcome to the Music Collection Organizer!\n";

	// Menu
	do{
		// Menu message and input
		cout << "\nEnter 1 to add music to your collection," <<
				"\nEnter 2 to view your music collection," <<
				"\nEnter 3 to rank your favourite music," <<
				"\nEnter 4 to view your music rankings," <<
				"\nEnter 5 to exit the program.\n\n";
		cin >> menuOption;

		// Send user to menu functions
		switch(menuOption){
		case 1 : musicInput();
			break;
		case 2 : displayCollection();
			break;
		case 3 : rankMusic();
			break;
		case 4 : displayRanking();
			break;
		case 5 : run = false;
			break;
		default : cout << "\nInvalid input!\n";
		}
	}while(run==true);
}
