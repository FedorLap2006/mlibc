
#include <bits/ensure.h>
#include <sys/msg.h>

int msgget(key_t, int) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}

int msgctl(int, int, struct msqid_ds *) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
