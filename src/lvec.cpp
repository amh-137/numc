#include "lvec.h"


double lvec::mag(){
    return (x[0] * x[0]) - ((x[1]*x[1]) + (x[2]*x[2]) + (x[3]*x[3]));
}