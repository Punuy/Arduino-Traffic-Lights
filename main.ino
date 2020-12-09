int green_1 = 2;
int yellow_1 = 3;
int red_1 = 4;
int green_2 = 5;
int yellow_2 = 6;
int red_2 = 7;
int green_3 = 8;
int yellow_3 = 9;
int red_3 = 10;
int green_4 = 11;
int yellow_4 = 12;
int red_4 = 13;
int delay_ = 5000;
int delay_await = 500;

void setup()
{
  pinMode(green_1, OUTPUT);
  pinMode(yellow_1, OUTPUT);
  pinMode(red_1, OUTPUT);
  pinMode(green_2, OUTPUT);
  pinMode(yellow_2, OUTPUT);
  pinMode(red_2, OUTPUT);
  pinMode(green_3, OUTPUT);
  pinMode(yellow_3, OUTPUT);
  pinMode(red_3, OUTPUT);
  pinMode(green_4, OUTPUT);
  pinMode(yellow_4, OUTPUT);
  pinMode(red_4, OUTPUT);
}

void loop()
{
  green_light_1();
  red_light_2();
  red_light_3();
  red_light_4();
  delay(delay_);
  await_yellow_1();
  yellow_light_1();
  delay(delay_);
  red_light_1();
  green_light_2();
  red_light_3();
  red_light_4();
  delay(delay_);
  await_yellow_2();
  yellow_light_2();
  delay(delay_);
  red_light_1();
  red_light_2();
  green_light_3();
  red_light_4();
  delay(delay_);
  await_yellow_3();
  yellow_light_3();
  delay(delay_);
  red_light_1();
  red_light_2();
  red_light_3();
  green_light_4();
  delay(delay_);
  await_yellow_4();
  yellow_light_4();
  delay(delay_);
}

void green_light_1()
{
  digitalWrite(green_1, HIGH);
  digitalWrite(yellow_1, LOW);
  digitalWrite(red_1, LOW);
}
void yellow_light_1()
{
  digitalWrite(green_1, LOW);
  digitalWrite(yellow_1, HIGH);
  digitalWrite(red_1, LOW);
}

void red_light_1()
{
  digitalWrite(green_1, LOW);
  digitalWrite(yellow_1, LOW);
  digitalWrite(red_1, HIGH);
}

void await_yellow_1()
{
  digitalWrite(green_1, LOW);
  digitalWrite(yellow_1, LOW);
  digitalWrite(red_1, LOW);
  delay(delay_await);
  digitalWrite(green_1, HIGH);
  digitalWrite(yellow_1, LOW);
  digitalWrite(red_1, LOW);
  delay(delay_await);
  digitalWrite(green_1, LOW);
  digitalWrite(yellow_1, LOW);
  digitalWrite(red_1, LOW);
  delay(delay_await);
  digitalWrite(green_1, HIGH);
  digitalWrite(yellow_1, LOW);
  digitalWrite(red_1, LOW);
  delay(delay_await);
  digitalWrite(green_1, LOW);
  digitalWrite(yellow_1, LOW);
  digitalWrite(red_1, LOW);
  delay(delay_await);
  digitalWrite(green_1, HIGH);
  digitalWrite(yellow_1, LOW);
  digitalWrite(red_1, LOW);
  delay(delay_await);
  digitalWrite(green_1, LOW);
  digitalWrite(yellow_1, LOW);
  digitalWrite(red_1, LOW);
  delay(delay_await);
  digitalWrite(green_1, HIGH);
  digitalWrite(yellow_1, LOW);
  digitalWrite(red_1, LOW);
}

void green_light_2()
{
  digitalWrite(green_2, HIGH);
  digitalWrite(yellow_2, LOW);
  digitalWrite(red_2, LOW);
}
void yellow_light_2()
{
  digitalWrite(green_2, LOW);
  digitalWrite(yellow_2, HIGH);
  digitalWrite(red_2, LOW);
}

void red_light_2()
{
  digitalWrite(green_2, LOW);
  digitalWrite(yellow_2, LOW);
  digitalWrite(red_2, HIGH);
}

