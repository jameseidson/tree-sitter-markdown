#ifndef TS_MD_WASM_CTYPE_SHIM_H
#define TS_MD_WASM_CTYPE_SHIM_H

static inline int isdigit(int c) {
    return c >= '0' && c <= '9';
}

#endif // TS_MD_WASM_CTYPE_SHIM_H
