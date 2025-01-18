#include <stdint.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/utsname.h>
#include <stdlib.h>
#include <stdio.h>

#include <mono/metadata/class-internals.h>
#include <mono/mini/interp/interp-internals.h>

int32_t _mincore(void *addr, void *length, void *vec) {
	return mincore(addr, length, vec);
}

int32_t _mkstemp(void *template) {
	return mkstemp(template);
}

void *_mmap(void *addr, void *length, int32_t prot, int32_t flags, int32_t fd, int32_t offset) {
	return mmap(addr, length, prot, flags, fd, offset);
}

int32_t _mprotect(void *addr, void *len, int32_t prot) {
	// return mprotect(addr, len, prot);
	return 0;
}

int _munmap(void *addr, size_t len) {
	return munmap(addr, len);
}

int _pipe2(int pipefd[2], int flags) {
	// return pipe2(pipefd, flags);
	return 0;
}

void *_read(int fd, void *buf, void *count) {
	return read(fd, buf, count);
}

void *_write(int fd, const void *buf, void *count) {
	return write(fd, buf, count);
}

int64_t _sysconf(int32_t name) {
	return sysconf(name);
}

int32_t _uname(void *x) {
	return uname(x);
}


void *magictranslate(InterpMethod *mono) {
	return mono_method_get_header_internal(mono->method, NULL)->code;
}

uint32_t magictranslatelen(InterpMethod *mono) {
	return mono_method_get_header_internal(mono->method, NULL)->code_size;
}

InterpMethod *magiclookup(InterpMethod *mono) {
	return mono_interp_get_imethod(mono->method);
}

void magicinvalidate(InterpMethod *mono) {
	mono->transformed = 0;
}