void await_yellow_2()
{
  digitalWrite(green_2, LOW);
  digitalWrite(yellow_2, LOW);
  digitalWrite(red_2, LOW);
  delay(delay_await);
  digitalWrite(green_2, HIGH);
  digitalWrite(yellow_2, LOW);
  digitalWrite(red_2, LOW);
  delay(delay_await);
  digitalWrite(green_2, LOW);
  digitalWrite(yellow_2, LOW);
  digitalWrite(red_2, LOW);
  delay(delay_await);
  digitalWrite(green_2, HIGH);
  digitalWrite(yellow_2, LOW);
  digitalWrite(red_2, LOW);
  delay(delay_await);
  digitalWrite(green_2, LOW);
  digitalWrite(yellow_2, LOW);
  digitalWrite(red_2, LOW);
  delay(delay_await);
  digitalWrite(green_2, HIGH);
  digitalWrite(yellow_2, LOW);
  digitalWrite(red_2, LOW);
  delay(delay_await);
  digitalWrite(green_2, LOW);
  digitalWrite(yellow_2, LOW);
  digitalWrite(red_2, LOW);
  delay(delay_await);
  digitalWrite(green_2, HIGH);
  digitalWrite(yellow_2, LOW);
  digitalWrite(red_2, LOW);
}

void green_light_3()
{
  digitalWrite(green_3, HIGH);
  digitalWrite(yellow_3, LOW);
  digitalWrite(red_3, LOW);
}
void yellow_light_3()
{
  digitalWrite(green_3, LOW);
  digitalWrite(yellow_3, HIGH);
  digitalWrite(red_3, LOW);
}

void red_light_3()
{
  digitalWrite(green_3, LOW);
  digitalWrite(yellow_3, LOW);
  digitalWrite(red_3, HIGH);
}

void await_yellow_3()
{
  digitalWrite(green_3, LOW);
  digitalWrite(yellow_3, LOW);
  digitalWrite(red_3, LOW);
  delay(delay_await);
  digitalWrite(green_3, HIGH);
  digitalWrite(yellow_3, LOW);
  digitalWrite(red_3, LOW);
  delay(delay_await);
  digitalWrite(green_3, LOW);
  digitalWrite(yellow_3, LOW);
  digitalWrite(red_3, LOW);
  delay(delay_await);
  digitalWrite(green_3, HIGH);
  digitalWrite(yellow_3, LOW);
  digitalWrite(red_3, LOW);
  delay(delay_await);
  digitalWrite(green_3, LOW);
  digitalWrite(yellow_3, LOW);
  digitalWrite(red_3, LOW);
  delay(delay_await);
  digitalWrite(green_3, HIGH);
  digitalWrite(yellow_3, LOW);
  digitalWrite(red_3, LOW);
  delay(delay_await);
  digitalWrite(green_3, LOW);
  digitalWrite(yellow_3, LOW);
  digitalWrite(red_3, LOW);
  delay(delay_await);
  digitalWrite(green_3, HIGH);
  digitalWrite(yellow_3, LOW);
  digitalWrite(red_3, LOW);
}

void green_light_4()
{
  digitalWrite(green_4, HIGH);
  digitalWrite(yellow_4, LOW);
  digitalWrite(red_4, LOW);
}
void yellow_light_4()
{
  digitalWrite(green_4, LOW);
  digitalWrite(yellow_4, HIGH);
  digitalWrite(red_4, LOW);
}

void red_light_4()
{
  digitalWrite(green_4, LOW);
  digitalWrite(yellow_4, LOW);
  digitalWrite(red_4, HIGH);
}

void await_yellow_4()
{
  digitalWrite(green_4, LOW);
  digitalWrite(yellow_4, LOW);
  digitalWrite(red_4, LOW);
  delay(delay_await);
  digitalWrite(green_4, HIGH);
  digitalWrite(yellow_4, LOW);
  digitalWrite(red_4, LOW);
  delay(delay_await);
  digitalWrite(green_4, LOW);
  digitalWrite(yellow_4, LOW);
  digitalWrite(red_4, LOW);
  delay(delay_await);
  digitalWrite(green_4, HIGH);
  digitalWrite(yellow_4, LOW);
  digitalWrite(red_4, LOW);
  delay(delay_await);
  digitalWrite(green_4, LOW);
  digitalWrite(yellow_4, LOW);
  digitalWrite(red_4, LOW);
  delay(delay_await);
  digitalWrite(green_4, HIGH);
  digitalWrite(yellow_4, LOW);
  digitalWrite(red_4, LOW);
  delay(delay_await);
  digitalWrite(green_4, LOW);
  digitalWrite(yellow_4, LOW);
  digitalWrite(red_4, LOW);
  delay(delay_await);
  digitalWrite(green_4, HIGH);
  digitalWrite(yellow_4, LOW);
  digitalWrite(red_4, LOW);
}
