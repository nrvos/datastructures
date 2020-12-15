# Music Collection Program
My final project for my Data Structures class, this program stores information from the user about their music collection and enables the user to rank their albums.

## Mechanism
The user is given a menu of options to choose, as shown in the sample output. The first option allows the user to input information on their music collection.

An Album class is used to store album information from the user. This information is ultimately stored in a vector of Album objects, the contents of which can be viewed by the user via the second menu option.

The third menu option enables the user to rank their albums. Album data is retrieved from the vector and the user is asked for each album to input a ranking. This ranking and the album information is then stored in a map of int variables and Album objects.

The fourth menu option displays the user's ranking of their albums along with the albums' information.

## Sample Output
```
Welcome to the Music Collection Organizer!

Enter 1 to add music to your collection,
Enter 2 to view your music collection,
Enter 3 to rank your favourite music,
Enter 4 to view your music rankings,
Enter 5 to exit the program.

1

Enter album title: Led Zeppelin IV

Enter album artist: Led Zeppelin

Enter album genre: Hard Rock

Enter album year: 1971

Continue to input albums (y/n)? y

Enter album title: Sgt Pepper's Lonely Hearts Club Band

Enter album artist: The Beatles

Enter album genre: Psychedelic Pop/Rock

Enter album year: 1967

Continue to input albums (y/n)? n

Enter 1 to add music to your collection,
Enter 2 to view your music collection,
Enter 3 to rank your favourite music,
Enter 4 to view your music rankings,
Enter 5 to exit the program.

2

Your music collection:

Title: Led Zeppelin IV
Artist: Led Zeppelin
Genre: Hard Rock
Year: 1971

Title: Sgt Pepper's Lonely Hearts Club Band
Artist: The Beatles
Genre: Psychedelic Pop/Rock
Year: 1967

Enter 1 to add music to your collection,
Enter 2 to view your music collection,
Enter 3 to rank your favourite music,
Enter 4 to view your music rankings,
Enter 5 to exit the program.

3

Rank your music collection:

Enter a rank for Led Zeppelin IV by Led Zeppelin: 2

Enter a rank for Sgt Pepper's Lonely Hearts Club Band by The Beatles: 1

Enter 1 to add music to your collection,
Enter 2 to view your music collection,
Enter 3 to rank your favourite music,
Enter 4 to view your music rankings,
Enter 5 to exit the program.

4

Your music ranking:
#1. Sgt Pepper's Lonely Hearts Club Band by The Beatles (1967) [Psychedelic Pop/Rock]
#2. Led Zeppelin IV by Led Zeppelin (1971) [Hard Rock]

Enter 1 to add music to your collection,
Enter 2 to view your music collection,
Enter 3 to rank your favourite music,
Enter 4 to view your music rankings,
Enter 5 to exit the program.

5
```

## Resources
-	*Programming: Principles and Practice Using C++* by Bjarne Stroustrup
-	cplusplus.com forums to help clear up confusion:
	-	https://www.cplusplus.com/forum/beginner/84363/
	-	https://www.cplusplus.com/forum/articles/10627/
