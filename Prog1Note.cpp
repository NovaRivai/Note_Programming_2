#include <iostream>
// VLP PlayGround!!!
using namespace std;

/*
    #include "(namafile headernya).h" // tao di main sama kayak library
/*

// int harus pake return di ahir
// void ga harus pake return di ahir

//h.file
/*
#ifndef (Namapake Capital + "_H")
#define SORT_H <-(contoh (Namapake Capital + "_H"))

void sort(int a, int b, int c); (function name)

#endif 
*/

void Pointer_Refrance(){
	
	int a = 10; 	//Deklarasi	
	int *ptr = &a;	//Refrensi
	
	cout << ptr << "\t" << &a << endl; // panggil adress
	
	cout << a << "\t" << *ptr << endl; // panggil itemnya
	
}

#include <cmath> // harus ada ini kalau pake pow
int loop(){
	
	int a = 10;
	int n;
	cin >> n;
	
	int count = 0;
	int hasil = 0;
	
	if(count == n){
		return hasil;
	}
	else{
	 hasil = pow(a,n); // pow(angka_bawah, pangkat)
	 loop();
	}
}

#include <cmath> // harus ada ini kalau pake pow
int sigma(int angka_bawah, int pangkat){
	
	angka_bawah;
	 pangkat;
	int count;
	cin >> angka_bawah >> pangkat;
	int hasil;
	
	if(count == pangkat){
		cout << hasil;
		return hasil;
	}
	else{
		count++;
		sigma(angka_bawah, count);
	}
	
	
}

#include <string> // harus ada ini kalau pake pow
int anagram(char a[],char b[]){
	int size1 = sizeof(a)/sizeof(a[0]);
	int size2 = sizeof(b)/sizeof(b[0]);
	
	int count = 0;
	if(size1 == size2){
		for(int i = 0; i < size2; i++){
			a[i];
			for(int o = 0; o < size2; o++){
				b[o];
				
				if(a[i] == b[o]){
					count++;
					break;
				}
				
			}
		}
	}
	if(count == size1){
		cout << "this is a anagram";
	}
	else{
		cout << "this is not an anagram";
	}
}

long calculateSumRecursive(int n){
    if (n <= 1) {
        return n;
    }
    return n + calculateSumRecursive(n - 1);
} // tanpa pake loop

void ulang_detect_angka(char a[]){
	// char a[] = "aaabbbcc";
	 char b[10]; // berapa banyak didalam Array
	
	int count = 1;
	int j;
	
	for(int i = 0; i < sizeof(a); i++){
		a[i];
		
		if(a[i] == a[i+1]){
			count++;
		}
		
		else{
		b[j++] = a[i];
		b[j++] = static_cast<char>(count + '0');
		count = 1;
		}
	}
	b[j] = '\0';
	
	cout << b;
}

int Buat_huruf_pertama_capital (char a[]){
	//char a[] = "bow";
	int size = sizeof(a)/sizeof(char);
	
	
	cout << "Before the Umwandlung: ";
	for(int i = 0; i < size; i++){
	cout << a[i];
	}
	
	cout << endl << "After the Umwandlung: ";
	for(int i = 0; i < size; i++){
		
		int o = 97;
	 for(int o = 97; o <= 122; o++){
	 	char alphabet[o] = {o};
		
		if(a[i] == '\0'){
			break;
			}
	
		if(a[i] == alphabet[o]){
			a[i] -= ('a'-'A');

			break;
		}
	
		
	 }
	 cout << a[i];
		
		
	}
	
	
	
	/*
	char c = 'g' ;
cout << endl << c << endl;
c -= ( 'a' - 'A');
cout << c;*/

	return 0;
}

#include <algorithm> // harus terdapat ini kalau mau menggunakan "Sort"
// note alphabet juga bisa
void sorting(char array[]){
	//int array[] = {2,4,5,1,1,2,3,9,2,3,4};
	cout << "Befor sorting ";
	
	for(int i = 0; i < sizeof(array)/sizeof(int); i++){
		cout << array[i];
	}
	
	cout << endl << "after sorting ";
	int size = sizeof(array)/sizeof(int);
	sort(array,array + size);
	
	for(int i = 0; i < sizeof(array)/sizeof(int); i++){
		cout << array[i];
	}			
}
 // contoh lain.
int sorting(char a[][4], int b){
	/* taro di int main(){
	char qwerty[][4] = {"abc", "cdb", "fxz"}; // kenapa harus [][] 2 brecket.
	int size2 = sizeof(qwerty)/sizeof(qwerty[0]); // kenapa harus dalemnya qwerty[0] bukan char??? 

	sorting(qwerty, size2);
	}
	*/
	cout << "before sorting: ";
	for(int i = 0; i < b; i++){
		cout << a[i] << " ";
	}
	
	cout << endl << "after sorting: ";
	sort(a,a +b);
	for(int i = 0; i < b; i++){
		cout << a[i] << " ";
	}
	
	return 0; 
}
void sort(int &a, int &b, int &c) { //using swap
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
}

void unique(char a[], int b){
	/* taro di int main(){
	char name[] = "nova";
	int size = sizeof(name)/sizeof(char);
	
	unique(name, size);
	}*/
	
	bool isUnique = true;
	
	for(int i = 0; i < b - 1; i++){
		
		for(int o = i + 1; o < b; o++){
		
			if(a[i] == a[o]){
				isUnique = false;
				break;
			}	
		}
		
		if (!isUnique) {
            break;
        }
	}
	
if (isUnique) {
        cout << "This name is unique." << endl;
    } else {
        cout << "This name is not unique." << endl;
    }

}

