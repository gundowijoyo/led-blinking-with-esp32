# led-blinking-with-esp32

# Step-Step
1. Siapkan text editor Arduinodroid dikarenakan saya menggunakan handphone.
2. Siapkan breadboard mb-102
3. Siapkan board esp32 Dev-Kit v1 sebagai microkontroller nya.
4. Siapkan kabel jumper Male To Female.
5. Siapkan LED.
6. Resistor 220 Ohm 1/2watt.
7. Siapkan kabel OTG.
8. Siapkan kabel charger type c.
   
# Link Bahan-Bahan
<p>
 1. Text Editor ArduinoDroid  <a href="https://play.google.com/store/apps/details?id=name.antonsmirnov.android.arduinodroid2">Download</a>
</p>
<p>
 2. Link Pembelian  <a href="https://id.shp.ee/JnHJbYD">Breadboard mb-102</a>
</p>
<p>
 3. Link Pembelian<a href="https://id.shp.ee/fWBG4Wh">
   esp32 DevKit v1 type c
 </a>
</p>
<p>
 4. Link Pembelian<a href="https://id.shp.ee/JF91grb">
   Kabel jumper male to female
 </a>
</p>
<p>
 5. Link Pembelian<a href="https://id.shp.ee/JnHJbYD">
   OTG in dinami micro type c
 </a>
</p>

<p>
 6. Link Pembelian<a href="https://id.shp.ee/U8AKRbK">
   LED
 </a>
</p>
<p>
 7. Link Pembelian<a href="https://id.shp.ee/BzbPrA5">
   Resistor 220 Ohm 1/2watt
 </a>
</p>

<p>
8. Kabel charger type c
</p>


### Komponen yang Diperlukan:
1. **ESP32**
2. **LED**
3. **Resistor** (220 Ohm)
4. **Kabel Jumper**

### Penyambungan Rangkaian:
1. **3.3V ESP32 ke Resistor**:
   - Sambungkan pin **3V3** pada ESP32 ke satu ujung resistor.
   
2. **Resistor ke Anoda LED (Kaki Panjang)**:
   - Sambungkan ujung resistor yang lain ke kaki panjang LED (anoda).

3. **GPIO 23 ke Katoda LED (Kaki Pendek)**:
   - Sambungkan pin **GPIO 23** pada ESP32 ke kaki pendek LED (katoda).

4. **Pin GND pada ESP32**:
   - Anda tidak perlu menghubungkan GND secara langsung di sini karena sudah terhubung melalui jalur arus dari GPIO dan 3.3V, tetapi pastikan rangkaian lain di ESP32 terhubung dengan ground untuk kelancaran kerja.

### Diagram Sederhana:

```
[ESP32]      [Resistor]      [LED]      [GPIO 23]
   |--- 3.3V ----/\/\/\/\----|>|---->|
```

### Penjelasan Rangkaian:
1. **3.3V ke Resistor**:
   - Anda menggunakan pin **3.3V** pada ESP32 untuk memberi daya pada LED melalui resistor yang membatasi arus agar LED tidak rusak.
   
2. **Resistor ke Anoda LED**:
   - Resistor terhubung ke **anoda (kaki panjang)** LED. Ini membatasi arus yang mengalir ke LED.
   
3. **GPIO 23 ke Katoda LED**:
   - **GPIO 23** digunakan untuk mengontrol LED. Ketika GPIO 23 diset ke **HIGH**, LED akan menyala. Ketika GPIO 23 diset ke **LOW**, LED akan mati. GPIO ini menghubungkan ke kaki pendek LED (katoda), dan dengan cara ini, GPIO 23 akan mengontrol sirkuit ground LED.

### Kode yang Digunakan:
Kode yang Anda berikan tetap berlaku, karena logika pengendalian LED tetap sama, hanya saja dalam rangkaian ini, Anda menghubungkan GPIO 23 ke katoda LED dan menggunakan 3.3V untuk memberi daya ke LED.

```cpp
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
```

Dengan rangkaian ini, LED akan berkedip sesuai dengan interval waktu yang telah Anda tentukan dalam kode (1 detik menyala dan 1 detik mati).

<a href="https://saweria.co/GundoWijoyo">Saweria</a>

Terimakasih semuanya 😊
