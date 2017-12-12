//Dashaun Slaughter
//12/12/2017
//FINAL

using namespace std;

#include <iostream>
#include <string>

int main(){
int size = 100;
char words[size];
string sentence;
cout<< "Enter a word or phrase\n";
getline(cin,sentence);
if(sentence.isempty()){
	countLine("Ohio University");
	countChar("Athens");
}
else{
	int tempsize = sentence.size();
	for(int i = 0; i< tempsize;i++){
		words[i] = sentence[i];
	}
	countLine[words];
	countCHar[words];
	}
return 0;
}

int countLine(char* pName){
//Prints out number of lines

}

int countChar(char* pName){
//Prints out number of characters

}