void intersection(/*const vector<int>& a, const vector<int>& b */){
	
	
	/* taro di int main() {
    vector<int> vector1 = {2, 3, 4, 5, 6};
    vector<int> vector2 = {2, 9, 8, 4, 6};

    intersection(vector1, vector2);

    return 0;
}

    vector<int> newvec;

    for (int i = 0; i < a.size(); i++) {

        for (int o = 0; o < b.size(); o++) {

            if (a[i] == b[o]) {
                cout << a[i] << " ";
            }
        }
    } */
	
} 

#include <string> // butuh ini?

void encrypt(string a, int size){
	/*
	int main(){
	string massage = "Hallo world";
	int size = massage.length();
	
	encrypt(massage,size);
	
}	*/
	
	for(int i = 0; i < size; i++){
		char now = a[i];
		if(now == ' '){
			now = ' ';
		}else
		now = a[i] + 2;
		cout << now; 	
	}
}

#include <string>
#include <iomanip>
int ascii(string a){
	
	/*	int main(){
	string abc = "Have Fun";
	
	ascii(abc);
	cout << abc;	
}
	*/
	int size = a.length();
	int i = 0;
	
	cout << a[i] << endl;
	
	i++;
	return ascii(a);
}

#include <cmath>
int circle_formel(int r){// yang dimasukin tergantung dari soal.
	// r = radius
	// d = diameter
	
	double pi = 3.14;
	
	int luas_lingkaran = pi * r * r; //= d*d/4 *pi;
	int diameter = r * 2;
	
}

#include <iostream>
#include <string>
#include <algorithm> // untuk transform

using namespace std;

