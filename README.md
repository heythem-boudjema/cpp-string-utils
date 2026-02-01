# C++ String Utilities Library

A lightweight C++ header-only utility library for common string operations.

## Features
- Split strings by delimiter or spaces
- Join strings
- Reverse words in a sentence
- Case conversion (upper, lower, inverse)
- Count letters, words, vowels
- Trim strings (left, right, full)
- Replace words (case sensitive / insensitive)
- Remove punctuation

## Usage

```cpp
#include "clsString.h"

clsString s("hello world");

s.UpperFirstLetterOfEachWord();
std::cout << s.Value << std::endl;
