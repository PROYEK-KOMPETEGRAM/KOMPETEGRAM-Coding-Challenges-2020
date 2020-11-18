#include <iostream>
#include <string>

using namespace std;

int main(){
	int repeat;
	string text;
	
	cin >> repeat;
	cin.get();
	
	for(int i = 0; i < repeat; i++){
		getline(cin, text);

		for(string::size_type j = 0; j < text.length(); j++){
			while(text[j] == '>'){
				text.erase(j,1);
				text[j] = toupper(text[j]);
			}
			
			while(text[j] == '<'){
				text.erase(j,1);
				text[j] = tolower(text[j]);
			}
		}
		
		cout << text << endl;
	}
	return 0;
}
