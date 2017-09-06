#include <stdio.h>
//#include <math.h>

double pow(double, double);

int main() {
    double semitone_ratio;
    double c0;
    double c5;
    double frequency;
    int midinote;

    semitone_ratio = pow(2, 1 / 12.0);

    /* find middle C, three semitones above low A = 220 */
    c5 = 220 * pow(semitone_ratio, 3);

    /* MIDI Note 0 is C, 5 Octaves below Middle C */
    c0 = c5 * pow(0.5, 5);

    /* calculate a frequency for a given MIDI Note Number */
    midinote = 73; /* C# above A = 440 */
    frequency = c0 * pow(semitone_ratio, midinote);

    printf("MIDI Note %d has frequency %f\n", midinote, frequency);

    return 0;

}