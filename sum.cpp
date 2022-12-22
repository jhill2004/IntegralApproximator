#include<iostream>

int main();
float areasquared(float upper, float lower, float coeff, int num, int degree);
float polyarea(int terms);

float polyarea(int terms) {
    float upper{};
    float lower{};
    float num{};
    float coeff{};
    float degree{};
    float totrea{};
    for (int i{};i < terms; ++i){
        std::cout << "Enter upper, lower, number of segments, coeff, degree (all seperated by a space: ";
        std::cin >> upper >> lower >> num >> coeff >> degree;
        totrea = totrea + areasquared(upper, lower, coeff, num, degree);


    }
    return totrea;

}

float areasquared(float upper, float lower, float coeff, int num, int degree){
    float deltax{(upper-lower)/num};

    float sum{};
    for (int i{};i<num;++i){
        float addition{deltax};
        //std::cout << "one " << addition << std::endl;
        for (int j{}; j<degree; ++j){
            addition = addition * ((i * deltax)+lower);
            //std::cout << "aa" << addition << std::endl;
        }
        sum = sum + addition;
     
    }

    

 

    return coeff * sum;

}

int main(){
    int x{};
    std::cout << "How many terms is your polynomial?" << std::endl;
    std::cin >> x;
    float y{polyarea(x)};
    std::cout << "The approximated area is: " << y;
}