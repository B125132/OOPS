//music playlist
#include <iostream>
using namespace std;

class Song {
private:
    string songName;
    string artistName;
    float duration;

public:
    Song(string song, string artist, float time) {
        songName = song;
        artistName = artist;
        duration = time;
    }

    friend void compareSongs(Song s1, Song s2);
};

void compareSongs(Song s1, Song s2) {
    cout << "\nSong 1: " << s1.songName << endl;
    cout << "Artist: " << s1.artistName << endl;
    cout << "Duration: "   << s1.duration << " minutes" << endl;

    cout << "\nSong 2: "    << s2.songName << endl;
    cout << "Artist: " << s2.artistName << endl;
    cout << "Duration: " << s2.duration << " minutes" << endl;

    if (s1.duration == s2.duration)
        cout << "\nBoth songs have the same duration." << endl;
    else
        cout << "\nThe songs have different durations."   << endl;
}

int main() {
    string song1, artist1;
    string song2, artist2;

    float time1, time2;

     cout << "Enter first song   name: ";
     getline(cin, song1);

    cout << "Enter first artist name: ";
    getline(cin, artist1);

    cout << "Enter first song duration: ";
    cin >> time1;
    cin.ignore();

    cout << "\nEnter second song name: ";
    getline(cin, song2);

    cout << "Enter second artist name: ";
    getline(cin, artist2);

    cout << "Enter second song duration: ";
    cin >> time2;

    Song s1(song1, artist1, time1);



    Song s2(song2, artist2, time2);

     compareSongs(s1, s2);

    return 0;
}