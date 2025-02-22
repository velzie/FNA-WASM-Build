# FNA-WASM-Build


[![WASM Build (FNA)](https://github.com/r58Playz/FNA-WASM-Build/actions/workflows/WASM.FNA.yml/badge.svg)](https://github.com/r58Playz/FNA-WASM-Build/actions/workflows/WASM.FNA.yml)

This repo is for automating the build of WebAssembly (WASM) native libraries for [FNA](https://fna-xna.github.io/), including:

* [FNA3D.a](https://github.com/FNA-XNA/FNA3D) - 3D graphics library for FNA.
* [FAudio.a](https://github.com/FNA-XNA/FAudio) - XAudio reimplementation for FNA.
* [SDL3.a](https://github.com/libsdl-org/SDL) - Simple DirectMedia Layer.
* ~[libtheorafile.a](https://github.com/FNA-XNA/Theorafile) - Ogg Theora videos decoder library.~ (not yet implemented)
* `liba` + `hot_reload_detour` - Library used for MonoMod on WASM.
* [dotnet](https://github.com/dotnet/runtime) - Patched dotnet wasm multithreaded runtime for MonoMod on WASM
* openssl - OpenSSL wasm

There is currently just one workflow:

1.  **WASM Build (FNA)**.  

## Patches
This fork contains a few patches (and uses SDL3 instead of SDL2):
- `SDL3.patch` fixes some issues with `EM_ASM` not being proxied to main thread.
- `FNA3D.patch` adds `-pthread` to the `CFLAGS` so FNA3D is built with WASM threads support.
- `dotnet.patch` patches the dotnet runtime so MonoMod can be used

## Usage

Go to the Actions tab and download the .zip artifact from the latest workflow run.  
See for further details:  https://gist.github.com/TheSpydog/e94c8c23c01615a5a3b2cc1a0857415c
