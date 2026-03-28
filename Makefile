CC := gcc
CFLAGS := -Wall -Wextra -Werror 
CLIBS := lib/cs50.c -Ilib

%: %.c
	$(CC) $(CFLAGS) $< ${CLIBS} -o $@