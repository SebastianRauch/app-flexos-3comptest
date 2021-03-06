#include <flexos/isolation.h>
#include <flexos/3comptest1/isolated1.h>
#include <flexos/3comptest2/isolated2.h>

#include <flexos/impl/main_annotation.h>
int main(int __unused argc, char __unused *argv[])
{
	uk_pr_info("main running in comp %d (%d total)\n", FLEXOS_VMEPT_COMP_ID, FLEXOS_VMEPT_COMP_COUNT);

	flexos_gate(libflexos3comptest1, hello_lib1);
	flexos_gate(libflexos3comptest2, hello_lib2);

	return 0;
}
