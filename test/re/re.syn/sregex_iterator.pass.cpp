//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <regex>

// typedef regex_iterator<string::const_iterator>   sregex_iterator;

#include <regex>
#include <type_traits>

int main()
{
    static_assert((std::is_same<std::regex_iterator<std::string::const_iterator>, std::sregex_iterator>::value), "");
}
