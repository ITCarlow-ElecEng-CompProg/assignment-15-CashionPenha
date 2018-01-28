/**
 * Cashion Penha
 * Lab 15
 * Sine wave Calculations
 * 27/01/2018
 */

/**< Preprocessor directives */
#include <iostream>
#include <math.h>
using namespace std;

/**< Definition of class called sinewave  */
class sinewave
{
    private:
        double A,f,p,doff,vt,T,t,vrms,pr;

    /**< Data members within public*/
    public:
        sinewave(void)
        {
            A=1.0;
            f=1000;
            p=0;
            doff=0;
        }

        sinewave(double amp, double freq, double phase, double dofff)
        {
            A=amp;
            f=freq;
            p=phase;
            doff=dofff;
        }

        /**< Member function to get user input */
        void getvals(void)
        {
            cout << "Enter Amplitude: ";
            cin >> A;
            cout << "Enter Frequency: ";
            cin >> f;
            cout << "Enter Phase: ";
            cin >> p;
            cout << "Enter Dc offset: ";
            cin >> doff;
            cout << "Enter time: ";
            cin >> t;
        }

        /**< Member function to get instantaneous voltage */
        double getvt(void)
        {
            pr=(p*M_PI)/180;
            vt=A*sin(2.0*M_PI*f*t+pr)+doff;
            cout << "The instantaneous voltage is: " << vt << endl;
            return vt;
        }

        /**< Member function to get the period */
        double getT(void)
        {
            T=(1.0/f);
            cout << "The period is: " << T << endl;
            return T;
        }

        /**< Member function to get vrms value */
        double getvrms(void)
        {
            vrms=(A/sqrt(2.0));
            cout << "The rms voltage is: " << vrms << endl;
            return vrms;
        }

};

/**< Main Function */
int main()
{
    /**< Object instantiation */
    sinewave waveform1,waveform2;

    /**< Displaying result of waveform 1 */
    cout << "Waveform 1 calculations" << endl;
    cout << "-----------------------" << endl;
    waveform1.getvals();
    waveform1.getT();
    waveform1.getvrms();
    waveform1.getvt();

    /**< Displaying result of waveform 2 */
    cout << "\nWaveform 2 calculations" << endl;
    cout << "-----------------------" << endl;
    waveform2.getvals();
    waveform2.getT();
    waveform2.getvrms();
    waveform2.getvt();

    return 0;
}
