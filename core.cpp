#include <iostream>
#include "core.h"

Core::Core(void)
  : counter(0), tries(0), good_answers(0), bad_answers(0) {}

void Core::init()
{
  std::cout << "How many tries?: " << std::endl;
  std::cin >> this->tries;
}

int Core::inPlay()
{
  return this->counter < this->tries;
}

int Core::query()
{
  int answer;
  std::cin >> answer;
  return answer;
}

void Core::goodAnswer()
{
  std::cout << "Good Answer" << std::endl;
  this->good_answers++;
}

void Core::badAnswer(int correct)
{
  std::cout << "Bad Answer. Should be " << correct << std::endl;
  this->bad_answers++;
}

void Core::next()
{
  this->counter++;
}

void Core::displayResult()
{
  // cout << "Your score: " << score << endl;
  std::cout << "Good answers: " << this->good_answers << std::endl;
  std::cout << "Bad answers: " << this->bad_answers << std::endl;
}
