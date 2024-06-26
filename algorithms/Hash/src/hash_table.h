#ifndef HASH_TABLE_H_
#define HASH_TABLE_H_

#include <stdlib.h>

#define HT_PRIME_1 17
#define HT_PRIME_2 43

struct hash_table_item {
  char *key;
  char *value;
};

struct hash_table {
  size_t size;
  int count;
  struct hash_table_item **items;
};

static struct hash_table_item *new_hash_table_item(const char *, const char *);
struct hash_table *new_hash_table();

static void delete_hash_table_item(struct hash_table_item *);
void delete_hash_table(struct hash_table *);

void insert_hash_table(struct hash_table *, const char *, const char *);
char *search_hash_table(struct hash_table *, const char *);
void remove_hash_table(struct hash_table *, const char *);

static int hash_function(const char *, const int, const int);
static int get_hash_value(const char *, const int, const int);

#endif // !HASH_TABLE_H_
