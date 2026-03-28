CC := gcc
CFLAGS := -Wall -Wextra -Werror 
CLIBS := cartao.c lib/cs50.c -Ilib

main: main.c
	$(CC) $(CFLAGS) $< ${CLIBS} -o cartao