#ifndef PROTOTYPES_H
#define PROTOTYPES_H

/* libraries */
#include <sys/types.h> /* open function */
#include <sys/stat.h> /* open function */
#include <fcntl.h> /* open function */
#include <unistd.h> /* Close, read and write functions */
#include <stdio.h> /* printf function */

/* prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* _putchar tool */
int _putchar(char c);

#endif
