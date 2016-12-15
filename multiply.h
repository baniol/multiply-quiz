#ifndef MULTIPLY_CLASS_H
#define MULTIPLY_CLASS_H

class Multiply
{
public:
  Multiply();
  Multiply(int myFirst, int mySecond);
  int getResult();
  std::string toString();
private:
  int min;
  int max;
  int first;
  int second;
  int generateInt();
};

#endif