int String4_string(){
    string digitStrings[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	string s1("Hallo World"); 	// s1 = "Hallo world"
	string s2(s1); 				// copying s1
	string s3(s1,5); 			// copying form s1 just 5 char
	string s4(5,'b');			// == bbbbb
	
//----------------------------------------------------------------------------------------------------------------------//	
	string name; 
	//getline(cin, name, ' '); 	// read until SPACE

//----------------------------------------------------------------------------------------------------------------------//
	
	string abc = "Hallo ";
	string cba("World");
	string def = abc+ cba;
	cout << def << endl;

//----------------------------------------------------------------------------------------------------------------------//
	
	int size = abc.length();
	cout << size << endl;

	def.insert(6, "to the "); 	// Using insert(n, s) to insert a string at a specific position
	cout << def << endl;
	
	def.erase(13,6) ;				// Using erase(p, n) to remove characters starting from a specific position
	cout << def << endl;
	
	int pos = def.find("to the");
	cout << pos << endl;

	def.erase(6,11);
	cout << def << endl;
	
	//---------------------------------------------------------------------------------------------------------------//
	
	string str = "Hello";
	const char* cstr = str.c_str();
	cout << "C-style string: " << cstr << endl << endl;

	
	// .substr(from,until(perchar))
	str = "Hello, world!";
	string substr = str.substr(7);
	cout << "Substring: " << substr << endl <<endl;
	
	str = "Hello, world!";
	substr = str.substr(7, 5);
	cout << "Substring: " << substr << endl << endl;


	// .replace(from(pos),until(perchar), "word")
	str = "Hello, world!";
	str.replace(7, 5,"everyone");
	cout << "Modified string: " << str << endl << endl;
	
	// 
	int num = 42;
	to_string(num);
	//string a = to_string(int num); // old compiler thats why it didnt work
	//cout << "String representation of " << num << ": " << a << endl;

	string text = "upper and lower";
	transform(text.begin(), text.end(), text.begin(), ::toupper);
	cout << "Uppercase text: " << text << endl;


//------------------------ other fungtion  for String.

	//Convert to Uppercase/Lowercase:
	string str = "Hello World";
	transform(str.begin(), str.end(), str.begin(), ::toupper); // Convert to uppercase
	// Output: "HELLO WORLD"
	
	transform(str.begin(), str.end(), str.begin(), ::tolower); // Convert to lowercase
	// Output: "hello world"


	//Trim Whitespace
	string str = "   Hello World   ";
	str.erase(0, str.find_first_not_of(" ")); // Trim leading whitespace
	str.erase(str.find_last_not_of(" ") + 1); // Trim trailing whitespace
	// Output: "Hello World"


	//Substring Extraction:
	string str = "Hello World";
	string substr = str.substr(6, 5); // Extract substring from index 6 with length 5
	// Output: "World"
	
	
	//Replace Substrings:
	//#include <regex> butuh bib ini
	string str = "Hello World";
	string new_str = regex_replace(str, regex("World"), "Universe");
	// Output: "Hello Universe"

	
	//Concatenate Strings
	string str1 = "Hello";
	string str2 = " World";
	string result = str1 + str2;
	// Output: "Hello World"
	
	
	//Reverse String:
	string str = "Hello World";
	reverse(str.begin(), str.end());
	// Output: "dlroW olleH"
	
	
	//Tokenization
	string str = "Hello,World,How,Are,You";
	vector<string> tokens;
	stringstream ss(str);
	string token;
	while (getline(ss, token, ',')) {
	    tokens.push_back(token);
	}
	// tokens: {"Hello", "World", "How", "Are", "You"}

	
	
	//Convert to Numeric:
	string str = "12345";
	int num = stoi(str); // Convert to integer
	float fnum = stof(str); // Convert to float


	
	return 0;
	
	//finding a word in an string: 
	string a = "_.;.aasd.,: lasd9=12?";
	string b = "-.:;,123456789?=_";
	int pos = a.find_first_of(b);

	int i = 0; 
	while(pos != string::npos){
		
		a.erase(pos,1);
		pos = a.find_first_of(b);
		i++;
	}
	cout << a;
}

int string3_vector(){
	vector<int> myvector; // buat vector
	
	myvector.push_back(10);
	myvector.push_back(100);
	myvector.push_back(1000);
	
	for(int i= 0; i < myvector.size(); i++){o
	    cout << myvector[i] << " ";
	}
	cout << endl;
	
	// Remove the last element using pop_back()
	myvector.pop_back(); 
	for(int i= 0;i < myvector.size(); i++){
	    cout << myvector[i] << " ";
	}
	cout << endl << myvector.back();
	myvector.clear();
	
	//cara lain untuk print yang ada di Vector
	/*for(int num : myvector){
		cout << num << " ";
	}*/
	
	
	//resize: Resizes the vector to contain a specified number of elements.
	vector<int> v = {1, 2, 3};
	v.resize(5);
	// v: {1, 2, 3, 0, 0}
	
	
	// check the Vector if its empty
	vector<int> v = {1, 2, 3};
	bool isEmpty = v.empty();
	// isEmpty: false
	
	//swap
	vector<int> v = {1, 2, 3};
	bool isEmpty = v.empty();
	// isEmpty: false
}

int string2_array(){
    array<int,5> myarray = {1,2,3,4,5};
    // int myarray[5] == array<int,5> myarray
    
    cout << "point at the second Array: " << myarray.at(2);
    // (nama).at(i) == (nama)[i]
    
    cout << "\nshowing size of array: " << myarray.size();
    // (name).size() == sizeof(int)/sizeof(name)
    
    cout << "\nshowing first element: " << myarray.front();
    // (name).front == myarray[0]
    cout << "\nshowing last element: " << myarray.back();
    
    /*for(int i = 0;i < 5; i++){
        cout << myarray[i];
    }*/
    
    //----------------- something else
    
    
    //memset: Sets the value of each element in an array to a specified value.
    int arr[5];
	memset(arr, 0, sizeof(arr)); // Set all elements to 0

	
	//memcpy: Copies elements from one array to another.
	int arr1[] = {1, 2, 3};
	int arr2[3];
	memcpy(arr2, arr1, sizeof(arr1)); // Copy elements from arr1 to arr2
	// arr2: {1, 2, 3}
	
	
	//std::sort: Sorts the elements of an array.
	int arr[] = {3, 1, 4, 2, 5};
	std::sort(std::begin(arr), std::end(arr));
	sort(arr,arr+size); // this also works
	// arr: {1, 2, 3, 4, 5}


	//Reverse: Reverses the order of elements in an array.
	int arr[] = {1, 2, 3, 4, 5};
	std::reverse(std::begin(arr), std::end(arr));
	// arr: {5, 4, 3, 2, 1}

	
	//count: Counts the occurrences of a value in an array.
	int arr[] = {1, 2, 3, 2, 4, 2, 5};
	int count = std::count(std::begin(arr), std::end(arr), 2);
	// count: 3
	
	//find: Searches for a value in an array.
	int arr[] = {1, 2, 3, 4, 5};
	auto it = std::find(std::begin(arr), std::end(arr), 3);
	if (it != std::end(arr)) {
	    // Value found
	}
	
	//accumulate: Computes the sum of elements in an array.
	int arr[] = {1, 2, 3, 4, 5};
	int sum = std::accumulate(std::begin(arr), std::end(arr), 0);
	// sum: 15
	
	
	//min_element/std::max_element: Finds the minimum/maximum element in an array.
	int arr[] = {3, 1, 4, 2, 5};
	auto minElement = std::min_element(std::begin(arr), std::end(arr));
	auto maxElement = std::max_element(std::begin(arr), std::end(arr));


}

int string1(){
		// char using ' ' 		= contain one character
		// string using " " 	= can contain a lot of char
		// c-array using []		= can contain a lot of char and ended with \0
	char c = 'c'; 										// char 
	const char *string = "const + char + * = string";	// string / c-string
	char arr[] = "c-array/string";						// c-array
	
	
	char array[20];
	cin.getline(array,20);	//cin.getline == cin >> for c-string and c-aaray 
	
	char paste[20];
	strcpy(paste,array); 	 // strcpy(paste,copy) == untuk copy.
	strncpy(paste,array, 3); // copy just 3 char from the copy
	strcat(paste ,string);	 // Append "paste"to String
	int result = strcmp(paste,array);	 //Compare "Paste" with "array" biasanya pake if selanjutnyya untuk check kalau sama aatau enggak 	
	cout << "the Result is "<< result;
	int length = strlen(paste); // length of the paste string
	 
	return 0;
}


sstream() // bahas tentang streamstring
{
    // Example 1: Using stringstream to extract and parse values
    stringstream ss("123 456 789"); // Initialize with a string
    int num1, num2, num3;

    ss >> num1 >> num2 >> num3; // Extract integers from the stream

    cout << "Extracted values: " << num1 << ", " << num2 << ", " << num3 << endl;

    // Example 2: Using stringstream to format and insert values into a string
    stringstream ss2;
    ss2 << "The numbers are: " << num1 << ", " << num2 << ", " << num3; // Insert values into the stream

    string result = ss2.str(); // Convert stream to string
    cout << "Formatted string: " << result << endl;

    // Example 3: Using stringstream to parse a string with mixed data types
    string input = "Name: John Age: 30 Height: 5.9";
    string name;
    int age;
    double height;

    stringstream ss3(input);
    string temp; // Temporary variable to store "Name:" and "Age:" labels
    ss3 >> temp >> name >> temp >> age >> temp >> height;

    cout << "Parsed values - Name: " << name << ", Age: " << age << ", Height: " << height << endl;

    return 0;
} 

#include <iomanip>
using namespace std;
int cpy(int s[], int& size){
	int new_size = size + 1;
	s[new_size] = 9;
	for(int i = 0; i < new_size; i++){
		cout << s[i] << " ";
	}
}	
int vector_extra(){
	int arr[] = {6,2,3,4,5};
	int *ptr = &arr[0]; // pointed to a spesifict place of number in the array
	//ptr = arr;  // pointed to the address
	int size = sizeof(arr)/sizeof(int);
	for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
		cout << arr[i] << " ";
	}
	
	cout << endl << *(ptr + 3); // pointed to [0 + 3] = [3] = 4
	cout << endl << *ptr + 9 << endl; // the pointed number (6) will be add by 9 so its going to be 15
	cout << cpy(arr, size) << endl;
	
	int *ptr_cpy = arr; 		// copy semua Array yang ada di arr[] 		
	
	
	
	/*double arr[3][2] = {{3,1},{9,4},{7,6}};
	
	for(int i = 0; i < 3;i++){
		for(int j = 0; j < 2; j++){
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}*/
}// sama yang atas satu kesatuan.

