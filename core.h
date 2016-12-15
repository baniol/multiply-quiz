#ifndef QUIZ_CORE_H
#define QUIZ_CORE_H

class Core
{
public:
  Core();
  void init();
  int inPlay();
  int query();
  void goodAnswer();
  void badAnswer(int correct);
  void next();
  void displayResult();

private:
  int counter;
  int tries;
  int good_answers;
  int bad_answers;
};

#endif
