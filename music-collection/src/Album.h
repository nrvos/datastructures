/**ALBUM CLASS HEADER FILE**/
#ifndef ALBUM_H_
#define ALBUM_H_

using namespace std;

// ALBUM OBJECT DEFINITION

class Album{
public:
	// Class variables
	string title;
	string artist;
	string genre;
	int year;

	/* Constructor */

	Album();

	Album(string titleInput, string artistInput, string genreInput, int yearInput);

	/* Setters and Getters */

	// Title
	void setTitle(string titleIn);
	string getTitle();

	// Artist
	void setArtist(string artistIn);
	string getArtist();

	// Genre
	void setGenre(string genreIn);
	string getGenre();

	// Year
	void setYear(int yearIn);
	int getYear();
};



#endif /* ALBUM_H_ */
