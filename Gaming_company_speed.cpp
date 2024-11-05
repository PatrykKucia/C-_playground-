#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

class GamePlatform
{  
    public:
        static double  calculateFinalSpeed(double initialSpeed, const vector<double>& angles)
        {
            double finalSpeed = 0;
            double previousSpeed = initialSpeed;
            for (double angle : angles)
            {
                if(angle < 0)
                {
                    finalSpeed = previousSpeed - angle;
                }
                else if(angle > 0)
                {
                    finalSpeed = previousSpeed - angle;
                }
                else
                {
                    finalSpeed = previousSpeed;
                }

                if (finalSpeed <= 0) {
                return 0;
                }
                previousSpeed = finalSpeed;
            }
            return finalSpeed;
        }
};

int main()
{
    cout << GamePlatform::calculateFinalSpeed(60.0, { 0, 30, 0, -45, 0 }) << std::endl;
    return 0;
}