#include<iostream>
#include<list>
using namespace std;



class YouTubeChannel {

  public:

	string Name;
	string OwnerName;
	list<string>VideoTitles;
	int Subscribers = 0;

	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
	}


	void setTitles(string title){
		VideoTitles.push_back(title);
	}

	void displayTitles(){
		for(string title: VideoTitles)
			cout << title <<endl;
	}


	void subscribe(){
		Subscribers++;
	}

};


int main() {

	YouTubeChannel channel("SourceOfCode", "Khokon Chandra");
	channel.subscribe();
	channel.subscribe();
	channel.subscribe();


	cout << channel.Subscribers << endl;

	return 0;

}
