int LED_PIN = 2;
int MIC_PIN = 0;

// === SETTINGS ===
int THRESHOLD = 270;
int TIMEOUT = 800;
int PEAKS_TO_TOGGLE = 2;

const int sampleWindow = 50;

// === STATE VARIABLES ===
unsigned long lastPeak = 0;
int peakCounter = 0;
int statePin = LOW;


void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Peak (clap) found?

  unsigned int noise = getNoiseLevel();
  if (noise > THRESHOLD) {
    Serial.println(noise);
    peakCounter++;
    lastPeak = millis();
  }

  // Time out?
  if (millis() - lastPeak > TIMEOUT && peakCounter > 0) {
    peakCounter = 0;
  }

  // Time to toggle?
  if (peakCounter == PEAKS_TO_TOGGLE) {
    toggleLights();
    peakCounter = 0;
  }
}
