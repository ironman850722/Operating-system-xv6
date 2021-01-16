#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


int
main(void){

printf(1, "The number of accumulating System Calls are: %d\n", getsyscallinfo());
exit();
}