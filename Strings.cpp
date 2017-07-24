/*
Developed by: Albin Baby (albinchiramel@gmail.com)
*/

//Basic String Copy
void StringCopy(const char* szSource, char* szTarget)
{
	while(*szTarget++ = *szSource++);
}

//String Copy safer version but NULL termination not guarenteed if target length is less
void StringCopySafe(const char* szSource, char* szTarget, int nTargetLen)
{
	int nLen = 0;
	while((nLen++ < nTargetLen) && (*szTarget++ = *szSource++));
}

//String compare return zero on equal, positive integer if String 1 is bigger otherwise negative
int StringCompare(const char* szString1, const char* szString2)
{
	while(*szString1 && *szString2 && (*szString1 == *szString2))
	{
		szString1++;
		szString2++;
	}

	return *szString1 - *szString2;
}