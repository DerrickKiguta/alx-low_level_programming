#ifndef MAIN_H
#define MAIN_H

/*
 * Desc: Header file containint function prototypes.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
#endif
