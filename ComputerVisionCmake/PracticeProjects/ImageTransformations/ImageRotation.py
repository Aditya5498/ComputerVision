import numpy as np
import cv2 as cv

img = cv.imread("../SampleImages/simpleImage1.jpeg", 0)

rows,cols = img.shape

M = np.float32([[1,  0, 0], [0, -1, rows], [0,  0, 1]])
img_rotation = cv.warpAffine(img,
                             cv.getRotationMatrix2D((cols/2, rows/2),
                                                    30, 0.9),
                             (cols, rows))
cv.imshow("Initial Image",img)

cv.imshow("Final Image",img_rotation)
cv.waitKey(0)
cv.destroyAllWindows()

