# CC := gcc-12
CC := gcc

# CFLAGS := -Wall -Wextra -Werror
CFLAGS := -Wall -Wextra

glibc-abs : glibc-abs.c
	${CC} ${CFLAGS} $< -o $@

ghs-abs : ghc-abs.hs
	ghc -Wall $< -o $@

clean very-clean :
	find . -type f -executable -delete
