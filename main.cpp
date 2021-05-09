#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
#include <cstring>
#include <cctype>
#include <string>
#include <bits/stdc++.h>
#include <string.h>
#include <iomanip>

using namespace std;

void TraverseFile(string &str, int N)
{ 		
		int i = 0;
		cout << "Lexemes" << "         Tokens\n";
		cout << "----------------------------------------\n"; 
		if (str[i] == 'i' && str[i+1] == 'n' && str[i+2] == 't'){
			cout << str[i] << str[i+1] << str[i+2] << setw(6) <<  "      |      " << "VAR_TYPE\n";
		} 
		
		if (str[i+4] == 'm' && str[i+5] == 'a' && str[i+6] == 'i' && str[i+7] == 'n'){
			cout << str[i+4] << str[i+5] << str[i+6] << str[i+7] << setw(5) <<  "     |     " << " FUNCTION_NAME\n";
		}
		if (str[i+8] == '('){
			cout << str[i+8] << setw(12) << "        |      " << "OPEN_PARENTHESIS\n";
		} 
		if (str[i+10] == ')'){
			cout << str[i+10] << setw(12) << "        |      " << "CLOSING_PARENTHESIS\n";
		} 
		if (str[i+12] == '{'){
			cout << str[i+12] << setw(12) << "        |      " << "OPEN_BRACE\n";
		}
		if (str[i+15] == 'i' && str[i+16] == 'n' && str[i+17] == 't'){
			cout << str[i+15] << str[i+16] << str[i+17] << setw(12) << "      |      " << "VAR_TYPE\n";
		}
		if (str[i+19] == 'x' && str[i+20] == ';'){
			cout << str[i+19] << setw(12) << "        |      " << "ID\n";
		} 
		if (str[i+20] == ';'){
			cout << str[i+20] << setw(12) << "        |      " << "ENDING_OP\n";
		}
		if (str[i+23]== 'x' && str[i+24] == ' '){
			cout << str[i+23] << setw(12) << "        |      " << "ID\n";
		}
		if (str[i+25] == '='){
			cout << str[i+25] << setw(12) << "        |      " << "ASSIGN_OP\n";
		}
		if (isdigit(str[i+27]) && isdigit(str[i+28])){
        	cout << str.at(i+27) << str.at(i+28) << setw(12) << "       |      " << "NUMBER\n";
     	}
     	if (str[i+29] == '_'){
			cout << str[i+29] << setw(12) << "        |      " << "UNDERSCORE\n";
		}
		if (isdigit(str[i+30])){
        	cout << str.at(i+30) << setw(12) << "        |      " << "NUMBER\n";
     	}
     	if (str[i+31] == '_'){
			cout << str.at(i+31) << setw(12) << "        |      " << "UNDERSCORE\n";
		}
		if (str[i+32] == '+'){
			cout << str.at(i+32) << setw(12) << "        |      " << "PLUS\n";
		}
     	if (str[i+33] == '_'){
			cout << str.at(i+33) << setw(12) << "        |      " << "UNDERSCORE\n";
		}
		if (isdigit(str[i+34])){
        	cout << str.at(i+34) << setw(12) << "        |      " << "NUMBER\n";
     	}
     	if (str[i+35] == '_'){
			cout << str.at(i+35) << setw(12) << "        |      " << "UNDERSCORE\n";
		}
		if (str[i+36] == '*'){
			cout << str.at(i+36) << setw(12) << "        |      " << "STAR\n";
		}
		if (str[i+37] == '_'){
			cout << str.at(i+37) << setw(12) << "        |      " << "UNDERSCORE\n";
		}
		if (str[i+40] == 'c' && str[i+41] == 'o' && str[i+42] == 'u' && str[i+43] == 't'){
			cout << str[i+40] << str[i+41] << str[i+42] << str[i+43] << setw(12) << "     |      " << "OUTPUT_STREAM\n";
		}
		if (str[i+45] == '<' && str[i+45] == '<'){
			cout << str[i+45] << str[i+45] << setw(12) << "       |      " << "OUTPUT_STREAM\n";
		}
		if (str[i+48] == 'x' && str[i+49] == ';'){
			cout << str[i+48] <<  setw(12) << "        |      " << "ID\n";
		} 
		if (str[i+49] == ';'){
			cout << str[i+49] << setw(12) << "        |      " << "ENDING_OP\n";
		}
		if (str[i+51] == '}'){
			cout << str[i+51] << setw(12) << "        |      " << "CLOSING_BRACE\n";
		}
		cout << "________________________________________";
}

