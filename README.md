# 🌡️ Temperature Converter (C ↔ F)

> **Arduino Project #15** — تحويل درجات الحرارة بين سيلزيوس وفهرنهايت عبر Serial Monitor

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Level](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)](https://github.com/S-mohannad)

---

## 📋 Description

مشروع يحول درجات الحرارة في الاتجاهين ويطبع النتائج في Serial Monitor:

- يحول **46°C → فهرنهايت** باستخدام معادلة `F = C × (9/5) + 32`
- يحول **73°F → سيلزيوس** باستخدام معادلة `C = (F - 32) × 5/9`
- النتائج تُطبع مرة واحدة فقط عند التشغيل في `setup()`
- `loop()` فارغة لأن العملية تحتاج تنفيذ مرة وحدة فقط

---

## 🔌 Circuit

لا يحتاج مكونات خارجية — يعمل بـ Arduino وحده عبر USB.

---

## 💡 Concepts Used

- `float` — استخدام أرقام عشرية لدقة أعلى في الحسابات
- معادلات تحويل درجات الحرارة C ↔ F
- `Serial.print()` — طباعة نص بدون سطر جديد
- `Serial.println()` — طباعة القيمة مع سطر جديد
- تنفيذ الحسابات في `setup()` لأنها تحتاج تشغيل مرة واحدة فقط

---

## 📊 Behavior

| القيمة المُدخلة | اتجاه التحويل | النتيجة |
|----------------|--------------|---------|
| 46.0°C | C → F | 114.80°F |
| 73.0°F | F → C | 22.78°C |

---

## 🔗 Code

```cpp
float c = 46.0;
float f = 0.0;
float d = 73.0;
float v = 0.0;

void setup() {
  Serial.begin(9600);

  f = c * (9.0 / 5.0) + 32.0;
  Serial.print("from C TO THE DEGREE IN F: ");
  Serial.println(f);

  v = (d - 32.0) * 5.0 / 9.0;
  Serial.print("from F TO THE DEGREE IN C: ");
  Serial.println(v);
}

void loop() {
}
```

---

## 🔧 How to Run

1. افتح **Arduino IDE**
2. وصّل Arduino بالكمبيوتر عبر USB
3. انسخ الكود والصقه في المحرر
4. اختر **Board:** Arduino UNO
5. اختر **Port** الصحيح
6. اضغط ⬆️ **Upload**
7. افتح **Serial Monitor** (9600 baud)
8. شاهد نتيجتي التحويل تظهران مرة واحدة

---

## 👨‍💻 Author

**S-mohannad** — [@S-mohannad](https://github.com/S-mohannad)
