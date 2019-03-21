#include "Strings.h"

int main()
{
    int flag = 0, result = 0, loc = 0, pos = 0, length = 0, num = 0;
    char str1[100], str2[100];
    std::string str3;
    String s1;

    do
    {
        std::cout << "Enter the options that you want. " << std::endl;
        std::cout << "- Press (1) for find length of a string. " << std::endl;
        std::cout << "- Press (2) for concate two strings. " << std::endl;
        std::cout << "- Press (3) for pattern matching. " << std::endl;
        std::cout << "- Press (4) for find substring. " << std::endl;
        std::cout << "- Press (5) for insertion of string. " << std::endl;
        std::cout << "- Press (6) for replace a string. " << std::endl;
        std::cout << "- Press (7) for deletion of string. " << std::endl;
        std::cout << "- Press (0) to exit. " << std::endl;
        std::cin >> flag;
        std::cout << "----------------------------------------------" << std::endl;
        

        switch (flag)
        {
        case 1:

            std::cout << "Enter the String : ";
            std::cin >> str1;
            result = s1.stringLength(str1);
            std::cout << "The length of the given string is : " << result << std::endl;
            std::cout << "----------------------------------------------" << std::endl;
            std::cout << std::endl;
            break;

        case 2:

            std::cout << "Enter the first string : ";
            std::cin >> str1;
            std::cout << "Enter the second string : ";
            std::cin >> str2;
            str3 = s1.concateString(str1, str2);
            std::cout << "The string after concatination is : " << str3 << std::endl;
            std::cout << "----------------------------------------------" << std::endl;
            std::cout << std::endl;
            break;

        case 3:

            std::cout << "Enter the String(without space) : ";
            std::cin >> str1;
            std::cout << "Enter the pattern for matching. ";
            std::cin >> str2;
            loc = s1.patternMatch(str1, str2);
            std::cout << "----------------------------------------------" << std::endl;
            if (loc != -1)
            {
                std::cout << "Pattern Found at " << loc + 1 << " th position. " << std::endl;
                std::cout << "----------------------------------------------" << std::endl;
                std::cout << std::endl;
            }
            else
            {
                std::cout << "Pattern Not found. " << std::endl;
            }
            break;

        case 4:
            std::cout << "Enter the first string : ";
            std::cin >> str1;
            std::cout << "Enter the position of the given string where a string placed : ";
            std::cin >> pos;
            std::cout << "Enter the length of the string that you want in a given Position : ";
            std::cin >> length;
            s1.subString(str1, str2, pos, length);
            break;

        case 5:
            std::cout << "Enter the string : ";
            std::cin >> str1;
            std ::cout << "Enter the character you want to insert : ";
            std ::cin >> str2;
            std ::cout << "Enter the position you want to insert in : ";
            std ::cin >> pos;
            s1.insertString(str1, str2, pos);
            break;

        case 6:
            std::cout << "Enter the string : ";
            std::cin >> str1;
            std ::cout << "Enter the character you want to replace : ";
            std ::cin >> str2;
            std ::cout << "Enter the position you want to insert in : ";
            std ::cin >> pos;
            s1.replaceString(str1, str2, pos);
            break;

        case 7:
            std::cout << "Enter the String : ";
            std::cin >> str1;
            std::cout << "Enter the number of characters you want to delete : ";
            std::cin >> num;
            std::cout << "Enter the position where you want to delete the string : ";
            std::cin >> pos;
            std::cout << std::endl;
            s1.deleteString(str1, pos, num);
            std::cout << std::endl;
        }
    } while (flag != 0);
    {
        std::cout<<"------------------THANK YOU-------------------"<<std::endl;
    }

    return 0;
}