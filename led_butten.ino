// تعريف دبابيس الأزرار و LEDs
int redButton = 2;    // الزر الأحمر
int yellowButton = 3; // الزر الأصفر
int blueButton = 4;   // الزر الأزرق

int redLED = 5;       // LED الأحمر
int yellowLED = 6;    // LED الأصفر
int blueLED = 7;      // LED الأزرق

void setup() {
  // إعداد الأزرار كمدخلات مع مقاومات سحب داخلية
  pinMode(redButton, INPUT_PULLUP);
  pinMode(yellowButton, INPUT_PULLUP);
  pinMode(blueButton, INPUT_PULLUP);

  // إعداد LEDs كمخرجات
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  // قراءة حالة الأزرار
  int redState = digitalRead(redButton);
  int yellowState = digitalRead(yellowButton);
  int blueState = digitalRead(blueButton);

  // إذا كانت الأزرار تستخدم مقاومات سحب داخلية، فالحالة ستكون منخفضة (LOW) عند الضغط
  if (redState == LOW) {
    digitalWrite(redLED, HIGH);  // تشغيل LED الأحمر
  } else {
    digitalWrite(redLED, LOW);   // إيقاف LED الأحمر
  }

  if (yellowState == LOW) {
    digitalWrite(yellowLED, HIGH); // تشغيل LED الأصفر
  } else {
    digitalWrite(yellowLED, LOW);  // إيقاف LED الأصفر
  }

  if (blueState == LOW) {
    digitalWrite(blueLED, HIGH);   // تشغيل LED الأزرق
  } else {
    digitalWrite(blueLED, LOW);    // إيقاف LED الأزرق
  }
}

