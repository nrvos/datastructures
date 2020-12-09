#include <iostream>
#include <string>
#include "Album.h"

using namespace std;

/* Constructor */

Album::Album(){
	title = "";
	artist = "";
	genre = "";
	year = 0;
}

Album::Album(string titleInput, string artistInput, string genreInput, int yearInput){
	title = titleInput;
	artist = artistInput;
	genre = genreInput;
	year = yearInput;
};

/* Setters and Getters */

// Title
void Album::setTitle(string titleIn){
	title = titleIn;
}
string Album::getTitle(){
	return title;
}

// Artist
void Album::setArtist(string artistIn){
	artist = artistIn;
}
string Album::getArtist(){
	return artist;
}

// Genre
void Album::setGenre(string genreIn){
	genre = genreIn;
}
string Album::getGenre(){
	return genre;
}

// Year
void Album::setYear(int yearIn){
	year = yearIn;
}
int Album::getYear(){
	return year;
}
