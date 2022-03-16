// www.mike.education
// Copyright (c) 2022.

//
// Created by Maikol Guzman Alan on 2/24/22.
//
#include <iostream>
using namespace std;

#ifndef MY_PROJECT_NAME_PERSON_H
#define MY_PROJECT_NAME_PERSON_H

/**
 * Class to demonstrate the overloading using operator
 */
class Person {
private:
    /*Atributo*/
    string text;
public:
    /*Gets y Sets*/
    const string &getText() const;

    void setText(const string &text);
public:
    /**
     * Basic Constructor
     */
    Person();

    /**
     * Basic Destructor
     */
    virtual ~Person();

    /**
     * Constructor with one param
     * @param _text the text
     */
    explicit Person(string _text);

    /**
     * The operator Method
     * Customizes the C++ operators for operands of user-defined types.
     * https://en.cppreference.com/w/cpp/language/operators
     * @param person
     */
    /**
     * El método operator
     * Personaliza los operadores de C++ para operandos de tipos definidos por el usuario.
     * https://en.cppreference.com/w/cpp/language/operators
     * @param person
     */
    void operator+(Person person);
};


#endif //MY_PROJECT_NAME_PERSON_H
