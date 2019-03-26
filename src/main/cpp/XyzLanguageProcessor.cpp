/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    XyzLanguageProcessor.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          TODO: Replace this line with your name and email address using the above format.
 * @brief   XyzLanguageProcessor implementation.
 */

#include "XyzLanguageProcessor.h"




bool csc232::XyzLanguageProcessor::isValid(const std::string &word) const {
    // TODO: Implement me using recursion
  if (word.length() <= 1){
      return false;
  }
  else {
      if (word.length () == 2 and word [0] == 'X' and (word [1] == 'X' or word [1] == 'Y' or word [1] == 'Z' )){
          return true;
      }
      else {
          return csc232::XyzLanguageProcessor::isValid(word.substr(1,word.length() - 1));
      }
  }
    return false;
}
