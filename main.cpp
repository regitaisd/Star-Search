//
//  main.cpp
//  Function
//
//  Created by Mikha Yupikha on 03/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;


void getJudgeData ();

int main ()
{
    cout<< "Please input five judge scores: ";
    getJudgeData();
    return 0;
    
}

void getJudgeData ()
{
    float number1, number2, number3, number4, number5, totalscore;
    
    cin>>  number1 >> number2 >> number3 >> number4 >> number5;
    
    if (number1<0 || number2<0 || number3<0 || number4<0 || number5<0)
    {
        cout<< "Scores cannot be less than 0";
        return;
    }
    else if (number1>10 || number2>10 || number3>10 || number4>10 || number5>10)
    {
        cout<< "Scores cannot be more than 10.";
        return;
    }
    else
    {
        cout<< "congrats.";
        return;
    }
    
    return;
}

void calcScore(double number1, double number2, double number3, double number4, double number5){
	int highestNumber = findHighest(number1, number2, number3, number4, number5);
	int lowestNumber = findLowest(number1, number2, number3, number4, number5);
	double totalScore = number1+number2+number3+number4+number5;
	
	double finalScore = (totalScore - highestNumber - lowestNumber) / 3;
	
	cout << "Highest Score: " << highestNumber << endl;
	cout << "Lowest Score: " << lowestNumber << endl;
	cout << "Final Score: " << finalScore << endl;
}
