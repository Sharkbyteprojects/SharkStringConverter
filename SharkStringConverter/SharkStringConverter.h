#ifndef  sharkstringconvert
#define sharkstringconvert 0x00
#ifdef SHARKSTRINGCONVERTER_EXPORTS
#define SHARKSTRINGCONVERTER_API __declspec(dllexport)
#else
#define SHARKSTRINGCONVERTER_API __declspec(dllimport)
#endif
extern SHARKSTRINGCONVERTER_API int nSharkStringConverter;

SHARKSTRINGCONVERTER_API char * stringtochar(std::string);
SHARKSTRINGCONVERTER_API std::string chartostring(char*);
#endif