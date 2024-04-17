//Quiz App v2
//by Danyll
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main() {
	
	//Header
	cout<<"--------------------------------\n";
	cout<<"\nQuiz App v2 \nby Danyll\n";
	cout<<"\nAnswer all questions.\n";
	cout<<"\n--------------------------------\n";
    
    //Define questions, options and answers
    string qList[5] {"\nQ1: What is the tallest mountain in Malaysia?",
					 "\nQ2: Which state has the largest population in Malaysia?", 
					 "\nQ3: What is the longest river in Malaysia?", 
					 "\nQ4: What is the capital city of Perak?", 
					 "\nQ5: What is the largest island in Malaysia?"},
	
	oList[5] {"\nA. Gunung Kinabalu \nB. Gunung Tahan \nC. Bukit Changkat Asa \nD. Gunung Ledang \n",
			  "\nA. Kelantan \nB. Selangor \nC. Sabah \nD. Johor\n", 
			  "\nA. Sungai Pahang \nB. Sungai Perak \nC. Sungai Rajang \nD. Sungai Bernam \n",
			  "\nA. Tanjung Malim \nB. Manjung \nC. Kuala Kangsar \nD. Ipoh \n",
			  "\nA. Pulau Banggi \nB. Pulau Betruit \nC. Pulau Langkawi \nD. Pulau Pinang \n"},
	
    aList[5] {"A", "B", "C", "D", "A"}, aListCaps[5] {"a", "b", "c", "d", "a"};
    
    //Define variables for user input and internal calculations
    string aInput;
    int qNumber = 0, aCorrect = 0;
    
    //Question loop
    do {
        cout << qList[qNumber] << oList[qNumber];
        aInput = getch();
            
			if (aInput == aList[qNumber] || aInput == aListCaps[qNumber]) 
                aCorrect++, cout<<"\nCorrect answer!\n";
            
            else 
                cout<<"\nIncorrect answer.\n";
              
        qNumber++;
        cout<<"\n--------------------------------\n";
        }
    while (qNumber < 5);
    
    //Check if user gets all correct
    if (aCorrect == 5) 
		cout<<"\nYou get all correct. Congratulations!\n";
	
	else 
		cout<<"\nYou get "<<aCorrect<<" out of 5 correct. Try again.\n";
	

    return 0;
    
}