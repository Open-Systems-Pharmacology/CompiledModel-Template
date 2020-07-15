#define MODELNAME MySuperModel 
#include "ModelDerived.h"

void CLASSNAME(MODELNAME)::ODERHSFunction(const double Time, const double *__restrict__ y, const double *__restrict__ P, const unsigned int *__restrict__ S, double *__restrict__ dy) {

    dy[0] = 
            (P[3]*y[1]*1e-05);
    dy[1] = 
            (0-(P[3]*y[1]*1e-05));
}

bool CLASSNAME(MODELNAME)::ODEExplicitSwitch(const double Time, double *__restrict__ y, double *__restrict__ P, unsigned int *__restrict__ S) {
    bool switchUpdate = false;

    return switchUpdate;
}

void CLASSNAME(MODELNAME)::ODEImplicitSwitch(const double Time, double *__restrict__ y, double *__restrict__ P, unsigned int *__restrict__ S, double *__restrict__ gout) {
}

void CLASSNAME(MODELNAME)::ODEObservers(const double Time, const double *__restrict__ y, const double *__restrict__ P, const unsigned int *__restrict__ S, double *__restrict__ obs) {

    obs[0] = P[13];
    obs[1] = (( ((y[0]+y[1]) > 0) ? (y[0]/(y[0]+y[1])) : 0 ));
    obs[2] = P[14];
}

void CLASSNAME(MODELNAME)::ODEInitialParameters(double *__restrict__ P) {
}

void CLASSNAME(MODELNAME)::ODEInitialValues(double *__restrict__ y, double *__restrict__ P, unsigned int *__restrict__ S) {

    y[0] = P[1]; // S1|Organism|A
    y[1] = P[2]; // S1|Organism|B

}

