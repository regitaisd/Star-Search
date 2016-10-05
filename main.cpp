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
    findLowest(number1, number2, number3, number4, number5);
    findHighest(number1, number2, number3, number4, number5);
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
        return;
    }
    
    return;
}

int findLowest(int number1, int number2, int number3, int number4, int number5)
{
	int lowestNumber = number1;
	
	if (lowestNumber > number2) 
	{
		lowestNumber = number2;
	} else if(lowestNumber > number3)
	{
		lowestNumber = number3;
	} else if(lowestNumber > number4)
	{
		lowestNumber = number4;
	} else if(lowestNumber > number5)
	{
		lowestNumber = number5;
	}
	return lowestNumber;
	
}

// declares findHighest function
int findHighest(int number1, int number2, int number3, int number4, int number5)
{
	int highestNumber = number5;
	
	if(highestNumber < number1)
	{
		highestNumber = number1;
	} else if(highestNumber < number2)
	{
		highestNumber = number2;
	} else if(highestNumber < number3)
	{
		highestNumber = number3;
	} else if(highestNumber < number4)
	{
		highestNumber = number4;N
	} else if(highestNumber < number5)
	{
		highestNumber = number5;
	}
	return highestNumber;
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