// finding a MIn and MAx in array
#include <algorithm> // for std::max_element
int Max_MIn() {
    // Example array
    int arr[] = {3, 5, 7, 2, 90, -1, 4, 10, 20};
    int size = sizeof(arr)/sizeof(arr[0]);

    // Finding the maximum element in the array
    int* maxElement = max_element(arr, arr + size);
    int* minElement = min_element(arr, arr + size);


    // Outputting the maximum element
    cout << "The maximum element in the array is: " << *maxElement << endl;
    cout << "The minimum element in the array is: " << *minElement << endl;
    

    return 0;
}


void reverseWords_each_vector(vector<string> &words) {
    cout << "\nReversed words are: \n";
    for (string &word : words) {
        reverse(word.begin(), word.end());
        cout << word << endl;
    }
}
void reverseWords_each_word_in_vector(vector<string>& a){
	cout << "\nrevers of each Vector are: \n";
	for(int i = 0; i < a.size(); i++){
		reverse(a[i].begin(),a[i].end());
		cout << a[i] << endl;
	}
} // sama kayak yang seblumnya


// ubah dari Hex ke oct atau kebalikan
#include <iomanip>
void hex_and_oct(){
    int n = 50;
    cout << "Octal\tHexadecimal" << endl;
    
    for(int i = 0; i <= 50; i++){
        cout << fixed << oct << n << "\t" << fixed << hex << n << endl;
        n++;
    }
}

void print_pascal(int row_num){
 
    // Loop to print each row
    for(int n = 1; n <= row_num; n++){
 
        // Loop to print spaces for triangular display
        for(int r = 1; r < row_num-n+1; r++)
            cout<<"  ";
 
        // Loop to print values using the Combinations formula
        int val = 1;
        for(int r = 1; r <= n; r++){
            cout<<val<<"   ";
             
            val = val * (n - r)/r;
        }
        cout<<endl;
    }
}


int findOccurrences(const char* text, const char* word) {
    string a = text;
    string b = word;
    int count = 0;
    size_t pos = 0;
    
    // Use find method correctly in a loop to find all occurrences
    while ((pos = a.find(b, pos)) != string::npos) {
        count++;
        pos += b.length(); // Move to the next position after the found word
    }

    return count;
}

double averageLineLength(const char* text) {
    // string a = text;
    // double avr = a.size()/countLines(text);
    
    // return avr;
    
    int i = 0; 
    double line = countLines(text);
    double total = 0; 
    while(text[i] != '\0'){
        if(text[i] == '\n'){
            total +=i - total;
        }
        i++;
    }
    if(text[i] == '\0'){
        total += i -total -2;
    }
    
    return  total/line;
}


