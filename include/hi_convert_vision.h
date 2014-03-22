/* 
 * File:   hi_convert_vision.h
 * Author: ooaho
 *
 * Created on 2014/03/17, 22:21
 */

#ifndef HI_CONVERT_VISION_H
#define	HI_CONVERT_VISION_H

namespace cv{
	class Mat;
}
namespace Vision{
	class Matrix;
}

// Convert Vision::Matrix to cv::Mat
cv::Mat operator>>(const Vision::Matrix src, cv::Mat& dst);
cv::Mat operator<<(cv::Mat& dst, const Vision::Matrix src);
//__declspec(dllexport) cv::Mat operator>>(const Vision::Matrix src, cv::Mat& dst);
//__declspec(dllexport) cv::Mat operator<<(cv::Mat& dst, const Vision::Matrix src);

// Convert cv::Mat to Vision::Matrix
Vision::Matrix operator>>(const cv::Mat src, Vision::Matrix& dst);
Vision::Matrix operator<<(Vision::Matrix& dst, const cv::Mat src);
//__declspec(dllexport) Vision::Matrix operator>>(const cv::Mat src, Vision::Matrix& dst);
//__declspec(dllexport) Vision::Matrix operator<<(Vision::Matrix& dst, const cv::Mat src);

#endif	/* HI_CONVERT_VISION_H */

