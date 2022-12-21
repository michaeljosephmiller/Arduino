unsigned long interval = 30;
unsigned long previous = 0;
int brigtness = 10;
int increment = 5;
unsigned long current;
const int LED_pin = 13;

void setup()
{
  Serial.begin(115200);
  pinMode(LED_pin, OUTPUT);
}

void loop()
{
  current = millis();
  if (current - previous >= interval)
  {
    previous = current;
    analogWrite(LED_pin, brigtness);
    Serial.println(brigtness);
    brigtness = brigtness + increment;
    if (brigtness <= 10 || brigtness >= 255)
    {
      increment = -increment;
    }
  }
}