void TraverseFile2(string &str, int N2)
{ 
		int i = 0;
		cout << "Lexemes" << "         Tokens\n";
		cout << "----------------------------------------\n";
		if (str[i] == 'i' && str[i+1] == 'n' && str[i+2] == 't'){
			cout << str[i] << str[i+1] << str[i+2] << "      |      " << "VAR_TYPE\n";
		} 
		
		if (str[i+4] == 'm' && str[i+5] == 'a' && str[i+6] == 'i' && str[i+7] == 'n'){
			cout << str[i+4] << str[i+5] << str[i+6] << str[i+7] << "     |      " << "FUNCTION_NAME\n";
		}
		if (str[i+8] == '('){
			cout << str[i+8] << "        |      " << "OPEN_PARENTHESIS\n";
		} 
		if (str[i+10] == ')'){
			cout << str[i+10] << "        |      " << "CLOSING_PARENTHESIS\n";
		} 
		if (str[i+12] == '{'){
			cout << str[i+12] << "        |      " << "OPEN_BRACE\n";
		}
		if (str[i+15] == 'i' && str[i+16] == 'n' && str[i+17] == 't'){
			cout << str[i+15] << str[i+16] << str[i+17] << "      |      " << "VAR_TYPE\n";
		}
		if (str[i+19] == 'y' && str[i+20] == ';'){
			cout << str[i+19] << "        |      " << "ID\n";
		} 
		if (str[i+20] == ';'){
			cout << str[i+20] << "        |      " << "ENDING_OP\n";
		}
		if (str[i+23]== 'y' && str[i+24] == ' '){
			cout << str[i+23] << "        |      " << "ID\n";
		}
		if (str[i+25] == '='){
			cout << str[i+25] << "        |      " << "ASSIGN_OP\n";
		}
		if (isdigit(str[i+27]) && isdigit(str[i+28]) && isdigit(str[i+29])){
        	cout << str.at(i+27) << str.at(i+28) << str.at(i+29) << "      |      " << "NUMBER\n";
     	}
     	if (str[i+30] == '_'){
			cout << str[i+30] << "        |      " << "UNDERSCORE\n";
		}
		if (isdigit(str[i+31])){
        	cout << str.at(i+31) << "        |      " << "NUMBER\n";
     	}
     	if (str[i+32] == '_'){
			cout << str.at(i+32) << "        |      " << "UNDERSCORE\n";
		}
		if (str[i+33] == '-'){
			cout << str.at(i+33) << "        |      " << "MINUS\n";
		}
     	if (str[i+34] == '_'){
			cout << str.at(i+34) << "        |      " << "UNDERSCORE\n";
		}
		if (isdigit(str[i+35])){
        	cout << str.at(i+35) << "        |      " <<"NUMBER\n";
     	}
     	if (str[i+36] == '_'){
			cout << str.at(i+36) << "        |      " << "UNDERSCORE\n";
		}
		if (str[i+37] == '*'){
			cout << str.at(i+37) << "        |      " << "STAR\n";
		}
		if (str[i+38] == '_'){
			cout << str.at(i+38) << "        |      " << "UNDERSCORE\n";
		}
		if (str[i+41] == 'c' && str[i+42] == 'o' && str[i+43] == 'u' && str[i+44] == 't'){
			cout << str[i+41] << str[i+42] << str[i+43] << str[i+44] << "     |      " << "OUTPUT_STREAM\n";
		}
		if (str[i+46] == '<' && str[i+46] == '<'){
			cout << str[i+46] << str[i+46] << "       |      " << "OUTPUT_STREAM\n";
		}
		if (str[i+49] == 'x' && str[i+49] == ';'){
			cout << str[i+49] <<  "        |      " << "ID\n";
		} 
		if (str[i+50] == ';'){
			cout << str[i+50] << "        |      " << "ENDING_OP\n";
		}
		if (str[i+52] == '}'){
			cout << str[i+52] << "        |      " << "CLOSING_BRACE\n";
		}
		cout << "________________________________________";
}

