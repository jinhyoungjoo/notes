#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "hash_table.h"

static struct hash_table_item *new_hash_table_item(const char *key,
                                                   const char *value) {
  struct hash_table_item *item =
      (struct hash_table_item *)malloc(sizeof(struct hash_table_item));
  if (item == NULL)
    return NULL;

  item->key = strdup(key);
  item->value = strdup(value);
  return item;
}

struct hash_table *new_hash_table() {
  struct hash_table *hash_table =
      (struct hash_table *)malloc(sizeof(struct hash_table));
  if (hash_table == NULL)
    return NULL;

  hash_table->size = 50;
  hash_table->count = 0;
  hash_table->items =
      calloc(hash_table->size, sizeof(struct hash_table_item *));
  return hash_table;
}

static void delete_hash_table_item(struct hash_table_item *item) {
  if (item == NULL)
    return;

  if (item->key != NULL)
    free(item->key);

  if (item->value != NULL)
    free(item->value);

  free(item);
}

void delete_hash_table(struct hash_table *hash_table) {
  if (hash_table == NULL)
    return;

  for (int i = 0; i < hash_table->size; i++) {
    struct hash_table_item *item = hash_table->items[i];
    if (item != NULL)
      delete_hash_table_item(item);
  }

  free(hash_table->items);
  free(hash_table);
}

void insert_hash_table(struct hash_table *hash_table, const char *key,
                       const char *value) {
  struct hash_table_item *item = new_hash_table_item(key, value);
  if (item == NULL)
    return;

  // TODO
}

char *search_hash_table(struct hash_table *hash_table, const char *key) {
  // TODO
}

void remove_hash_table(struct hash_table *hash_table, const char *key) {
  // TODO
}

static int hash_function(const char *string, const int a, const int m) {
  long hash = 0;
  const int len_s = strlen(string);
  for (int i = 0; i < len_s; i++) {
    hash += (long)pow(a, len_s - (i + 1)) * string[i];
    hash = hash % m;
  }
  return (int)hash;
}

static int get_hash_value(const char *string, const int num_buckets,
                          const int attempt) {
  const int hash_a = hash_function(string, HT_PRIME_1, num_buckets);
  const int hash_b = hash_function(string, HT_PRIME_2, num_buckets);
  return (hash_a + (attempt * (hash_b + 1))) % num_buckets;
}
