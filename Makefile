TARGETS=font
SUFFIXES=
CC=gcc

all: $(TARGETS)

%: %.c
	$(CC) $< -o $@

clean:
	rm -rf $(TARGETS)