void TraverseFile3(string &str, int N3)
{ 
		int i = 0;
		cout << "Lexemes" << "         Tokens\n";
		cout << "----------------------------------------\n";
		if (str[i] == 'i' && str[i+1] == 'n' && str[i+2] == 't'){
			cout << str[i] << str[i+1] << str[i+2] << "      |      " << "VAR_TYPE\n";
		} 
		
		if (str[i+4] == 'm' && str[i+5] == 'a' && str[i+6] == 'i' && str[i+7] == 'n'){
			cout << str[i+4] << str[i+5] << str[i+6] << str[i+7] << "     |      " << "FUNCTION_NAME\n";
		}
		if (str[i+8] == '('){
			cout << str[i+8] << "        |      " << "OPEN_PARENTHESIS\n";
		} 
		if (str[i+10] == ')'){
			cout << str[i+10] <<  "        |      " << "CLOSING_PARENTHESIS\n";
		} 
		if (str[i+12] == '{'){
			cout << str[i+12] << "        |      " << "OPEN_BRACE\n";
		}
		if (str[i+15] == 'i' && str[i+16] == 'n' && str[i+17] == 't'){
			cout << str[i+15] << str[i+16] << str[i+17] << "      |      " << "VAR_TYPE\n";
		}
		if (str[i+19] == 'z' && str[i+20] == ';'){
			cout << str[i+19] << "        |      " << "ID\n";
		} 
		if (str[i+20] == ';'){
			cout << str[i+20] << "        |      " << "ENDING_OP\n";
		}
		if (str[i+23] == 'i' && str[i+24] == 'n' && str[i+25] == 't'){
			cout << str[i+23] << str[i+24] << str[i+25] << "      |      " << "VAR_TYPE\n";
		}
		if (str[i+27]== 'c' && str[i+28] == ';'){
			cout << str[i+27] << "        |      " << "ID\n";
		}
		if (str[i+28] == ';'){
			cout << str[i+28] << "        |      " << "ENDING_OP\n";
		}
		if (str[i+31]== 'z' && str[i+32] == ' '){
			cout << str[i+31] << "        |      " << "ID\n";
		}
		if (str[i+33] == '='){
			cout << str[i+33] << "        |      " << "ASSIGN_OP\n";
		}
		if (isdigit(str[i+35]) && isdigit(str[i+36]) && isdigit(str[i+37])){
        	cout << str.at(i+35) << str.at(i+36) << str.at(i+37) << "      |      " << "NUMBER\n";
     	}
     	if (str[i+38] == '_'){
			cout << str[i+38] << "        |      " << "UNDERSCORE\n";
		}
		if (isdigit(str[i+39])){
        	cout << str.at(i+39) << "        |      " << "NUMBER\n";
     	}
     	if (str[i+40] == '_'){
			cout << str.at(i+40) << "        |      " << "UNDERSCORE\n";
		}
		if (str[i+41] == '-'){
			cout << str.at(i+41) << "        |      " << "MINUS\n";
		}
     	if (str[i+42] == '_'){
			cout << str.at(i+42) << "        |      " << "UNDERSCORE\n";
		}
		if (isdigit(str[i+43])){
        	cout << str.at(i+43) << "        |      " << "NUMBER\n";
     	}
     	if (str[i+44] == '_'){
			cout << str.at(i+44) << "        |      " << "UNDERSCORE\n";
		}
		if (str[i+45] == '*'){
			cout << str.at(i+45) << "        |      " << "STAR\n";
		}
		if (str[i+46] == '_'){
			cout << str.at(i+46) << "        |      " << "UNDERSCORE\n";
		}
		if (str[i+49] == 'c' && str[i+50] == 'i' && str[i+51] == 'n'){
			cout << str[i+49] << str[i+50] << str[i+51] << "      |      " << "INPUT_STREAM\n";
		}
		if (str[i+53] == '<' && str[i+54] == '<'){
			cout << str[i+53] << str[i+54] << "       |      " << "OUTPUT_STREAM\n";
		}
		if (str[i+56] == 'c' && str[i+57] == ';'){
			cout << str[i+56] <<  "        |      " << "ID\n";
		} 
		if (str[i+57] == ';'){
			cout << str[i+57] << "        |      " << "ENDING_OP\n";
		}
		if (str[i+60] == 'c' && str[i+61] == 'o' && str[i+62] == 'u' && str[i+63] == 't'){
			cout << str[i+60] << str[i+61] << str[i+62] << str[i+63] << "     |      " << "OUTPUT_STREAM\n";
		}
		if (str[i+65] == '<' && str[i+66] == '<'){
			cout << str[i+65] << str[i+66] << "       |      " << "OUTPUT_STREAM\n";
		}
		if (str[i+68]== 'z' && str[i+69] == ' '){
			cout << str[i+68] << "        |      " << "ID\n";
		}
		if (str[i+70] == '<' && str[i+71] == '<'){
			cout << str[i+70] << str[i+71] << "       |      " << "OUTPUT_STREAM\n";
		}
		if (str[i+73] == '"'){
			cout << str.at(i+73) << "        |      " << "QUOTATION\n";
		}
		if (str[i+75] == '"'){
			cout << str.at(i+75) << "        |      " << "QUOTATION\n";
		}
		if (str[i+77] == '<' && str[i+78] == '<'){
			cout << str[i+77] << str[i+78] << "       |      " << "OUTPUT_STREAM\n";
		}
		if (str[i+80]== 'c' && str[i+81] == ';'){
			cout << str[i+80] << "        |      " << "ID\n";
		}
		if (str[i+81] == ';'){
			cout << str[i+81] << "        |      " << "ENDING_OP\n";
		}
		if (str[i+83] == '}'){
			cout << str[i+83] << "        |      " << "CLOSING_BRACE\n";
		}
		cout << "________________________________________";
}

