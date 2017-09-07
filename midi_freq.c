#include <stdio.h>
//#include <math.h>

double pow(double, double);
double log(double);


/* globals */
double semitone_ratio;
double c0;

/* find the nearest note to a give frequency in Hz */
/* uses the log rule :
  log_a(N) = log_b(N) / log_b(a)
*/

void freq2midi(double frequency) {
    double fracmidi = log(frequency / c0) / log(semitone_ratio);
    int midinote = (int) (fracmidi + 0.5);
    printf("The nearest MIDI note to frequency %f is %d\n", frequency, midinote);
}

int main() {
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

    freq2midi(frequency);

    return 0;

}