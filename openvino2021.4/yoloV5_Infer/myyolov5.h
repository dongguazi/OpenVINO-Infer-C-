#pragma once
#define DLL_EXPORT __declspec(dllexport)
#include "detector.h"
#include <ctime>

extern "C" DLL_EXPORT Yolov5Dectector * CreateYolov5Parser_CPU();
//
extern "C" DLL_EXPORT void InitializeDetector_CPU(Yolov5Dectector * m_yolov5,
	const char* device_char, const char* xml_path_char);
//
extern "C" DLL_EXPORT void PredictDetector_CPU(Yolov5Dectector * m_yolov5,
	unsigned char* image_batch,
	float* x1_ptr, float* y1_ptr, float* x2_ptr, float* y2_ptr,
	float* prob_ptr, int* class_ptr, int* num_boxes, int buffer_size,
	int width, int height, int batch_size, float conf_thresh, float nms_thres);
//
extern "C" DLL_EXPORT void DisposeDetector_CPU(Yolov5Dectector * m_yolov5);