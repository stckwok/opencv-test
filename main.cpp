#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
using namespace std;
using namespace cv;

int main()
{
    Mat image;
    image = cv::imread("default.jpg", 1);
    // Error Handling
    if (image.empty()) {
        cout << "Image File "
             << "Not Found" << endl;

        // wait for any key press
        cin.get();
        return -1;
    }
    namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
    imshow("Display Image", image);
    waitKey(0);
    // Destroy the windows
    destroyWindow("Display Image");

    return 0;

}
