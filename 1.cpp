#include <iostream>
#include <list>
using namespace std;

class youtubeChannel {
private:
    string Name;
    string Ownername;
    int SubCount;
    list <string> publishedVideoTitles;
//constructor
public:
    youtubeChannel (string name ,string ownername) {
        Name  = name;
        Ownername = ownername;
        SubCount = 0;  
    }

    void Getinfo () {
    cout << "name: "<< Name << endl;
    cout << "Ownername: "<< Ownername << endl;
    cout << "subs: "<< SubCount << endl;
    cout << "videos: " << endl;
    for (string videoTitle:publishedVideoTitles){
        cout << videoTitle << endl;

    }
    }    
    void Subscribe () {
        Subsciberscount++;
    }
    void UnSubscribe () {
        Subsciberscount--;
    }


};

int main () 
{
    youtubeChannel ytchannel ("opium","carson");
    // ytchannel.publishedVideoTitles.push_back("oop for beginers");
    // ytchannel.publishedVideoTitles.push_back("c ++ for beginers");
    // ytchannel.publishedVideoTitles.push_back("c for beginers");
    // youtubeChannel ytchannel2 ("ken", "danny");
    ytchannel.Subscribe();
    ytchannel.Subscribe();

    ytchannel.Getinfo();
    //ytchannel2.Getinfo();
}