#ifndef TEST_UTILS_H 
#define TEST_UTILS_H

#include <RcppArmadillo.h>

// Include needed header files
#include "Activations.h"

// ---------------------------------------------------------------------------//
// RANDOM NUMBER GENERATION
// ---------------------------------------------------------------------------//

// This is needed for random number generation since Armadillo's RNG does not 
// seem to work nicely with testthat. Not sure what is going wrong. The first 
// time the test runs, the number are generated as expected by randu or randn
// but the second time, it generates all values close to zero

// Gaussian Random Matrix Generator
arma::mat RNG_gaussian(int n_rows, int n_cols, double mu = 0.0, 
                       double sd = 1.0);

// Uniform Random Matrix Generator
arma::mat RNG_uniform(int n_rows, int n_cols, double min_val = 0.0, 
                      double max_val = 1.0);

// ---------------------------------------------------------------------------//
// FUNCTION TESTING
// ---------------------------------------------------------------------------//

class FunctionTester 
{
private:
  double rel_tol, abs_tol;
  
public:
  std::unique_ptr<Activation> g;
  FunctionTester (std::string activ_type, double rel_tol_, double abs_tol_);
  bool grad_check (arma::mat X, bool obs_wise = false);
  bool eval_check (double in_value, double out_value);
  
};


#endif