namespace {
unsigned int _dimY() { static const unsigned int dimY = 2; return dimY; }

const double* _outputTimePoints() { static const double outputTimePoints[] = { 0.00000000000000000e+00, 1.50000000000000000e+01
                                                                               , 3.00000000000000000e+01, 4.50000000000000000e+01, 6.00000000000000000e+01, 7.50000000000000000e+01, 9.00000000000000000e+01, 1.05000000000000000e+02, 1.20000000000000000e+02, 1.35000000000000000e+02, 1.50000000000000000e+02, 1.65000000000000000e+02, 1.80000000000000000e+02, 1.95000000000000000e+02, 2.10000000000000000e+02, 2.25000000000000000e+02, 2.40000000000000000e+02, 2.55000000000000000e+02, 2.70000000000000000e+02, 2.85000000000000000e+02, 3.00000000000000000e+02, 3.15000000000000000e+02, 3.30000000000000000e+02, 3.45000000000000000e+02, 3.60000000000000000e+02, 3.75000000000000000e+02, 3.90000000000000000e+02, 4.05000000000000000e+02, 4.20000000000000000e+02, 4.35000000000000000e+02, 4.50000000000000000e+02, 4.65000000000000000e+02, 4.80000000000000000e+02, 4.95000000000000000e+02, 5.10000000000000000e+02, 5.25000000000000000e+02, 5.40000000000000000e+02, 5.55000000000000000e+02, 5.70000000000000000e+02, 5.85000000000000000e+02, 6.00000000000000000e+02, 6.15000000000000000e+02, 6.30000000000000000e+02, 6.45000000000000000e+02, 6.60000000000000000e+02, 6.75000000000000000e+02, 6.90000000000000000e+02, 7.05000000000000000e+02, 7.20000000000000000e+02, 7.35000000000000000e+02, 7.50000000000000000e+02, 7.65000000000000000e+02, 7.80000000000000000e+02, 7.95000000000000000e+02, 8.10000000000000000e+02, 8.25000000000000000e+02, 8.40000000000000000e+02, 8.55000000000000000e+02, 8.70000000000000000e+02, 8.85000000000000000e+02, 9.00000000000000000e+02, 9.15000000000000000e+02, 9.30000000000000000e+02, 9.45000000000000000e+02, 9.60000000000000000e+02, 9.75000000000000000e+02, 9.90000000000000000e+02, 1.00500000000000000e+03, 1.02000000000000000e+03, 1.03500000000000000e+03, 1.05000000000000000e+03, 1.06500000000000000e+03, 1.08000000000000000e+03, 1.09500000000000000e+03, 1.11000000000000000e+03, 1.12500000000000000e+03, 1.14000000000000000e+03, 1.15500000000000000e+03, 1.17000000000000000e+03, 1.18500000000000000e+03, 1.20000000000000000e+03, 1.21500000000000000e+03, 1.23000000000000000e+03, 1.24500000000000000e+03, 1.26000000000000000e+03, 1.27500000000000000e+03, 1.29000000000000000e+03, 1.30500000000000000e+03, 1.32000000000000000e+03, 1.33500000000000000e+03, 1.35000000000000000e+03, 1.36500000000000000e+03, 1.38000000000000000e+03, 1.39500000000000000e+03, 1.41000000000000000e+03, 1.42500000000000000e+03, 1.44000000000000000e+03 }; return outputTimePoints; }
unsigned int _dimOutputTimePoints() { static const unsigned int dimOutputTimePoints = 97; return dimOutputTimePoints; }

const unsigned int* _positiveStateIndices() { static const unsigned int positiveStateIndices[] = { 0, 1}; return positiveStateIndices; }
const unsigned int _dimPositiveStateIndices() { static const unsigned int dimPositiveStateIndices = 2; return dimPositiveStateIndices; }

std::set<double> _explicitSwitches(const double *P) {
    std::set<double> s;

    s.insert(0.00000000000000000e+00);
    return s;
}

unsigned int _dimImplicitSwitches() { static const unsigned int dimImplicitSwitches = 0; return dimImplicitSwitches; }
const double *_P_init() { static const double P_init[] = { 1.00000000000000000e+00, 1.00000000000000000e+00, 2.00000000000000000e+00, 1.80000000000000000e+02, 2.00000000000000012e-09, 2.00000000000000012e-09, 1.00000000000000006e-09, 1.00000000000000005e-04, 1.00000000000000004e-10, 0.00000000000000000e+00, 6.00000000000000000e+01, 1.00000000000000000e+05, 1.00000000000000000e+00, 1.00000000000000000e+00, 2.00000000000000000e+00
                                                           , 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; return P_init; }
const unsigned int *_P_map() { static const unsigned int P_map[] = {1, 2, 3, 4, 21, 22, 24, 26, 28, 30, 32, 34, 36, 7, 15}; return P_map; }

const unsigned int *_O_map() { static const unsigned int O_map[] = {9, 11, 17}; return O_map; }

const unsigned int *_Y_map() { static const unsigned int Y_map[] = {5, 12}; return Y_map; }

const double *_Y_sca() { static const double Y_sca[] = {1.00000000000000000e+00, 1.00000000000000000e+00}; return Y_sca; }

const unsigned int *_S_init() { static const unsigned int S_init[] = {
                                                    -1 /* workaround for Visual Studio to prevent empty arrays */}; return S_init; }

unsigned int _dimP() { static const unsigned int dimP = 15; return dimP; }
unsigned int _dimP_free() { static const unsigned int dimP_free = 15; return dimP_free; }
unsigned int _dimS() { static const unsigned int dimS = 0; return dimS; }
unsigned int _dimObservers() { static const unsigned int dimObservers = 3; return dimObservers; }

size_t _hash() { static const size_t hash = 4360097506408888142U; return hash; }
int _dimNNZ() { static int dimNNZ = 2; return dimNNZ; }
const int* _jacRows() { static const int jacRows[] = {0, 1}; return jacRows; }
const int* _jacCols() { static const int jacCols[] = {0, 0, 2}; return jacCols; }
int _dimNNZ_fp() { static int dimNNZ_fp = 2; return dimNNZ_fp; }
const int* _jacRows_fp() { static const int jacRows_fp[] = {0, 1}; return jacRows_fp; }
const int* _jacCols_fp() { static const int jacCols_fp[] = {0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2}; return jacCols_fp; }
int _dimNNZ_ox() { static int dimNNZ_ox = 2; return dimNNZ_ox; }
const int* _jacRows_ox() { static const int jacRows_ox[] = {0, 1}; return jacRows_ox; }
const int* _jacCols_ox() { static const int jacCols_ox[] = {0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2}; return jacCols_ox; }
int _dimNNZ_op() { static int dimNNZ_op = 2; return dimNNZ_op; }
const int* _jacRows_op() { static const int jacRows_op[] = {0, 1}; return jacRows_op; }
const int* _jacCols_op() { static const int jacCols_op[] = {0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2}; return jacCols_op; }
}

void CLASSNAME(MODELNAME)::ODEOptions(double &relTol, double &absTol, double &hInit, double &hMin, double &hMax, long int &maxSteps, bool &useJac, const double *__restrict__ P) {
    relTol = 1.00000000000000005e-04;
    absTol = 1.00000000000000006e-09;
    hInit  = 1.00000000000000004e-10;
    hMin   = 0.00000000000000000e+00;
    hMax   = 6.00000000000000000e+01;
    maxSteps = 100000;
    useJac = 1;
}

#define CONVERT(x) #x
#define STRING(x) CONVERT(x)
CLASSNAME(MODELNAME)::CLASSNAME(MODELNAME)() : Model(STRING(MODELNAME), _dimY(), _dimP(), _dimP_free(), _dimS(), _dimOutputTimePoints(),
                                              _dimImplicitSwitches(), _dimObservers(), _dimNNZ(), _dimNNZ_fp(), _dimNNZ_ox(), _dimNNZ_op(),
                                              _P_map(), _O_map(), _Y_map(), _Y_sca(), _P_init(), _S_init(), _outputTimePoints(),
                                              _jacRows(), _jacCols(), _jacRows_fp(), _jacCols_fp(), _jacRows_op(), _jacCols_op(),
                                              _jacRows_op(), _jacCols_op(), _hash(), _explicitSwitches) {
}
static CLASSNAME(MODELNAME) MODELNAME;
void CLASSNAME(MODELNAME)::ODEJacDense(const double Time, const double *__restrict__ y, const double *__restrict__ P, const unsigned int *__restrict__ S, double *__restrict__ J) {

    J[2] = ((P[3]*1e-05));
    J[3] = ((0-(P[3]*1e-05)));
}

void CLASSNAME(MODELNAME)::ODEJacDense_fp(const double Time, const double *__restrict__ y, const double *__restrict__ P, const unsigned int *__restrict__ S, double *__restrict__ J) {

    J[6] = ((y[1]*1e-05));
    J[7] = ((0-(y[1]*1e-05)));
}

void CLASSNAME(MODELNAME)::ODEJacDense_ox(const double Time, const double *__restrict__ y, const double *__restrict__ P, const unsigned int *__restrict__ S, double *__restrict__ J) {

    J[6] = ((y[1]*1e-05));
    J[7] = ((0-(y[1]*1e-05)));
}

void CLASSNAME(MODELNAME)::ODEJacDense_op(const double Time, const double *__restrict__ y, const double *__restrict__ P, const unsigned int *__restrict__ S, double *__restrict__ J) {

    J[6] = ((y[1]*1e-05));
    J[7] = ((0-(y[1]*1e-05)));
}

void CLASSNAME(MODELNAME)::ODEJacSparse(const double Time, const double *__restrict__ y, const double *__restrict__ P, const unsigned int *__restrict__ S, double *__restrict__ J) {

    J[0] = ((P[3]*1e-05));
    J[1] = ((0-(P[3]*1e-05)));
}

void CLASSNAME(MODELNAME)::ODEJacSparse_fp(const double Time, const double *__restrict__ y, const double *__restrict__ P, const unsigned int *__restrict__ S, double *__restrict__ J) {

    J[0] = ((y[1]*1e-05));
    J[1] = ((0-(y[1]*1e-05)));
}

void CLASSNAME(MODELNAME)::ODEJacSparse_ox(const double Time, const double *__restrict__ y, const double *__restrict__ P, const unsigned int *__restrict__ S, double *__restrict__ J) {

    J[0] = ((y[1]*1e-05));
    J[1] = ((0-(y[1]*1e-05)));
}

void CLASSNAME(MODELNAME)::ODEJacSparse_op(const double Time, const double *__restrict__ y, const double *__restrict__ P, const unsigned int *__restrict__ S, double *__restrict__ J) {

    J[0] = ((y[1]*1e-05));
    J[1] = ((0-(y[1]*1e-05)));
}

