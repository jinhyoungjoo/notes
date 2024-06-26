#include "hash_table.h"

int main(int argc, const char *argv[]) {
  struct hash_table *hash_table = new_hash_table();
  delete_hash_table(hash_table);
  return 0;
}
