#include <iostream>
#include "tools.h"

using Eigen::VectorXd;
using Eigen::MatrixXd;
using std::vector;
using namespace std;

Tools::Tools() {}

Tools::~Tools() {}

VectorXd Tools::CalculateRMSE(const vector<VectorXd> &estimations,
                              const vector<VectorXd> &ground_truth) {
  VectorXd rmse(4);
  rmse << 0, 0, 0, 0;
  int N = estimations.size();
  /**
   *   DONE:
   * Calculate the RMSE here.
   */
  //Sanity checks
  if(estimations.size() <= 0 || (estimations.size() != ground_truth.size()))
    {
        cout << "Sizes dont match or are zero!!! RMSE cannot be calculated." << endl;
        return rmse;
    }

  for(int i = 0; i < N; i++)
    {
        VectorXd diff(4);
        VectorXd diff2(4);
        diff = estimations[i] - ground_truth[i];
        diff2 = diff.array() * diff.array();
        rmse = rmse + diff2;
    }
    //calculate the mean
    rmse = (1.0/N)*rmse.array();
    //calculate the square root
    rmse = rmse.array().sqrt();

    return rmse;
}
