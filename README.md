## Source Code for the Course [SI1001 Theory of Computation](https://asr.github.io/cursos/si1001-teoria-de-la-computacion/index.html)

* You can clone this repository by running

    ```bash
    $ git clone https://github.com/asr/si1001-toc.git
    ```

### Local compilation options

You can create the `.gitignored` file `src/config.mk` for defining your
local compilation options. See `src/Makefile`'s for details. An example of
this file is the following:

```bash
$ cat src/config.mk
CC_AUX     := gcc-15.1.0
CFLAGS_AUX := -Wall -Wextra -Wpedantic -std=c23
```

### The files in this repository were tested with:

* C files

    ```bash
    $ gcc-15.1.0 --version
    gcc-15.1.0 (GCC) gcc-15.1.0
    ```

* Frama-C files

    ```bash
    $ frama-c --version
    30.0 (Zinc)
    ```

* Haskell files

    ```bash
    $ ghc --version
    The Glorious Glasgow Haskell Compilation System, version 9.12.2
    ```
