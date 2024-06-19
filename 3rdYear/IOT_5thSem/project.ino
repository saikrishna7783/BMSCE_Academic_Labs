#define FLAME_SENSOR_1 A0  // Analog pin connected to flame sensor 1 (e.g., top-left corner)
#define FLAME_SENSOR_2 A1  // Analog pin connected to flame sensor 2 (e.g., top-right corner)
#define FLAME_SENSOR_3 A2  // Analog pin connected to flame sensor 3 (e.g., bottom-left corner)
#define FLAME_SENSOR_4 A3  // Analog pin connected to flame sensor 4 (e.g., bottom-right corner)

enum Dir {
  TR, TL, BR, BL
};

char roomLayout[] = "+----+\n|----|\n|----|\n+----+\n";

void setup() {
  Serial.begin(9600);
  pinMode(FLAME_SENSOR_1, INPUT);
  pinMode(FLAME_SENSOR_2, INPUT);
  pinMode(FLAME_SENSOR_3, INPUT);
  pinMode(FLAME_SENSOR_4, INPUT);
}

void loop() {
  int flameValue1 = analogRead(FLAME_SENSOR_1);
  int flameValue2 = analogRead(FLAME_SENSOR_2);
  int flameValue3 = analogRead(FLAME_SENSOR_3);
  int flameValue4 = analogRead(FLAME_SENSOR_4);

  printFlameStatus(flameValue1, TL);
  printFlameStatus(flameValue2, TR);
  printFlameStatus(flameValue3, BL);
  printFlameStatus(flameValue4, BR);

  delay(1000);  // Adjust the delay based on your project requirements
}

void printFlameStatus(int flameValue, Dir dir) {
  // Serial.print(flameValue);
  if (flameValue < 500) {
    switch(dir) {
      case TL:
        Serial.println("Fire detected at - Top Left");
        strcpy(roomLayout, "+----+\n|----|\n|----|\n+----+\n");
        roomLayout[1] = '*';  // Top-left corner
        roomLayout[2] = '*';
        roomLayout[8] = '*';
        roomLayout[9] = '*';
        Serial.println(roomLayout);
        break;
      case TR:
        Serial.println("Fire detected at - Top Right");
        strcpy(roomLayout, "+----+\n|----|\n|----|\n+----+\n");
        roomLayout[3] = '*';  // Top-right corner
        roomLayout[4] = '*';
        roomLayout[10] = '*';
        roomLayout[11] = '*';
        Serial.println(roomLayout);
        break;
      case BL:
        Serial.println("Fire detected at - Bottom Left");
        strcpy(roomLayout, "+----+\n|----|\n|----|\n+----+\n");
        roomLayout[15] = '*';  // Bottom-left corner
        roomLayout[16] = '*';
        roomLayout[22] = '*';
        roomLayout[23] = '*';
        Serial.println(roomLayout);
        break;
      case BR:
        Serial.println("Fire detected at - Bottom Right");
        strcpy(roomLayout, "+----+\n|----|\n|----|\n+----+\n");
        roomLayout[17] = '*';  // Bottom-right corner
        roomLayout[18] = '*';
        roomLayout[24] = '*';
        roomLayout[25] = '*';
        Serial.println(roomLayout);
        break;
    }
  }
}
