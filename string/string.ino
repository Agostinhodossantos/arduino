void setup() {
  String my_str = "This is y string";
  Serial.begin(9600);

  // print the string
  Serial.println(my_str);

  // change the string to upper-case
  my_str.toUpperCase();
  Serial.println(my_str);

  // overwrite the string
  my_str = "My new string";
  Serial.println(my_str);

  // replace a word in the string
  my_str.replace("string", "Arduino sketch");
  Serial.println(my_str);

  // get the length of the string
  Serial.println("String length is:  ");
  Serial.println(my_str.length());

  
}

void loop() {
  // put your main code here, to run repeatedly:

}
