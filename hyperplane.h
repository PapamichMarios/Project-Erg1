#ifndef __HYPERPLANE_H__
#define __HYPERPLANE_H__

#include <string>

class Hyperplane
{
	private:
		double * v;
		int w;
		double t;

	public:
		Hyperplane(int dim);
		~Hyperplane();

		/*== getters*/
		double* getVector();
		int getW();
		double getT();

		void printHyperplane(int dim);
		int computeH(std::vector<double> p);

};
#endif
