# fileformats-spin
------------------

This is a P8X32A/Propeller, P2X8C4M64P/Propeller 2 collection of various file format/file I/O routines

**IMPORTANT**: This software is meant to be used with the [spin-standard-library](https://github.com/avsa242/spin-standard-library) (P8X32A) or [p2-spin-standard-library](https://github.com/avsa242/p2-spin-standard-library) (P2X8C4M64P). Please install the applicable library first before attempting to use this code, otherwise you will be missing several files required to build the project.


## Salient Features

* Image files: BMP (DIB v5 headers)


## Requirements

P1/SPIN1:
* spin-standard-library

P2/SPIN2:
* p2-spin-standard-library


## Compiler Compatibility

| Processor | Language | Compiler               | Backend      | Status                |
|-----------|----------|------------------------|--------------|-----------------------|
| P1        | SPIN1    | FlexSpin (7.3.1)       | Bytecode     | Not yet implemented   |
| P1        | SPIN1    | FlexSpin (7.3.1)       | Native/PASM  | Not yet implemented   |
| P2        | SPIN2    | FlexSpin (7.3.1)       | NuCode       | Untested              |
| P2        | SPIN2    | FlexSpin (7.3.1)       | Native/PASM2 | OK                    |

(other versions or toolchains not listed are __not supported__, and _may or may not_ work)


## Limitations

* TBD

