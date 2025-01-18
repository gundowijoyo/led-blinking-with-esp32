void setup() {
  // Set GPIO 23 sebagai output
  pinMode(23, OUTPUT);
}

void loop() {
  // Menyalakan LED
  digitalWrite(23, HIGH);
  delay(1000); // LED menyala selama 1 detik
  
  // Mematikan LED
  digitalWrite(23, LOW);
  delay(1000); // LED mati selama 1 detik
}