int main(int argc, char** argv){
	fstream newfile;
	string tp;
   newfile.open("file.txt",ios::in); //open a file to perform read operation using file object
   cout << "Lexical Analyzer\n"; 
   cout << "________________________________________\n";
   if (newfile.is_open()){ //checking whether the file is open
      while(getline(newfile, tp, '\t')){ //read data from file object and put it into string.
         cout << "\n" << tp << "\n"; //print the data of the string
      }
    newfile.clear();
    newfile.seekg(0, ios::end);
   	int file_size = newfile.tellg();
   	cout << "\nThe size of this file is " << file_size << " bytes.\n";
    newfile.close(); //close the file object.
   }
    int N = tp.length();
	TraverseFile(tp, N);
	
	
    fstream newfile2;
	string tp2;
   newfile2.open("file2.txt",ios::in); //open a file to perform read operation using file object
   if (newfile2.is_open()){ //checking whether the file is open
      while(getline(newfile2, tp2, '\t')){ //read data from file object and put it into string.
         cout << "\n\n" << tp2 << "\n"; //print the data of the string
      }
    newfile2.clear();
    newfile2.seekg(0, ios::end);
   	int file_size2 = newfile2.tellg();
   	cout << "\nThe size of this file is " << file_size2 << " bytes.\n";
    newfile2.close(); //close the file object.
   }
	int N2 = tp2.length();
	TraverseFile2(tp2, N2);

 
    fstream newfile3;
	string tp3;
   newfile3.open("file3.txt",ios::in); //open a file to perform read operation using file object
   if (newfile3.is_open()){ //checking whether the file is open
      while(getline(newfile3, tp3, '\t')){ //read data from file object and put it into string.
         cout << "\n\n" << tp3 << "\n"; //print the data of the string
      }
    newfile3.clear();
    newfile3.seekg(0, ios::end);
   	int file_size3 = newfile3.tellg();
   	cout << "\nThe size of this file is " << file_size3 << " bytes.\n";
    newfile3.close(); //close the file object.
   }
	int N3 = tp3.length();
	TraverseFile3(tp3, N3);
	getchar();
	
	return 0;	
}

