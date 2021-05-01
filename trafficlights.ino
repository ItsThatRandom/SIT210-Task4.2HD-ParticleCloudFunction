// ------------
// Web controlled traffic lights
// ------------

int red = D6; // Red LED.
int blue = D5; // Blue LED.
int green = D4; // Green LED.
int redStatus = 0; // Red light on/off status.
int blueStatus = 0; // Blue light on/off status.
int greenStatus = 0; // Green light on/off status.
String colour; // String to be passed in.

void setup() {
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(green, OUTPUT);
    Particle.function("toggleLight", toggle);
}

void loop() {

}

// Toggles light on or off based on current light status and 
// string arguement indicating which light to be toggled.
int toggle(String colour)
{
    if (strcmp(colour, "red") == 0)
    {
        if (redStatus == 0)
        {
            digitalWrite(red, HIGH);
            redStatus = 1;
        }
        else
        {
            digitalWrite(red, LOW);
            redStatus = 0;
        }
    }
    else if (strcmp(colour, "blue") == 0)
    {
        if (blueStatus == 0)
        {
            digitalWrite(blue, HIGH);
            blueStatus = 1;
        }
        else
        {
            digitalWrite(blue, LOW);
            blueStatus = 0;
        }
    }
    else if (strcmp(colour, "green") == 0)
    {
        if (greenStatus == 0)
        {
            digitalWrite(green, HIGH);
            greenStatus = 1;
        }
        else
        {
            digitalWrite(green, LOW);
            greenStatus = 0;
        }
    }
    
    return 1;
}