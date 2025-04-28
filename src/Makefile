# You can define "local" variables in the `config.mk` file which
# is .gitignored.
ifneq ($(wildcard config.mk),)
include config.mk
endif

# We need the auxiliar variable `CC_AUX` because `CC` is predefined
# by `make`.
ifdef CC_AUX
CC := $(CC_AUX)
endif

# We need the auxiliar variable `CFLAGS_AUX` because `CFLAGS` is
# predefined by `make`.
ifdef CFLAGS_AUX
CFLAGS := $(CFLAGS_AUX)
endif

glibc-abs : glibc-abs.c
	${CC} ${CFLAGS} $< -o $@

ghs-abs : ghc-abs.hs
	ghc -Wall $< -o $@

clean very-clean :
	find . -type f -executable -delete