// 3 Program dibawah adalah untuk pergantian text
#include "substitute.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main() {
    // Test Teilaufgabe 1
    char text[] ="# Introduction\n# Main Part\n# Conclusion";
    substituteChar(text, '1');
    substituteChar(text, '2');
    substituteChar(text, '3');
    cout << text <<endl;

    // Test Teilaufgabe 2
    cout << endl;    
    char text1[1000] = "The # robot is in the #.";
    char text2[1000];
    substituteWord(text1, text2, "rusty");
    substituteWord(text2, text1, "shed");
    cout << text1 << endl; 
}
void substituteChar(char* text, char c) {
    	
    	
	int size = sizeof(text);
	
	int i = 0; 
	while(text[i] != '\0'){
		if(text[i] == '#'){
			text[i] = c;
			break;
		}
		i++;
	}

    
    // Program yang lama (dibawah)
   //string a = text;
   /*for(int i = 0; i < a.size();i++){
       if(text[i] == '#'){
           text[i] = c;
          break;
       }
   }*/
   /*
   int i = 0; 
   while(text[i] != '\0'){
       if(text[i] == '#'){
           text[i] = c;
           break;
       }
       i++;
   }*/
   
}
void substituteWord(const char* text, char* targetText, const char* word) {
    
    int i = 0; 
	int j = 0;
	int a = 0;
	bool r = true;
	
	while(text[i] != '\0'){
		
		if(text[i] == '#' && r){
			j = 0;
			while(word[j] != '\0'){
				targetText[a] = word[j];
				j++;
				a++;
			}
			
			r = false;
		}
		else{
			targetText[a] = text[i];
			a++;
		}
		i++;
	}
    
    // Program yang lama (dibawah)
  /*string a = text;
  string c = word;
  a.replace(a.find('#'),a.find("")+1,word);
  for(int i = 0; i < a.size(); i++){
      targetText[i] = a[i]; 
  }*/
  
  /*int count = 0;
  for(int i = 0; i < strlen(text); i++){
      if(text[i] == '#'){
          for(int j = 0;  j < strlen(word); j++){
            targetText[i + j] = word[j];
            count++;
          }
        targetText[i + count] = ' ';
        }
        else
        
      targetText[i + count] = text[i]; 
  }*/
  /*
   int textLen = strlen(text);
    int wordLen = strlen(word);
    int targetIndex = 0; // Index for targetText
    bool replaced = false; // Flag to check if the first '#' is replaced

    for (int i = 0; i < textLen; i++) {
        if (text[i] == '#' && !replaced) {
            // Replace the first '#' with the entire word
            for (int j = 0; j < wordLen; j++) {
                targetText[targetIndex++] = word[j];
            }
            replaced = true; // Set the flag to true after the first replacement
        } else {
            // Copy the character from text to targetText
            targetText[targetIndex++] = text[i];
        }
    }
    // Null terminate the targetText string
    targetText[targetIndex] = '\0';
    */
  
} 



// C++ program to demonstrate 
// the use of rand() to get value 
// in a range of lb to ub 
#include <cstdlib> 
#include <iostream> 
using namespace std; 

int random() // cuma ngasih tau gimana cara pake rand 
{ 
	int lb = 20, ub = 25; 
	// This program will create some sequence of random 
	// numbers on every program run within range lb to ub 
	for (int i = 0; i < 5; i++) 
		cout << (rand() % (ub - lb + 1)) + lb << " "; 

	return 0; 
	
	// kalau mau per satuan
	ymax = 100; 
	xmax = 10000;
	x = rand() % (xmax + 1);
    y = rand() % (ymax + 1);
} 

#include <cstdlib> 
#include <ctime> 
#include <iostream>

using namespace std;

int random2() 
{ 
    srand((unsigned)time(0)); 
    int i;
    i = (rand()%6)+1; 
    cout << i << "\n"; 
}

#include <iostream>
#include <string>

using namespace std; 

const_char*(){ // about const char*

	//Length of the String "strlen"
	#include <cstring>
	const char* str = "Hello, World!";
	size_t length = strlen(str); // length = 13
	
	cout << "length: " << length << endl;
	
	//Copying Strings "strcpy"
	char destination[20];
	const char* source = "Hello";
	strcpy(destination, source); // destination now contains "Hello"
	
	cout << destination;

	//Concatenating Strings "strcat"
	char dest[20] = "Hello";
	const char* src = " World";
	strcat(dest, src); // dest now contains "Hello World"
	
	//Comparing Strings "strcmp"
	const char* str1 = "Hello";
	const char* str2 = "World";
	int result = strcmp(str1, str2); // result < 0 because "Hello" < "World"

	//Finding Substrings "strstr"
	const char* str = "Hello, World!";
	const char* substr = "World";
	const char* found = strstr(str, substr); // found points to "World!"
	
	// Finding a Character "strchr"
	const char* str = "Hello, World!";
	char ch = 'W';
	const char* found = strchr(str, ch); // found points to "World!"
	
	// Replacing Characters
	void replaceChar(char* str, char oldChar, char newChar) {
	    while ((str = strchr(str, oldChar)) != nullptr) {
	        *str = newChar;
    	}	
	}
	char str[] = "Hello, World!";
	replaceChar(str, 'o', '0'); // str becomes "Hell0, W0rld!"
	
	
	
	// String Search
    const char* found = strstr(str1, "world");
    if (found) {
        cout << "\"world\" found in str1 at position: " << (found - str1) << endl;
    } else {
        cout << "\"world\" not found in str1" << endl;
    }

    // Tokenization
    char text[] = "Hello, world! Welcome to C++.";
    char* token = strtok(text, " ,.!"); // Split on space, comma, period, exclamation mark
    while (token) {
        cout << "Token: " << token << endl;
        token = strtok(NULL, " ,.!");
    }
	
}


// char stuff

