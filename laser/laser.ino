void setup ()
{
   pinMode (13, OUTPUT); // define the digital output interface 13 feet
}
void loop () {
   digitalWrite (13, HIGH); // open the laser head
   delay (5000); // delay one second
   digitalWrite (13, LOW); // turn off the laser head
   delay (5000); // delay one second
}
