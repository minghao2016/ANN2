#ifndef UTILS_H 
#define UTILS_H

#include <RcppArmadillo.h>
using namespace Rcpp;
using namespace arma;

// [[Rcpp::export]]
std::string progressBar(int progress);

mat repColVec(vec colvec, int n);

class scaler 
{
private:
  rowvec z_mu, z_sd;
  bool standardize;
public:
  scaler (mat z, bool standardize_, List net_param_);
  mat scale(mat z);
  mat unscale(mat z);
};

class sampler 
{
private:
  int n_train;
  mat X_train, Y_train, X_val, Y_val;
  std::list<uvec> indices;
  std::list<uvec>::iterator Xit;
  std::list<uvec>::iterator Yit;
public:
  int n_batch;
  bool validate;
  sampler (mat X_, mat y_, List train_param);
  void shuffle();
  mat nextXb();
  mat nextYb();
  mat getXv();
  mat getYv();
};

class tracker {
private:
  bool verbose, validate;
  int k, n_passes;
  double one_percent;
public:
  tracker();
  ~tracker();
  mat train_history;
  void setTracker(int n_passes_, bool validate_, List train_param_);
  void track (double train_loss, double val_loss);
};

#endif