int char_1(){
	// Copy "strcpy(to where, from where)"
	char dest[20];
	const char* src = "Hello";
	strcpy(dest, src);
	
	// more specific (like before)
	char dest[20];
	const char* src = "Hello";
	strncpy(dest, src, 3); // dest will contain "Hel"
	
	
	// Contatenate "strcat(to where, from where)"
	char dest[20] = "Hello ";
	const char* src = "World";
	strcat(dest, src); // dest will contain "Hello World"
	
	// more specific (like before)
	char dest[20] = "Hello ";
	const char* src = "World";
	strncat(dest, src, 3); // dest will contain "Hello Wor"
	
	
	//compare "strcmp(a,b)"
	const char* str1 = "Hello";
	const char* str2 = "World";
	int result = strcmp(str1, str2); // result will be negative since 'H' < 'W'
	
	//strncmp: Compares a specified number of characters from two C-strings.
	const char* str1 = "Hello";
	const char* str2 = "Wolld";
	int result = strncmp(str1, str2, 3); // result will be 0 as the first 3 characters are the same
	
	
	//strchr: Finds the first occurrence of a character in a C-string.
	const char* str = "Hello World";
	const char* p = strchr(str, 'o'); // p will point to the first 'o' in "Hello World"	
	
	//strrchr: Finds the last occurrence of a character in a C-string.
	const char* str = "Hello World";
	const char* p = strrchr(str, 'o'); // p will point to the last 'o' in "Hello World"


	// strstr: Finds the first occurrence of a substring in a C-string.
	const char* str = "Hello World";
	const char* p = strstr(str, "World"); // p will point to "World"


	//strlen: Returns the length of a C-string.
	const char* str = "Hello";
	size_t length = strlen(str); // length will be 5
	
	//strspn: Returns the length of the initial segment of a C-string which consists entirely of characters in another C-string.
	const char* str = "abc123";
	size_t length = strspn(str, "abc"); // length will be 3


	//strcspn: Returns the length of the initial segment of a C-string which consists of characters not in another C-string.
	const char* str = "abc123";
	size_t length = strcspn(str, "123"); // length will be 3
	
	
	//strtok: Tokenizes a C-string (splits it into a sequence of tokens).
	char str[] = "Hello, World!";
	char* token = strtok(str, ", ");
	while (token != nullptr) {
	    printf("%s\n", token);
	    token = strtok(nullptr, ", ");
	}
	
	
	//strdup: Duplicates a C-string by allocating memory for the new string
	const char* str = "Hello";
	char* copy = strdup(str); // copy will be a newly allocated copy of str
	
	
	//strpbrk: Finds the first occurrence of any character from one C-string in another.
	const char* str1 = "abcdef";
	const char* str2 = "xyd";
	const char* p = strpbrk(str1, str2); // p will point to 'd' in "abcdef"


	
}

//extra find word in the const char*
int countWordOccurrences(const char* text, const char* word){
	int count = 0; 
	const char* a = text;
	
	while(a = strstr(a,word)){
		count++;
		a += strlen(word);
	}
	
	return count;
}


char* reverseWords(const char* input){
	int size = strlen(input)/2;
	int size2 = strlen(input);
	
	char* reversed = new char[strlen(input)];
	
	int j = 0;
	for(int i = size2-1; i >= 0;--i){
		reversed[j++] = input[i];
	}
	
	return reversed;
}

void Vetor_terpisah_hitung (string a) // buat katanya terpisah, masukin Vector lain, itung berapa kali katnya yang di ulang;
{
	for(int i = 0; i <= a.size();i++){
		if(a[i] == ',' ||a[i] == '.' ||a[i] == '!' ){
			a.replace(i,1,"");
		}
	}
	
	vector<string> b;
	string word;
	stringstream ss(a);
	
	vector<string> c;
	
	while (getline(ss, word, ' ')) {
        // Add each token to the vector
        b.push_back(word);
    }
    
    for(int i = 0; i < b.size(); i++){
    	word = b[i];
    	
    	if(find(c.begin(),c.end(),word) == c.end()){
    		c.push_back(b[i]);
		}
    	
	}
	// count
	
	for(int i = 0; i < c.size(); i++){
		int count = 0;
		for(int j = 0; j < b.size();j++){
			if(c[i] == b[j]){
				count++;
			}
		}
		cout << c[i] << " : " << count << endl;
		
	}
	
}

void Vector_terpisah_hitung(string a)// sama kayak yang sebelumnya
{
/*
#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(){
    string text = "Hello, world! Hello C++ world. Welcome to the world of C++.";
    */

    // Remove punctuation marks
    for(int i = 0; i < text.size(); i++){
        if(text[i] == ',' || text[i] == '.' || text[i] == '!'){
            text[i] = ' '; // Replace punctuation with space
        }
    }

    unordered_map<string, int> wordCount;
    string word;
    stringstream ss(text);

    // Split the string into words and count occurrences
    while (ss >> word) {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        wordCount[word]++;
    }

    // Print the word frequencies
    for(const auto& pair : wordCount) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}

}

void removeUnnecessaryChars(string& text, const string& charsToRemove) {
    /*
    int main() {
    string input = "hallo word !!§this is an test!=?§";
    string unwantedChars = "!=?§";

    removeUnnecessaryChars(input, unwantedChars);

    cout << "Processed string: " << input << endl;

    return 0;
}
    */
    size_t pos = 0;
    
    // Loop through each character in the string
    while ((pos = text.find_first_of(charsToRemove, pos)) != string::npos) {
        text.erase(pos, 1); // Remove the character found
    }
}

void removeUnwantedChars(string& text) {
    
    /*
    int main() {
    string input = "hallo word %&/(this is an test!=?§";

    removeUnwantedChars(input);

    cout << "Processed string: " << input << endl;

    return 0;
}
    */
    const string allowedChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ";

    string result;
    for (char c : text) {
        if (allowedChars.find(c) != string::npos) {
            result += c;
        }
    }
    text = result;
}


//exam task 4 23/24

#include "average.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double averageReadings(vector<int> readings) {
  // add implementation here
  if(readings.size() == 0){
      return 0; 
  }
  double sum = 0; 
  for(int i = 0; i < readings.size(); i++){
      sum += readings[i];
  }
  double av = sum/readings.size();
  return av;
}

