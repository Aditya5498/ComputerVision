#                           Image Shearing in X-Axis
# While the shearing image is on the x-axis,
# the boundaries of the image that are parallel to the x-axis
# keep their location, and the edges parallel to the y-axis 
# change their place depending on the shearing factor.
# vise versa for y axis

import numpy as np
import cv2 as cv

img = cv.imread("../SampleImages/simpleImage1.jpeg", 0)

rows,cols = img.shape

M = np.float32([[1, 0.5, 0], [0, 1, 0], [0, 0, 1]])
sheared_img = cv.warpPerspective(img, M, (int(cols*1.5), int(rows*1.5)))

cv.imshow("Initial Image",img)

cv.imshow("Final Image",sheared_img)
cv.waitKey(0)
cv.destroyAllWindows()

