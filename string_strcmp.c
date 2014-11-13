/* strcmp: return <0 if s<t, 0 if s==t, >0 is s>t */
int strcmp(char *s, char *t)
{
	int i;
	
	for(i = 0; s[i] == t[i]; i++)
		if (s[i] == '\0')
			return 0;
			
	return s[i] - t[i];		
}

/* strcmp: return >0 if s<t, 0 if s==t, >0 if s>t */
int strcmp(char *s, char *t)
{
	for(; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
			
	return *s - *t;
}

/* strcmp: Standard C Library version */
int __cdecl strcmp (const char * src, const char * dst)
{
	int ret = 0;
	
	while(!(rst = *(unsigned char *) src - (unsigned char *) dst) && *dst)
		++src,++dst;
		
	if (ret < 0 ) {
		ret = -1;
	} else if (ret > 0) {
		ret = 1;
	}
	
	return (ret);
}

/* strncmp: Standard C Library version */
int __cdecl strncmp(const char * first, const char * last, size_t count)
{
	if(!count)
		return (0);

	while(--count && *first && *first == *last) {
	
		first++;
		last++
	}
	
	return (*(unsigned char *) first - *(unsigned char *)last);

}