double standardDeviation(vector<int> readings, double mean) {
  // add implementation here
  if (readings.size() < 2) {
        return 0;
    }
    double sumSquaredDiffs = 0;
    for (int reading : readings) {
        double diff = reading - mean;
        sumSquaredDiffs += diff * diff;
    }
    return sqrt(sumSquaredDiffs / (readings.size() - 1));
}
  

char classify(int reading, double mean, double stddev) {
  //classes higher, lower, inlier
   if (reading > mean + stddev) {
        return 'h'; // higher
    } else if (reading < mean - stddev) {
        return 'l'; // lower
    } else {
        return 'i'; // inlier
    }
}

void printClassification(vector<int> data, double mean, double stddev) {
  // add implemention here
  int inliers = 0;
    int higher = 0;
    int lower = 0;

    for (int reading : data) {
        char classification = classify(reading, mean, stddev);
        if (classification == 'h') {
            higher++;
        } else if (classification == 'l') {
            lower++;
        } else {
            inliers++;
        }
    }

    cout << "\nThe classification results are: " << endl;
    cout << inliers << " inliers, " << higher << " above threshold, " << lower << " below threshold" << endl;

}

// task 5
#include "palindrome.h"
#include <cstring>
#include <iostream>
using namespace std; 

const char* findPointerToLastChar(const char* input) {
    if (input == nullptr || *input == '\0') {
        return nullptr;
    }
    const char* ptr = input;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - 1;  // Return the pointer to the last character
    
}

bool palindromeTest(const char* start, const char* end) {
    int i = 0;
    
    if (tolower(*start) != tolower(*end)) {
        return false;
    }
    
     if(start[i] == end[i]){
         return true;
     }
     else{
         return false;
     }
}

bool palindromeTest(const char* text) {
    if (text == nullptr || *text == '\0') {
        return true;
    }
    const char* end = findPointerToLastChar(text);
    return palindromeTest(text, end);
}


//task new 24
//task 1: 
int main(){
	
cout << setw(6) << "Number" << setw(8) << "Square" << setw(12) << "3-divisible" << endl;
	
	for(int i = 5; i < 55; i+=5){
		cout << i << "\t" << fixed << hex << i << "\t" << ((i%2 == 0)? "Even":"Odd") << "\n";
	} 
}  

// task 2: recursive
int population(int year){
	if(year == 0){
		return 2;
	}
	else if (year < 0){
		return 0;
	}
	int pop = 2;
	for(int i = 0; i < year; i++){
		pop = pop/2 + pop;
	}
	
	return pop;
}

int population_recursive(int year){
	if(year == 0) return 2; 
	if(year < 0) return 0;
	
	
	int prev_year = population_recursive(year -1);
	int off = prev_year/2;
	
	return off + prev_year;
}


// task 3: palindrome
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

void createPalindrome(char* palindrome, int length) {
    if (length <= 0) {
        palindrome[0] = '\0';
        return;
    }
    for (int i = 0; i < length / 2; ++i) {
        char c = 'a' + rand() % 26;
        palindrome[i] = c;
        palindrome[length - i - 1] = c;
    }
    if (length % 2 != 0) {
        palindrome[length / 2] = 'a' + rand() % 26;
    }
    palindrome[length] = '\0';
}
const char* checkCharacterRepetitions(const char* text, int count) {
    int len = strlen(text);
    for (int i = 0; i <= len - count; ++i) {
        bool match = true;
        for (int j = 1; j < count; ++j) {
            if (text[i] != text[i + j]) {
                match = false;
                break;
            }
        }
        if (match) return &text[i];
    }
    return nullptr;
}

int countMaxCharacterRepetitions(const char* text) {
    int max_count = 1;
    int current_count = 1;
    for (int i = 1; text[i] != '\0'; ++i) {
        if (text[i] == text[i - 1]) {
            ++current_count;
        } else {
            if (current_count > max_count) {
                max_count = current_count;
            }
            current_count = 1;
        }
    }
    if (current_count > max_count) {
        max_count = current_count;
    }
    return max_count;
}

int main() {
    srand(time(0));
    char palindrome[11];
    createPalindrome(palindrome, 10);
    std::cout << "Random Palindrome (10 chars): " << palindrome << std::endl;
    createPalindrome(palindrome, 5);
    std::cout << "Random Palindrome (5 chars): " << palindrome << std::endl;
    return 0;
}

// exam 23
// task 1: ASCII
 #include <iostream>
 #include <iomanip>
 
 using namespace std;
 int main(){
     
    char d = '0';
    int c = static_cast<int>(d);
    
    cout << "Char\tCode" << endl;
    
    for(int i = 0;  i <= 9; i++){
        cout << i << "\t" << c << endl;
        c++;
    }
    
    return 0;
 }
// task 2: Recursion
int trigonIterative(int n) {
  // your code here
 /* int balls = 0;
  
  for(int i = 0; i <= n; i++){
      balls += i;
  }
  
  return balls;
  */
  
  int sum = 0; 
  
  for(int i = 0; i <= n;  i++){
      sum += i;
  }
  return sum;
}

int trigonRecursive(int n) {
  // your code heres
  /*
 if (n <= 1) {
        return n;
    }
    return n + trigonRecursive(n - 1); */
    
    if(n <= 1){
        return  n;
    }
    return n + trigonRecursive(n-1);
}

