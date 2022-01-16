#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
int main(void)
{
	int32_t me32;
	me32 = 45933945;
	printf("int32_t me32 = %d\n", me32);
	printf("inttypes.h me32 = %"PRId32"\012", me32);

	return 0;
}
