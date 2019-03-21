#include "Strings.h"

String ::String()
{
    str1[100] = {};
    str2[100] = {};
}

//find length of string function definition
int String ::stringLength(char str1[])
{
    //length logic
    int i = 0, length = 0;
    while (str1[i] != '\0')
    {
        length = length + 1;
        i++;
    }
    return length;
}

//concate two string function definition
std::string String ::concateString(char str1[], char str2[])
{
    //concate logic
    int i = 0;
    std::string str3;
    while (str1[i] != '\0')
    {
        str3 += str1[i];
        ++i;
    }
    str3 += ' ';
    i = 0;
    while (str2[i] != '\0')
    {
        str3 += str2[i];
        ++i;
    }
    return str3;
}

//pattern matching function definition
int String ::patternMatch(char str1[], char str2[])
{
    int i, j, k, loc = -1;
    int l1 = strlen(str1);
    int l2 = strlen(str2);

    //pattern matching logic
    for (i = 0; i <= l1 - l2; i++)
    {
        loc = j = i;
        for (k = 0; k < l2; k++)
        {
            if (str2[k] == str1[j])
            {
                j++;
            }
            else
            {
                break;
            }
        }
        if (k == l2)
        {
            return loc;
        }
    }
    return -1;
}

//substring function definition
void String ::subString(char str1[], char str2[], int pos, int length)
{
    //substring logic
    int i = 0;
    while (i < length)
    {
        str2[i] = str1[pos + i - 1];
        i++;
    }
    str2[i] = '\0';
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "The Substring found Which is : " << str2 << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << std::endl;
}

//inserting function definition
void String ::insertString(char str1[], char str2[], int pos)
{
    int i, j;
    char temp[100];

    i = pos, j = 0;
    while (str1[i] != '\0')
    {
        temp[j] = str1[i];
        ++i;
        ++j;
    }
    temp[j] = '\0';

    i = pos, j = 0;
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        ++i;
        ++j;
    }

    j = 0;
    while (temp[j] != '\0')
    {
        str1[i] = temp[j];
        ++i;
        ++j;
    }

    str1[i] = '\0';
    std::cout << "----------------------------------------------" << std::endl;
    std ::cout << "After insertion the string is : ";
    std ::cout << str1 << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << std::endl;
}

//replace string function definition
void String ::replaceString(char str1[], char str2[], int pos)
{
    int i, j;
    char temp[100];

    i = pos, j = 0;
    while (str1[i] != '\0')
    {
        temp[j] = str1[i];
        ++i, ++j;
    }
    temp[j] = '\0';

    i = pos, j = 0;
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        ++i, ++j;
    }

    j = 0;
    while (temp[j] != '\0')
    {
        str1[i] = temp[j];
        str1[i] = '\0';
        ++i;
        ++j;
    }
    std::cout << "----------------------------------------------" << std::endl;
    std ::cout << "After replacing the string is : ";
    std ::cout << str1 << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << std::endl;
}

//deletion of string function definition
void String ::deleteString(char str1[], int pos, int num)
{
    int i, j, length;
    char temp[100];
    for (i = 0; str1[i] != '\0'; i++)
        length++;
    if ((pos + num) > length)
        std::cout << "Character execeeded for deletion..." << std::endl;
    else
    {
        for (i = pos, j = pos + num; str1[i] != '\0'; i++, j++)
            str1[i] = str1[j];
        str1[i] = '\0';
        std::cout << "----------------------------------------------" << std::endl;
        std::cout << "The string after deletion of Characters is  : ";
        std::cout << str1 << std::endl;
        std::cout << "----------------------------------------------" << std::endl;
        std::cout << std::endl;
    }
}
String ::~String()
{
}
