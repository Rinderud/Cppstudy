#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct song
{
    string id;
    float dur_min = 3.0; // Average time of a song is 3 minutes.
};

song link_to_song(string link)
{
    song s;
    string link_str = "https://open.spotify.com/track/";
    string id_str = link.substr(link_str.size());
    s.id = id_str;
    return s;
}

vector<string> read_Playlist(string file_Name){
    ifstream read_File(file_Name);
    vector<string> links;
    string song_Link;
    while (getline(read_File, song_Link))
    {
        links.push_back(song_Link);
    }
    read_File.close();
    return links;
}

int main()
{
    vector<string> links_boris = read_Playlist("boris.txt");
    vector<song> songs_boris;
    for (const string& i : links_boris){
        songs_boris.push_back(link_to_song(i));
    }
    cout << "\nBoris songs, ids\n";
    for (const song& i : songs_boris){
        cout << i.id << "\n";
    }
    
    vector<string> links_janelle = read_Playlist("janelle.txt");
    vector<song> songs_janelle;
    for (const string& i : links_janelle){
        songs_janelle.push_back(link_to_song(i));
    }
    cout << "\nJanelle songs, ids\n";
    for (const song& i : songs_janelle){
        cout << i.id << "\n";
    }

    /*  Mixing strategy:
        1. compile list of specified length from given vector.
        2. add both compiled lists together.
    */

    return 0;
}