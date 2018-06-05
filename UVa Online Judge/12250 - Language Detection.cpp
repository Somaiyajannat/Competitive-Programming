using namespace std;

#include <bits/stdc++.h>

int main()
{
	map<string, string> mm;
	string str;
	int caseNo = 1;
	
	mm["HELLO"] = "ENGLISH";
	mm["HOLA"] = "SPANISH";
	mm["HALLO"] = "GERMAN";
	mm["BONJOUR"] = "FRENCH";
	mm["CIAO"] = "ITALIAN";
	mm["ZDRAVSTVUJTE"] = "RUSSIAN";
	
	while(cin >> str)
	{
		if(str.compare("#") == 0) /// if match
		{
			break;
		}
		if(mm[str] == 0){   /// if there is no match
			cout << "Case " << caseNo << ": UNKNOWN" << endl;
		}
		else{
			cout << "Case " + caseNo + ": " + mm[str] << endl;
		}
		caseNo++;
	}


	return 0;
}







#


Case 1: 
Case 2: 
Case 3: 
Case 4: 
Case 5: 
Case 6: 