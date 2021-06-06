
/*
Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, “act” and “tac” are an anagram of each other.

Input:
a = geeksforgeeks, b = forgeeksgeeks
Output: YES

Explanation: Both the string have same
characters with same frequency. So, 
both are anagrams.


*/


#include <stdio.h>


int main()
{
    int i=0,j=0,length1=0,length2=0,size=0;
    char str1[]="Lass";
    char str2[]="Cass";
    
    length1=sizeof(str1)/sizeof(char);
     length2=sizeof(str2)/sizeof(char);
     
     if(length1==length2)
     {
     printf("Given string may be Anagram because length of two strings is same\n");
     }
     else
     {
        printf("Given string may be not Anagram\n"); 
     }
     
     size=length1+length2;
     
    char str3[size];
    for(i=0;i<length1;i++)
    {
        str3[i]=str1[i];
    }
    
    
    for(i=length1,j=0;i<size,j<length1;i++,j++)
    {
        str3[i]=str2[j];
    }
    
    str3[i]='\0';

    for(i=0;i<size;)
    {
        if((str3[i]==str1[i] || str3[i]==str2[i]) && (length1==length2))
        {
            i++;
        }
        else if((length1==length2) && (str3==str1) && (str3==str2))
        {
            printf("Given String is Anagram of each other\n");
            break;
        }
        else
        {
            printf("Given String is not Anagram of each other\n");
            break;
        }
        
    }
    
    


	
	return 0;
}

