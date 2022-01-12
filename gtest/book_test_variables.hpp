#ifndef GTEST_BOOK_TEST_FILES_HPP
#define GTEST_BOOK_TEST_FILES_HPP

#include <string>

#include "book_reader/book_reader.hpp"

/*
    template to create book_tests_files.hpp generically
*/

namespace book_tests {

    const std::string xml_file{"/media/sf_D_DRIVE/git/ParameterizedTests_gtest/gtest/examples/example.xml"};
    const std::string json_file{"/media/sf_D_DRIVE/git/ParameterizedTests_gtest/gtest/examples/example.json"};


    struct test_book {
        std::size_t id;
        Book book;
    };
    const test_book buzz = {123456, Book{"Buzz Michelangelo","The Story Of Buzz Michelangelo",2019}};
    const test_book moxie = {456789, Book{"Moxie Crimefighter","How To Fight Crimes",2005}};   
} // namespace book_tests








#endif
