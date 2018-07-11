void setup() {
 int my_array[5] = {1,10,100,1000,10000};
 int i;
 Serial.begin(9600);
 
 for (i = 0; i < 5; i++)
 {
  Serial.println(my_array[i]);
 }
}

void loop() {
  // put your main code here, to run repeatedly:

}
