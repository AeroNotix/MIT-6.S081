#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

void print_usage() {
  fprintf(2, "usage: sleep time bhanana\n");
}

int
main(int argc, char *argv[])
{
  int time_to_sleep;
  if (argc != 2) {
    print_usage();
    exit(1);
  }
  time_to_sleep = atoi(argv[1]);
  if (time_to_sleep < 0) {
    fprintf(2, "sleep time cannot be negative. What is negative time, chief?\n");
    print_usage();
    exit(1);
  }
  exit(sleep(time_to_sleep));
}
