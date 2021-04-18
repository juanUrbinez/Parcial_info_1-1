#include <iostream>

using namespace std;
const int SER = 13;
const int RCLK = 12;
const int SRCLK = 11;

int main()
{     
    return 0;
}

void loop()
{
  digitalWrite(SER, LOW);
  digitalWrite(RCLK, LOW);
  digitalWrite(SRCLK, LOW);

  digitalWrite(SER, HIGH);

  digitalWrite(SRCLK, LOW);
  digitalWrite(SRCLK, HIGH);
  digitalWrite(SRCLK, LOW);

  digitalWrite(RCLK, LOW);
  digitalWrite(RCLK, HIGH);
  digitalWrite(RCLK, LOW);
}
