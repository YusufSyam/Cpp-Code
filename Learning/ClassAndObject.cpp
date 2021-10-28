 #include <iostream>
 #include <iomanip>
 
 using namespace std;
 
 class Method{
 	
public: 

	void mainnya(){
		iniProsedurVoid();
 		cout << "\n" << iniFungsiString();
 	}
 
 	void iniProsedurVoid(){
 		cout << "Ini prosedur void";
 	}
 
 	string iniFungsiString(){
 		return "Ini fungsi string";
 	}
 	
 }methodMain;
 
 int main(){
 	
 	methodMain.mainnya();
 	methodMain.iniProsedurVoid();
	return 0;
 }
 
 
