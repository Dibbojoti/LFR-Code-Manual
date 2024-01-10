#define lms 5
#define lmf 6
#define lmb 7
#define rmf 8
#define rmb 9
#define rms 10

int s[6], sum;
int base[6] = { 1, 2, 4, 8, 16, 32 };
int position[6] = { 1, 2, 3, 4, 5, 6 };
int threshold = 512, sensor;
int lsp = 25, rsp = 25;
int pos;
int line_prop=2;
void setup() {
  pinMode(lmf, OUTPUT);
  pinMode(lmb, OUTPUT);
  pinMode(rmf, OUTPUT);
  pinMode(rmb, OUTPUT);
  // motor(10 * lsp, 10 * rsp);
  
} 

void loop() {
line_follow();
}
