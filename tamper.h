#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
//#include "mem_ops.h"
#include "string_ops.h"
#include "validate.h"

inline char* encode64(char* str, unsigned long len);
char *rand_case(char *str); 
char *urlencode(char *str); 
char *double_urlencode( char *str);
