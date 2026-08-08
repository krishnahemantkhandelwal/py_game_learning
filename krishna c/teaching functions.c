#include <stdlib.h>

int main() {
    system("PowerShell -Command \"Add-Type -AssemblyName System.Speech; "
           "(New-Object System.Speech.Synthesis.SpeechSynthesizer).Speak('dont tryna fool me lil bro');\"");
    return 0;
}
