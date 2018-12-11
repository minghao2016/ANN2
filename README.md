[![Licence](https://img.shields.io/badge/licence-GPL--3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0.en.html) 
[![CRAN\_Status\_Badge](http://www.r-pkg.org/badges/version/ANN2)](https://cran.r-project.org/package=ANN2) ![](http://cranlogs.r-pkg.org/badges/grand-total/ANN2?color=green) ![](http://cranlogs.r-pkg.org/badges/last-week/ANN2?color=green)

# ANN2
Artificial Neural Networks package for R 

Training of neural networks for classification and regression tasks using mini-batch gradient descent. Special features include a function for training autoencoders, which can be used to detect anomalies, and some related plotting functions. Multiple activation functions are supported, including tanh, relu, step and ramp. For the use of the step and ramp activation functions in detecting anomalies using autoencoders, see Hawkins et al. (2002) <doi:10.1007/3-540-46145-0_17>. Furthermore, several loss functions are supporterd, including robust ones such as Huber and pseudo-Huber loss, as well as L1 and L2 regularization. The possible options for optimization algorithms are RMSprop, Adam and SGD with momentum. The package contains a vectorized C++ implementation that facilitates fast training through mini-batch learning.
