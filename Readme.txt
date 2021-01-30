+----------------------+
|Shark String Converter|
+----------------------+

To use this, you need to include the file SharkStringConverter.h and add SharkStringConverter.dll to the files to link.

There are 2 secure functions:
#--------------------------------------#
#                                      #
#| char * stringtochar(std::string);   #
#| std::string chartostring(char*);    #
#                                      #
#--------------------------------------#

The function
| char * stringtochar(std::string);
convert the std::string to char*. the char* has the [lenght of the string +2] but only the [lenght of the string +1] will copyed to the new char.

After use the char* you should free the memory with the free function of | #include <stdlib.h>




The function
| std::string chartostring(char*); 
does that what is says, it convert a char to a string

© Sharkbyteprojects