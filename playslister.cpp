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
    s.id = link;
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
    // example 6MoTeX5dtuPZ3hwaecuBkz
    string song_link = "6MoTeX5dtuPZ3hwaecuBkz";
    song boris1 = link_to_song(song_link);

    vector<string> link_Playlist = read_Playlist("boris.txt");
    for (const string& i : link_Playlist){
        cout << i << "\n";
    }

    return 0;
}