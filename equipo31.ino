// --- definicion de pines ---

// semaforo vehicular este/oeste y oeste/este (cables verdes)
// al estar conectados en paralelo, un solo pin controla ambos lados
const int vehiculoEORojo = 13;
const int vehiculoEOAmarillo = 12;
const int vehiculoEOVerde = 11;

// semaforo peatonal este/oeste y oeste/este (cables celestes)
const int peatonalEORojo = 10;
const int peatonalEOVerde = 9;

// semaforo vehicular norte/sur y sur/norte (cables marrones)
const int vehiculoNSRojo = 8;
const int vehiculoNSAmarillo = 7;
const int vehiculoNSVerde = 6;

// semaforo peatonal norte/sur y sur/norte (cables naranjas)
const int peatonalNSRojo = 5;
const int peatonalNSVerde = 4;

// --- tiempos (en milisegundos) ---
const int tiempoVerde = 10000;   // 10 segundos
const int tiempoAmarillo = 5000; // 5 segundos

void setup() {
  // configurar todos los pines como salidas
  pinMode(vehiculoEORojo, OUTPUT);
  pinMode(vehiculoEOAmarillo, OUTPUT);
  pinMode(vehiculoEOVerde, OUTPUT);
  
  pinMode(peatonalEORojo, OUTPUT);
  pinMode(peatonalEOVerde, OUTPUT);
  
  pinMode(vehiculoNSRojo, OUTPUT);
  pinMode(vehiculoNSAmarillo, OUTPUT);
  pinMode(vehiculoNSVerde, OUTPUT);
  
  pinMode(peatonalNSRojo, OUTPUT);
  pinMode(peatonalNSVerde, OUTPUT);
}

void loop() {
  // ==========================================
  // fase 1: paso vehicular este/oeste
  // ==========================================
  // vehiculos e/o avanzan, peatones e/o esperan
  digitalWrite(vehiculoEORojo, LOW);
  digitalWrite(vehiculoEOVerde, HIGH);
  digitalWrite(peatonalEORojo, HIGH);
  digitalWrite(peatonalEOVerde, LOW);
  
  // vehiculos n/s esperan, peatones n/s cruzan
  digitalWrite(vehiculoNSVerde, LOW);
  digitalWrite(vehiculoNSRojo, HIGH);
  digitalWrite(peatonalNSRojo, LOW);
  digitalWrite(peatonalNSVerde, HIGH);
  
  delay(tiempoVerde);

}