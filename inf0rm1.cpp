#include <iostream>
using namespace std;

int main()
{
	int menu;
	string pilih,domain,ip,yes;

	cout << "+-----------------------------+" << endl;
	system("toilet --gay -f smblock Mata Batin");
	cout << "#    Information Gathering    #" << endl;
	cout << "# Author   : mx0r             #" << endl;
	cout << "# Team     : Kawali Crew      #" << endl;
	cout << "# Language : C++              #" << endl;
	cout << "# Github   : github.com/hnov7 #" << endl;
	cout << "# Version  : 1.0              #" << endl;
	cout << "# Thanks to: IndoXploit       #" << endl;
	cout << "+-----------------------------+" << endl;
	cout << endl;
	cout << "[01] > Who Is Lookup" << endl;
	cout << "[02] > Geo Location" << endl;
	cout << "[03] > Domain Info" << endl;
	cout << "[04] > Ip Info" << endl;
	cout << "[05] > Exit" << endl;
	cout << endl;
	cout << " Example: 1 " << endl;
	cout << "root@kawalicrew: ";
	cin >> menu;
	cout << endl;
	switch(menu){
	case 1:
	system("clear");
	cout << "+------------------------------------------+" << endl;
	system("figlet -f smblock Whois Look Up");
	cout << "+------------------------------------------+" << endl;
	cout << "# Created by : mx0r            #" << endl;
	cout << "# kawalicrew.blogspot.com      #" << endl;
	cout << "# Thanks To: IndoXploit        #" << endl;
	cout << "+------------------------------------------+" << endl;
	cout << endl;
	cout << "Example: jancok.gov" << endl;
	up1 :
	cout << "Masukan Domain nya: ";
	cin>>domain;
	cout << endl;
	domain = "curl https://api.indoxploit.or.id/domain/" + domain;
	cout << system(domain.c_str()) << std::endl;
	cout << "Again(yes/not): ";
	cin >> pilih;
	if(pilih=="yes")
	{
		goto up1;
	}
	cout << endl;
	cout << endl;
	break;
	case 2:
	cout << "Coming Soon" << endl;
	cout << "Tunggu aja di kawalicrew.blogspot.com" <<endl;
	break;
	case 3:
	system("figlet -f smblock Coming Soon");
	break;
	case 4:
	system("clear");
	system("figlet -f smblock Ip Info");
	cout << "# Created by : mx0r            #" << endl;
	cout << "# kawalicrew.blogspot.com      #" << endl;
	cout << "# Thanks To: IndoXploit        #" << endl;
	cout << endl;
	up4 :
	cout << "Example: 119.81.68.118" << endl;
	cout << "Masukan Ip nya: ";
	cin>>ip;
	cout << endl;
	domain = "curl https://api.indoxploit.or.id/ip/" + ip;
	cout << system(domain.c_str()) << endl;
	cout << "Again(yes/not): ";
	cin >> pilih;
	if(pilih=="yes")
	{
		goto up4;
	}
	cout << endl;
	cout << endl;
	break;
	case 5:
	cout << "Exit(yes/not): ";
	cin>>yes;
	cout << endl;
	yes = "cd ..";
	cout << endl;
	cout << system(yes.c_str()) << endl;
	}

	return 0;
}
