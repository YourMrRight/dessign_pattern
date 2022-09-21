#include <stdio.h>

void handle(char *s) // 处理函数
{
	printf("%s\n", s);
}

void event_trigger(void (*pfoo)(char *))
{
	pfoo("event happened!");
}

int main(void)
{
	event_trigger(handle);
	
	return 0;
}
