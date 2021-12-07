void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Ready");//reza,ali,Mohammed,kasra
                          //    4   8        17
                          //
}

void loop()
{

  if (Serial.available())
  {
    Serial.println(splitter(Serial.readStringUntil("\n"), ',', 1));// read data from Srtial and return Secend value
  }
}

String splitter(String value, char splitChar, byte selection)
{
  value.trim();
  byte position[5] = {0, 0, 0, 0, value.length()};//if need more split add to this array
  byte j = 1;
  for (byte i = 0; i < value.length(); i++)
  {
    if (value.charAt(i) == Slipt_char)
    {
      position[j] = i+1;
      j++;
    }
  }
  return value.substring(position[selection], position[selection + 1]-1);
}
