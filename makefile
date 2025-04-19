CC=cc
CCFLAGS=-Wall -Wextra 
ctrace:ctrace.c
	$(CC) $(CCFLAGS) -g -O $< -o $@

