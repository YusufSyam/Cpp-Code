 #include <iostream>
 #include <iomanip>
 
 using namespace std;
 
 void iniProsedurVoid(){
 	cout << "Ini prosedur void";
 }
 
 string iniFungsiString(){
 	return "Ini fungsi string";
 }
 
 int main(){
 	
 	iniProsedurVoid();
 	cout << "\n" << iniFungsiString();
 	
 	return 0;
 }
 
 
