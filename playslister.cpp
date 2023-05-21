#include <iostream>
#include <fstream>
#include <string>
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

int main()
{
    // example 6MoTeX5dtuPZ3hwaecuBkz
    string song_link = "6MoTeX5dtuPZ3hwaecuBkz";
    song boris1 = link_to_song(song_link);

    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("boris.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText))
    {
        // Output the text from the file
        cout << myText;
        cout << "\n";
    }

    // Close the file
    MyReadFile.close();
}