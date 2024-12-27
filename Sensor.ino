void sensorAir() {

  // Baca nilai dari sensor level air
  int nilaiSensor = analogRead(SensorWaterLevel);
  int hasil = map(nilaiSensor, 0, 1023, 0, 255);  // Pemetaan nilai sensor ke rentang 0-255
  tinggiAir = hasil * 4.0 / 255.0;                // Kalkulasi tinggi air (misalnya dalam cm)

 if (isnan(nilaiSensor) || isnan(hasil)) {
    Serial.println("Failed to read from DHT21 sensor!");  //satu dari pembacaan gagal maka akan mencetak di serial monitor
  } else {
    Serial.print("Tinggi Air: ");  //Menampilkan kelembapan pada serial monitor
    Serial.print(tinggiAir);                 //Menampilkan nilai dari kelembapan
  }
}