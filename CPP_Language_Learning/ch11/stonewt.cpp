// stonewt.cpp -- Stonewt methods
#include <iostream>
#include "stonewt.h"

using std::cout;

// construct Stonewt object from double valude
Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{
}

// show weight in stones
void Stonewt::show_stn() const
{
    cout << stone << "stone, " << pds_left << " pounds\n";
}

// show weight in punds
void Stonewt::show_lbs() const
{
    cout << pounds << " pounds\n";
}

