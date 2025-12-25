#include"mytemperature.h"
double cel_to_fah(double cel)
{
	double fah = cel * 9 / 5.0 + 32;
	return fah;
}
double fah_to_cel(double fah)
{
	double cel = (fah - 32) * 5 / 9.0;
	return cel;
}