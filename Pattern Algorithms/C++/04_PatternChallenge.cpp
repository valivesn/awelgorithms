
/*******************************************************************************************************
/*      ___                   _                      _  _    _                      
/*     / _ \                 | |                    (_)| |  | |                     
/*    / /_\ \__      __  ___ | |  __ _   ___   _ __  _ | |_ | |__   _ __ ___   ___  
/*    |  _  |\ \ /\ / / / _ \| | / _` | / _ \ | '__|| || __|| '_ \ | '_ ` _ \ / __| 
/*    | | | | \ V  V / |  __/| || (_| || (_) || |   | || |_ | | | || | | | | |\__ \ 
/*    \_| |_/  \_/\_/   \___||_| \__, | \___/ |_|   |_| \__||_| |_||_| |_| |_||___/ 
/*                                __/ |                                             
/*                               |___/                                                                                                                                             
/******************************************************************************************************/

/***********************************
/* 04_PatternChallenge
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void printPattern_04(int);

int main(){
	// user input
	int userInput;

	cout<<"Enter number of lines."<<endl;
	cin>>userInput;

	printPattern_04(userInput);
	return 0;
}

/**********************************************************
/*                <printPattern_04>
/*
/* @description : Prints a pyramid pattern of decreasing digits, in sequential digits of input n.
/* @param       : Integer<input>
/* @return      : None, void
/* @complexity  : O(n^2)
/* @explanation : Algorithm that decrements the digits printed with every iteration in every line in
/*                in a reverse pyramid fashion (Opposite to 03_PatternChallenge.cpp algorithm). Outer loop 
/*                loops input number of times in decremental fashion, inner loop loops j<i number of times.
/*                This would mean, the number of digits printed in every line with each loop decreases by 1.
/*                Giving us the reverse pyramid as the challenge described.
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
void printPattern_04(int input){
	// Outer loop loops input number of times
	for(int i=input;i>0;i--){
		// Inner loop loops i number of times.
		for(int j=0;j<i;j++){
			cout<<j<<" ";
		}
		// Jump to newline when the inner loop has finished executing.
		cout<<endl;
	}
}
