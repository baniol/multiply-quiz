#include <iostream>
#include "multiply.h"
#include "core.h"

using namespace std;

int main()
{
  Core quiz;
  quiz.init();

  do
  {
    quiz.next();
    Multiply mult;
    cout << mult.toString() << " = ? " <<  endl;
    int answer = quiz.query();
    if (answer == mult.getResult())
    {
      quiz.goodAnswer();
    }
    else {
      quiz.badAnswer(mult.getResult());
    }
    cout << "-----------------" << endl;
  } while(quiz.inPlay());
  quiz.displayResult();
  return 0;
}
