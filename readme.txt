Smaller C is a simple and small single-pass C compiler,
currently supporting most of the C language common between C89/ANSI C
and C99 (minus some C89 and plus some C99 features).

Currently it generates 16-bit and 32-bit 80386+ assembly code for NASM
that can then be assembled and linked into DOS, Windows and Linux programs.

Code generation for MIPS CPUs is also supported (primarily for RetroBSD).

The core compiler is capable of compiling its own source code.

You can fully recompile the core compiler only with itself and NASM for the
x86 platform (no linker is necessary).

The core compiler comes with a linker and a compiler driver (the driver
invokes the core compiler, the assembler, and the linker and supports
options similar to those of gcc).

The standard C library is work-in-progress and it's close to completion
for the DOS platform.

See the Wiki for more up-to-date details:
http://github.com/alexfru/SmallerC/wiki

Links:
NASM: http://nasm.us/
RetroBSD: http://retrobsd.org/
