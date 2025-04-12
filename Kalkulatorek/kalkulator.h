#pragma once


class cal {

	double mem = 1;
public:
    void perflag();
    bool getper();
    double add(double ekran);
    double sub(double ekran);
    double mlt(double ekran);
    double div(double ekran);
    double mod(double ekran);
    double pier();
    void reset();
    void setmem(double a);
    double retmem();
};
