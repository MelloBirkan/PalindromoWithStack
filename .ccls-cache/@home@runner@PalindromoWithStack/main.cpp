#include <iostream>
#include <string>
#include "pilhaStructChar.h"
#include <regex>


using namespace std;


int len(string sTemp) {
  int i = 0;
  int count = 0;
  while (sTemp[i] != '\0') {
    i++;
    count++;
    }
  return count;
  }


int main(){
	Pilha p;
	string s, sToPrint;

    init(p);

	cout << "Forneca uma string: ";
	getline(cin, s);
    sToPrint = s;

    regex regx("\\s");
    s = regex_replace(s, regx, "");


	int tamS = len(s);
	for(int i = 0; i < tamS; i++){
		push(p, (s[i]));
	}

	string sinv = "";
	for(int i = 0; i < tamS; i++){
    sinv = sinv + pop( p );
	}

	//cout << "String invertida: " << sinv << endl;

	if (s == sinv) cout << endl << sToPrint << " eh Palindromo." << endl;
	else cout << endl << sToPrint << " nao eh Palindromo." << endl;

	return 0;
}
