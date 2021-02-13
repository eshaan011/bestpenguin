#include <iostream>
#include <string>
#include <ctime>
#include <math.h>
using namespace std;
void nameAsk(){
	cout<<"Please enter your first name for personalisation\n";
	string name;
	cin>>name;
	cout<<"Signing you in...\n";
	cout << "\033[2J\033[1;1H";
	cout<<"Welcome, "<<name<<"!\n";
}
void mainFunc(){
	cout<<"Please choose an app to open\n";
	cout<<"Clock\nText\nExpert (browser)\nAddition-Calculator\nSubtraction-Calculator\nMultiplication-Calculator\nDivision-Calculator\nTour\n";
	string app;
	cin>>app;
	if (app=="clock"){
		cout << "\033[2J\033[1;1H";/* clear the screen */
		// current date/time based on current system
 	 time_t now = time(0);
   
  	// convert now to string form
 	 char* dt = ctime(&now);
 	 cout << "Current time: " << dt << endl;
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			cout<<"A fatal error has occured.";
			mainFunc();
		}
	}
	else if (app=="text"){
		cout << "\033[2J\033[1;1H";
		cout<<"----------\n(C) 2021 The E11 Coorporation\n\nBestPenguin Text\nCreate a quick text (.txt) document on BestPenguin Disk\nPress enter when done\n";
		string note;
		cin>>note;
		cout<<"Here is your saved note:\n";
		cout<<note;
		cout<<"Saving note...\n";
		cout<<"Saved!\n\n\n";
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			cout<<"A fatal error has occured.";
			mainFunc();
		}
	}
	else if (app=="expert"){
		cout << "\033[2J\033[1;1H";
		cout<<"-----------\n(C) 2021 The E11 Coorporation\n\nExpert Web Browser\nBrowse a small collection of web sites\nType in LIST in all caps to find a list of sites.\n";
		string site;
		cin>>site;
		if (site=="LIST"){
			cout << "\033[2J\033[1;1H";
			cout<<"bing.com\napple.com\nw3schools.com\n";
			cout<<"Press [5] to end the programme.\n";
			string d;
			cin >> d;
			if (d=="5"){
				cout << "\033[2J\033[1;1H";
				mainFunc();
			}
			else {
				cout << "\033[2J\033[1;1H";
				cout<<"A fatal error has occured.";
				mainFunc();
			}
		}

		else if (site=="bing.com"){
			cout << "\033[2J\033[1;1H";
			cout<<"\n\n\nMicrosoft Bing Images Video ... Log In ---\nLanguages:हिंदीಕನ್ನಡবাংলাमराठीతెలుగుதமிழ்ગુજરાતીമലയാളംਪੰਜਾਬੀ\nThe ruins of a mayan superpower\n";
			cout<<"Press [5] to end the programme.\n";
			string d;
			cin >> d;
			if (d=="5"){
				cout << "\033[2J\033[1;1H";
				mainFunc();
			}
			else {
				cout << "\033[2J\033[1;1H";
				cout<<"A fatal error has occured.";
				mainFunc();
			}
		}
		else if (site=="apple.com"){
			cout << "\033[2J\033[1;1H";
			cout<<endl;
			cout<<endl;
			cout<<"Apple Logo Mac iPad iPhone Watch TV Music Support Store Search\n\nUnable to display homepage, since there was an error connecting to the server. Please try viewing this page on a supported browser.\n";
			cout<<"Press [5] to end the programme.\n";
			string d;
			cin >> d;
			if (d=="5"){
				cout << "\033[2J\033[1;1H";
				mainFunc();
			}
			else {
				cout << "\033[2J\033[1;1H";
				cout<<"A fatal error has occured.";
				mainFunc();
		}
		}
		else if (site=="w3schools.com"){
			cout << "\033[2J\033[1;1H";
			cout<<"\n\n\nHTMLThe language for building web pages\nHTML Example:\n<!DOCTYPE html>\n<html>\n<title>\nHTML Tutorial</title>\n<body>\n<h1>This is a heading</h1>\n<p>This is a paragraph.</p>\n</body>\n</html>\n\nCSS Example:\nbody {\nbackground-color: lightblue;\n}\nh1 {\ncolor: white;\ntext-align: center;\n}\np {\nfont-family: verdana;\nfont-size: 20px;\n}\nCSS\nThe language for styling web page\ns";
			cout<<"Press [5] to end the programme.\n";
			string d;
			cin >> d;
			if (d=="5"){
				cout << "\033[2J\033[1;1H";
				mainFunc();
			}
			else {
				cout << "\033[2J\033[1;1H";
				cout<<"A fatal error has occured.";
				mainFunc();
			}
		}
		else {
			cout << "\033[2J\033[1;1H";
			cout<<"Website not found\n";
			cout<<"Press [5] to end the programme.\n";
			string d;
			cin >> d;
			if (d=="5"){
				cout << "\033[2J\033[1;1H";
				cout<<"Press [5] to end the programme.\n";
				string d;
				cin >> d;
				if (d=="5"){
					cout << "\033[2J\033[1;1H";
					mainFunc();
				}
				else {
					cout << "\033[2J\033[1;1H";
					cout<<"A fatal error has occured.";
					mainFunc();
				}
			}
			else {
				cout << "\033[2J\033[1;1H";
				cout<<"A fatal error has occured.";
				mainFunc();
			}
		}
	}
	else if (app=="addition-calculator"){
		cout << "\033[2J\033[1;1H";
		cout<<"\n-----------\n(C) 2021 The E11 Coorporation\n\nCalculator\nOperation: Addition\n";
		cout<<"Please enter addend #1:";
		int addend1;
		cin>>addend1;
		cout<<"Please enter addend #2:";
		int addend2;
		cin>>addend2;
		int answer = addend1 + addend2;
		cout<<"Loading....\nCalculating the answer...\nYour equation was: "<<addend1<<"+"<<addend2<<"\nYour answer is: "<<answer<<".\n";
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			cout<<"A fatal error has occured.";
			mainFunc();
		}
	}
	else if (app=="subtraction-calculator"){
		cout << "\033[2J\033[1;1H";
		cout<<"\n-----------\n(C) 2021 The E11 Coorporation\n\nCalculator\nOperation: Subtraction\n";
		cout<<"Please enter total:";
		int subtract1;
		cin>>subtract1;
		cout<<"Please enter amount to subtract:";
		int subtract2;
		cin>>subtract2;
		int answer2 = subtract1 - subtract2;
		cout<<"Loading....\nCalculating the answer...\nYour equation was: "<<subtract1<<"-"<<subtract2<<"\nYour answer is: "<<answer2<<".\n";
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			cout<<"A fatal error has occured.";
			mainFunc();
		}
	}
	else if (app=="multiplication-calculator"){
		cout << "\033[2J\033[1;1H";
		cout<<"\n-----------\n(C) 2021 The E11 Coorporation\n\nCalculator\nOperation: Multiplication\n";
		cout<<"Please enter factor #1: ";
		int factor1;
		cin>>factor1;
		cout<<"Please enter factor #2: ";
		int factor2;
		cin>>factor2;
		int answer3 = factor1 ^ factor2;
		cout<<"Loading....\nCalculating the answer...\nYour equation was: "<<factor1<<"•"<<factor2<<"\nYour answer is: "<<answer3<<".\n";
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			cout<<"A fatal error has occured.";
			mainFunc();
		}
	}
	else if (app=="division-calculator"){
		cout << "\033[2J\033[1;1H";
		cout<<"\n-----------\n(C) 2021 The E11 Coorporation\n\nCalculator\nOperation: Divisor\n";
		cout<<"Please enter dividend: ";
		int dividend;
		cin>>dividend;
		cout<<"Please enter divisor: ";
		int divisor;
		cin>>divisor;
		int answer4 = dividend / divisor;
		cout<<"Loading....\nCalculating the answer...\nYour equation was: "<<dividend<<"÷"<<divisor<<"\nYour answer is: "<<answer4<<".\n";
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			cout<<"A fatal error has occured.";
			mainFunc();
		}
	}
	else if (app=="esuper"){
		cout << "\033[2J\033[1;1H";
		cout << "eSuper is not yet available on BestPenguin Disk or the BestPenguin Source application on BestPenguin Point.\n";
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			cout<<"A fatal error has occured.";
			mainFunc();
		}
	}
	else if (app=="tour"){
		cout<<"Welcome to BestPenguin Disk!\n";
		cout<<"Please locate your number pad. It should look like this: \n[ ][/][*][-]\n[7][8][9][+]\n[4][5][6][ ]\n[1][2][3][>]\n[0   ][.][ ]\nOn BestPenguin, the 5 key is used as a function key. The 8 key is the up arrow, 6 key is the right arrow, 4 key is left arrow, 2 key is down arrow.\nPress the enter key on the keypad to submit text in text inputs.\nTour has ended\n";
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			cout<<"A fatal error has occured.";
			mainFunc();
		}
	}
	else {
		cout << "\033[2J\033[1;1H";
		cout<<"The app you requested does not exist [yet]. What may have happened:\nYou typed the app name wrong\nYou did not type the app name in all lowercase\nYou entered a space in the name\nYou wrote Expert (Browser) instead of expert.\nThe app you requested is non-existent\nYou typed from right to left\n";
		cout<<"Press [5] to undo the error.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			cout<<"Another error has occured.";
			mainFunc();
		}
	}
}
int main() {
	cout<<"Welcome to BestPenguin Disk Version 1.0\n";
	cout<<"Free Web-Based Disk Operating System\n";
	nameAsk();
	mainFunc();
	
}
