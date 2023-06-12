#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct song
{
    string id;
    // If possible, duration!
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
    vector<string> link_Playlist = read_Playlist("boris.txt");

    vector<song> song_Playlist;
    for (const string& i : link_Playlist){
        song_Playlist.push_back(link_to_song(i));
    }

    for (const song& i : song_Playlist){
        cout << i.id << "\n";
    }

    return 0;
}