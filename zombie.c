#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t child_pid = fork();  // Fork returns process ID

    if (child_pid > 0) {
        // Parent process
        sleep(50);  // Parent sleeps for 50 seconds
    } else {
        // Child process
        exit(0);    // Child exits
    }

    return 0;
}
In this example, the code creates a child process using fork(). In the parent process, the code sleeps for 50 seconds using sleep(),
  while the child process immediately exits using exit(0).   During the sleep period of the parent process, the child process becomes 
a zombie because its exit status is yet to be collected.