void trigonStripes(int n, int& blue, int& yellow) {
  // your code here
  blue = 0; 
  yellow = 0;
  
//   for(int i = 0; i < n; i=i+2){
//       blue +=i;

//   }
  
//   for(int i = 1; i <= n-1; i=i+2){
//       yellow +=i;

//   }

   /* for(int i = 0; i <= n; i++){
        if(i%2 == 0){
            yellow+=i;
        }
        else
        blue +=i;
    }*/
    
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            yellow += i;
        }
        else
        blue += i;
    }
    
    
  
}

//task 5: RMS
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void printValues(const double * const numbers, int size) {
    for(int i = 0; i < size; i++){
        cout<<i+1<<setw(10);
        cout <<  fixed << setprecision(2) << numbers[i]  << endl;
    }
}

void readValues(double* const groundTruth) {
    
  double input = 0;
//   double size 
  for(int i = 0; i <5 ; i++){
      cin >> input;
      if(input <= 0){
          cout << "Error Text" << endl;
          i--;
      }else{
          groundTruth[i] = input;
      }
  }
    
}

void computeNoise(const double * const groundTruth, double * const noisyData, int size) {
    
    for(int i = 0; i < size; i++){
        noisyData[i] += groundTruth[i];
    }
    
}

double computeRMSE(const double * const groundTruth, const double * const noisyData, int size) {
//   // add implementation here
    double arr;
    for(int i = 0; i < size; i++){
        double a = groundTruth[i] - noisyData[i];
        arr += pow(a,2);
    }
    double b = 1/size *arr;
    sqrt(b);
}
//

// task 2: pascalsegitiga
void pascalTriangle(int num){
    
      for(int n = 1; n <= num; n++){
 
        // Loop to print spaces for triangular display
            for(int r = 1; r < num-n+1; r++)
                cout<<"  ";
     
            // Loop to print values using the Combinations formula
            int val = 1;
                for(int r = 1; r <= n; r++){
                    cout<<val<<"   ";
                     
                    val = val * (n - r)/r;
                }
            cout<<endl;
        }
    
}

int linearSearch(const int array[], int size){
    int max = 0; 
    if(size <= 0){
        return 0; 
    }
    for(int i = 0; i <= size; i++){
        if(max <= array[i]){
            max = array[i];
        }
    }
    
    return max;
}

// task 3: Task Anylisis
int findOccurrences(const char* text, const char c) {
    int count = 0; 
    int i = 0; 
    while(text[i] != '\0'){
        
        if(text[i] == c){
            count++;
        }
        i++;
    }
    if(count == 0){
        return -1;
    }
    
    return count;
}


double averageLineLength(const char* text) {
    double size = strlen(text);
    int i = 0; 
    double line = 1; 
    double noneed = 0; 
    
    while(text[i] != '\0'){
        
        if(text[i] == '.' || text[i] == ',' || text[i] == ':'){
            noneed++;
        }
        
        if(text[i] == '\n'){
            line++;
            
        }
        i++;
    }
    
    return (i-line*2 - noneed)/line;
}
    

double avgASCII(const char* text) {
    double sum = 0; 
    int i = 0; 
    char a; 
    while(text[i] == '\0'){
        a = text[i]; 
        sum += a;
        
        // cout << a;
        i++;
        
    }
    
    return sum;

}



//swaping normal in an Array
//sorting normal in Array 
#include <iostream>

using namespace std;

int main() {
	int a[] = {9,8,7,6,5,4,3,2,1};
	int c = 4;
	int size = sizeof(a)/sizeof(int);
	cout << "before sorting: ";
	for(int i = 0; i < size;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	
	
	//manual swaping in array 
	//sorting normal in Array 
	int swap = 0; 
	cout << "after sorting: ";
	for(int i = 0; i < size/2;i++){
		if((a[i] > c) && (a[size-1-i] < c)){
			swap = a[size-1-i];
			a[size-1-i] = a[i];
			a[i] = swap; 
		}
		
		if(a[size-1-i] == c){
			swap = a[size-1-i];
			a[size-1-i] = a[i];
			a[i] = swap; 	
			}
		
	}
	for(int i = 0; i < size; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

//recursive sorting 2d
#include <iostream>
#include <algorithm> // for std::sort

using namespace std;

void sortRowRecursive(int* row, int cols, int start = 0) {
    // Base case: if the entire row is sorted, return
    if (start >= cols - 1) return;

    // Find the minimum element in the unsorted part and swap it with the current element
    int minIndex = start;
    for (int i = start + 1; i < cols; i++) {
        if (row[i] < row[minIndex]) {
            minIndex = i;
        }
    }
    swap(row[start], row[minIndex]);

    // Recursively sort the rest of the row
    sortRowRecursive(row, cols, start + 1);
}

void sort2DArrayRecursive(int arr[][4], int rows, int cols, int currentRow = 0) {
    // Base case: if all rows are sorted, return
    if (currentRow >= rows) return;

    // Sort the current row
    sortRowRecursive(arr[currentRow], cols);

    // Recursively sort the next row
    sort2DArrayRecursive(arr, rows, cols, currentRow + 1);
}

void print2DArray(int arr[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][4] = {
        {12, 4, 7, 3},
        {8, 6, 5, 10},
        {9, 2, 11, 1}
    };

    cout << "Original Array:" << endl;
    print2DArray(arr, 3, 4);

    sort2DArrayRecursive(arr, 3, 4);

    cout << "\nSorted Array (Recursive):" << endl;
    print2DArray(arr, 3, 4);

    return 0;
}



// 
/*
#include <iomanip>cout << boolalpha << smth  == bukan jadi 1 atau 0 lagi melainkan Tranlate menjadi True or False 
*/

