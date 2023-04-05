#include <stdio.h>
#include <string.h>

int find_amount_of_letter_entries_in_sentence(char* sentence, char letter) {
  int sentence_length = strlen(sentence);
  int amount_of_letters = 0;
  for (int i = 0; i < sentence_length; i++)
  {
    if (sentence[i] == letter)
    {
      ++amount_of_letters;
    }
  }
  return amount_of_letters;
}

int main(int argc, char **argv)
{
  if (argc < 5)
  {
    puts("Not enough arguments.");
    return 1;
  }
  if (argc > 5)
  {
    puts("Too many arguments.");
    return 1;
  }
  
  char letter = argv[1][0];

  int result = 0;
  result += find_amount_of_letter_entries_in_sentence(argv[2], letter);
  result += find_amount_of_letter_entries_in_sentence(argv[3], letter);
  result += find_amount_of_letter_entries_in_sentence(argv[4], letter);
  
  printf("There are %d letters in three sentences.\n", result);
  return 0;
}