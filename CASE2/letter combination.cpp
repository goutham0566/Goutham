#include <stdio.h> 
#include <string.h> 
#include<iostream>
using namespace std;
  
// hashTable[i] stores all characters that correspond to digit i in phone 
const char hashTable[10][5] = {"", "", "abc", "def", "ghi", "jkl", 
                               "mno", "pqrs", "tuv", "wxyz"}; 
void  printWordsUtil(int number[], int curr_digit, char output[], int n) 
{ 
    int i; 
    if (curr_digit == n) 
    { 
        printf("%s ", output); 
        return ; 
    } 
  
    for (i=0; i<strlen(hashTable[number[curr_digit]]); i++) 
    { 
        output[curr_digit] = hashTable[number[curr_digit]][i]; 
        printWordsUtil(number, curr_digit+1, output, n); 
        if (number[curr_digit] == 0 || number[curr_digit] == 1) 
            return; 
    } 
} 
void printWords(int number[], int n) 
{ 
    char result[n+1]; 
    result[n] ='\0'; 
    printWordsUtil(number, 0, result, n); 
} 
int main(int argc,char* argv[])
{
    if(argc==2 && strcmp(argv[1],"-h")==0)
    {
        //created help command
        cout<<"Enter Number from 2 to 9 to get lettercombination";
    }
    else
    {
    int p;
    printf("enter sizeof digits  you are going to enter");
    scanf("%d", &p); 
    int number[p]; 
    printf("Enter the integers, separated by spaces: ");
    for (int k=0;k<p;k++){
       scanf("%d", &number[k]); 
    }
    int n = sizeof(number)/sizeof(number[0]); 
    printWords(number, n); 
    return 0; 
}
}
