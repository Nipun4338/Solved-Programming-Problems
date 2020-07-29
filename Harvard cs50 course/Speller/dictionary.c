// Implements a dictionary's functionality

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <strings.h>
#include<ctype.h>
#include<cs50.h>
#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Number of buckets in hash table
const unsigned int N = 65536;

// Hash table
node *table[N];
int s = 0;

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    int y = hash(word);
    node *n1 = table[y];

    while (n1 != NULL)
    {
        // use strcasecmp to be case insensitive
        if (strcasecmp(n1->word, word) == 0)
        {
            return true;
        }
        n1 = n1->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO
    unsigned long hash = 0;

    for (const char *ptr = word; *ptr != '\0'; ptr++)
    {
        hash = ((hash << 5) + hash) + tolower(*ptr);
    }

    return hash % N;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // TODO
    char word[LENGTH + 1];
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        return false;
    }
    while (fscanf(file, "%s", word) != EOF)
    {
        node *n = malloc(sizeof(node));
        if (n != NULL)
        {
            s++;
            strcpy(n->word, word);
            // This is equivalent to (*n).number, where we first go to the node pointed
            // to by n, and then set the number property. In C, we can also use this
            // arrow notation:
            unsigned int x = hash(word);
            n->next = table[x];
            table[x] = n;
        }
        else
        {
            fclose(file);
            return false;
        }
    }
    fclose(file);
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return s;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
    for (int i = 0; i < N; i++)
    {
        node *cursor;

        cursor = table[i];

        while (cursor != NULL)
        {
            node *temp = cursor;
            cursor = cursor->next;
            free(temp);
        }
        free(cursor);
    }
    return true;
}
