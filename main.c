#include <flexos/isolation.h>
#include <flexos/3comptest1/isolated1.h>
#include <flexos/3comptest2/isolated2.h>
#include <uk/alloc.h>
#include <flexos/impl/main_annotation.h>
#include <stdlib.h>

int main(int __unused argc, char __unused *argv[])
{
	uk_pr_info("Hello from main.\n");
	
	return 0;
}
