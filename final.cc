//Dashaun Slaughter
//12/12/2017
//FINAL

using namespace std;

#include <iostream>
#include <string>
#include <fstream>

int countLine(char * pName);
int countChar(char * pName);

int main(){
int size = 100;
int total_lines = 0;
int total_characters = 0;
char words[size];
char words1[size];
char words2[size];
string filename,sentence,sentence1,sentence2;
ifstream file;
cout<< "Enter file name\n";
getline(cin,filename);
if(filename.empty()){	//If no filename is input, then the functions receive default words
	sentence1 = "Ohio University";
	sentence2 = "Athens";
	for(int i=0;i<size;i++){	//Convert string to characters while calling countLine 
		words1[i] = sentence1[i];
		total_lines+=countLine(words1[i]);
	}
	cout << total_lines << " lines in " << sentence1 << endl;	//Output
	for(int i=0;i<size;i++){	//Convert string to characters while calling countChar
		words2[i] = sentence2[i];
		total_characters+=countChar(words2[i]);
	}
	cout<< total_characters << " characters in " <<sentence2 << endl;	//Output
}
else{	//reads in file
	filename = filename + '.' + "txt";
	file.open(filename);
	if(file.is_open()){	//Checks if file is open
		while(getline(file, sentence)){	//Reads from file into string
			int tempsize = sentence.size();	//Stores size of string
			for(int i = 0; i< tempsize;i++){	//Loop that moves string to array of characters
				words[i] = sentence[i];
				//Call countLine and countChar for each character passed
				total_lines+=countLine[words[i]];
				total_characters+=countChar[words[i]];
			}
		}
	}
	cout << total_lines << " lines" << endl;	//Output
	cout<< total_characters << " characters" << endl;       //Output

}
file.close();

return 0;
}

int countLine(char* pName){
//Prints out number of lines
int lines = 0;
if(pName == '\n')
	lines++;
return lines;

}

int countChar(char* pName){
//Prints out number of characters
int characters = 0;
characters++;
return characters;
}
