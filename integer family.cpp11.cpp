#include<stdio.h>
#include<limits.h>
main()
{
	printf("int:\nsigned:%hd to %hd\n",INT_MIN,INT_MAX);
	printf("unsinged:%d to %u",0,UINT_MAX);
}

#include<stdio.h>
#include<limits.h>
voidmain()
{
	printf("long int:\nsigned:%ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("unsinged:%d to %lu",0,ULONG_MAX);
}

#include<stdio.h>
#include<limits.h>
Voidmain()
{
	printf("long long int:\nsigned:%lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("unsinged:%d to %llu",0,ULONG_LONG_MAX);
}
