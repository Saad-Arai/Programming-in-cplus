#ifndef STRINGS_H
#define STRINGS_H
#include <iostream>
#include <string.h>

class String
{
public:
  char str1[100], str2[100];

  //Conctructor
  String();

  //Destructor
  ~String();

  //Function for string length
  int stringLength(char str1[]);

  //Function for concatenation
  std::string concateString(char str1[], char str2[]);

  //Function for pattern matching
  int patternMatch(char str1[], char str2[]);

  //Function for substring
  void subString(char str1[], char str2[], int pos, int length);

  //insert a string function
  void insertString(char str1[], char str2[], int pos);

  //replace a string function
  void replaceString(char str1[], char str2[], int pos);

  //deletion function
  void deleteString(char str1[], int pos, int num);
};
#endif