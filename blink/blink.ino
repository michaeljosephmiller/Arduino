const long interval = 1000;
unsigned long previous = 0;
unsigned long current;
const int LED_pin = LED_pin;
bool LED_status = HIGH;

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
    digitalWrite(LED_pin, LED_status);
    Serial.println(LED_status);
    LED_status = !LED_status;
  }
}
