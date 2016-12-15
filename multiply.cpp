#include <iostream>
#include <random>
#include <sstream>
#include "multiply.h"

Multiply::Multiply()
  : min(4), max(9), first(this->generateInt()), second(this->generateInt()) { }

Multiply::Multiply(int myFirst, int mySecond)
{
  this->first = myFirst;
  this->second = mySecond;
}

int Multiply::generateInt()
{
  std::random_device rd;     // only used once to initialise (seed) engine
  std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
  std::uniform_int_distribution<int> uni(min, max); // guaranteed unbiased
  int random_integer = uni(rng);
  return random_integer;
}

int Multiply::getResult()
{
  return this->first * this->second;
}

std::string Multiply::toString()
{
  std::stringstream stm;
  stm << this->first << " * " << this->second;
  return stm.str();
}
