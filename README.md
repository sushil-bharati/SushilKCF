# SushilKCF

Code by: Sushil Bharati

Affiliations: University of Kansas, Computer Vision Group, Information and Telecommunication Technology Center (ITTC). 

Kernelized Correlation framework based salient object tracking with adaptive detection for real-time application in UAVs/Drones or other aerial systems. Light weight, tested in Nvidia Jetson Tegra-K1 kit.

The code is meant to be used only for scholarly/research purpose.

## Dependencies:
1. OpenCV 2.4 and higher
2. Cmake

If you are using any part or whole code, please cite:
## Citations

@INPROCEEDINGS{7814672,
author={S. P. Bharati and S. Nandi and Y. Wu and Y. Sui and G. Wang},
booktitle={2016 IEEE 28th International Conference on Tools with Artificial Intelligence (ICTAI)},
title={Fast and Robust Object Tracking with Adaptive Detection},
year={2016},
pages={706-713},
keywords={computer vision;image filtering;object detection;object tracking;KCF tracker;adaptive object detection;computer vision;kernelized correlation filter;object boundary;object localization;object location;object tracking confidence value;post-processing technique;saliency map;salient object detection;tracking accuracy;tracking speed;Correlation;Detectors;Object detection;Real-time systems;Target tracking;Training},
doi={10.1109/ICTAI.2016.0112},
month={Nov},}

OR

S. P. Bharati, S. Nandi, Y. Wu, Y. Sui and G. Wang, "Fast and Robust Object Tracking with Adaptive Detection," 2016 IEEE 28th International Conference on Tools with Artificial Intelligence (ICTAI), San Jose, CA, 2016, pp. 706-713.


## How to start? (I personally use Ubuntu 16.04.2 LTS)
1. Open terminal
2. extract every contents of all.zip to the current working directory (the directory where you downloaded all the files to)
3. type cmake CMakeLists.txt in the terminal to build dependencies
4. type ./KCF to run the tracker

## How to modify and test in other datasets?
1. open src (directory) 
2. open runtracker.cpp in text-editor
3. modify seq[] to add new datasets [line# 530] and change/add variable limit to total # of frames in the dataset [NOTE: you also need to add the directory with same name inside dataset (directory) and your new added directory should contain images.txt with all the image filename listed in the order you want the tracker to execute)]
4. Average speed is by default set up for 2 datasets only for demo. If you are using more than 2 datasets, you need to manually modify the # of datasets in line# 950 to see the correct average speed. Make sure SILENT and verbose (line# 559-560) is true before this. [NOTE: To observe the frames, SILENT must be set false and to print the average speed, verbose must be set true. Displaying frames on the screen affect run-time.]

Please report any bugs or redirect your queries to sushil.bharati007@gmail.com (Author)

## Reference:
1. S. P. Bharati, S. Nandi, Y. Wu, Y. Sui and G. Wang, "Fast and Robust Object Tracking with Adaptive Detection," 2016 IEEE 28th International Conference on Tools with Artificial Intelligence (ICTAI), San Jose, CA, 2016, pp. 706-713.
2. J. F. Henriques, R. Caseiro, P. Martins, J. Batista, "High-Speed Tracking with Kernelized Correlation Filters", TPAMI 2015.
3. J. F. Henriques, R. Caseiro, P. Martins, J. Batista,"Exploiting the Circulant Structure of Tracking-by-detection with Kernels", ECCV 2012.
